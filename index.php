<?php
session_start();

$ORACLE = "/cs/home/cse11011/www/3311/oracle/oracle";
$alerts = array();

function run_oracle($script, $expected) {
  global $ORACLE;
  $script_file = tempnam(sys_get_temp_dir(), '3311-oracle-script');

  $script_handle = fopen($script_file, "w");
  fwrite($script_handle, $script);
  fclose($script_handle);

  $output = shell_exec($ORACLE . ' -b ' . $script_file . ' 2>&1');

  unlink($script_file);

  return $output;
}
// End functions & helpers

if  (!empty($_REQUEST['submit'])) {
  if (! empty($_REQUEST['csrf']) && ! empty($_SESSION['csrf']) && $_REQUEST['csrf'] === $_SESSION['csrf']) {
    if (! (empty($_REQUEST['script']) || empty($_REQUEST['expected']))) {
      $oracle_says = run_oracle($_REQUEST['script'], $_REQUEST['expected']);
      if (empty($oracle_says)) {
        array_push($alerts, "Something went wrong while trying to talk to oracle.");
      }
    } else {
      array_push($alerts, "Invalid request.");
    }
  } else {
    array_push($alerts, "Session timed out. Please refresh the browser and try again!");
  }
} else {
  if ( empty($_SESSION['csrf']) ) {
    $_SESSION['csrf'] = substr(str_shuffle(md5(time())),0,50);
  }
}
?>
<!doctype html>
<html class="no-js" style="height:100%">
<head>
  <meta charset="utf-8">
  <title>Oracle</title>
  <meta name="description" content="">
  <meta name="viewport" content="width=device-width">
  <link rel="shortcut icon" href="/favicon.ico">
  <!-- Place favicon.ico and apple-touch-icon.png in the root directory -->
  <!-- build:css(.) styles/vendor.css -->
  <!-- bower:css -->
  <!-- endbower -->
  <!-- endbuild -->
  <!-- build:css(.tmp) styles/main.css -->
  <link rel="stylesheet" href="styles/main.css">
  <!-- endbuild -->
  <!-- build:js scripts/vendor/modernizr.js -->
  <!-- endbuild -->

      <style type="text/css">

      .diff td{
        padding:0 0.667em;
        vertical-align:top;
        white-space:pre;
        white-space:pre-wrap;
        font-family:Consolas,'Courier New',Courier,monospace;
        font-size:0.75em;
        line-height:1.333;
      }

      .diff span{
        display:block;
        min-height:1.333em;
        margin-top:-1px;
        padding:0 3px;
      }

      * html .diff span{
        height:1.333em;
      }

      .diff span:first-child{
        margin-top:0;
      }

      .diffDeleted span{
        border:1px solid rgb(255,192,192);
        background:rgb(255,224,224);
      }

      .diffInserted span{
        border:1px solid rgb(192,255,192);
        background:rgb(224,255,224);
      }

      #toStringOutput{
        margin:0 2em 2em;
      }

    </style>
</head>
<body style="height:100%">
    <!--[if lt IE 10]>
      <p class="browsehappy">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> to improve your experience.</p>
      <![endif]-->


      <div class="container-fluid" style="height:100%">
        <div class="header">
          <h3 class="text-muted">EECS3311 Oracle</h3>
        </div>
        <div class="alert-container">
          <?php 
           if (!empty($alerts)) {
            foreach($alerts as $alert) {
              ?>
              <div class="alert alert-danger" role="alert">
                <span class="glyphicon glyphicon-exclamation-sign" aria-hidden="true"></span>
                <span class="sr-only">Error:</span>
                  <?php echo $alert ?>
              </div>
              <?php
            }
           }
          ?>
        </div>
        <div class="jumbotron" style="height:75%;position:relative;">
        <?php if (empty($error)) { ?>
        <?php if (! empty($oracle_says)) { ?>
        <div class="row">
          <div class="col-md-8 col-md-offset-2">
            <?php
              // include the Diff class
              require_once './class.Diff.php';
              // output the result of comparing two files as a table
              echo Diff::toTable(Diff::compare($_REQUEST['script'], $oracle_says));
            ?>
          </div>
        </div>
        <?php } ?>
        <form role="form" id="login-form" action="" method="POST" class="row">
        <div class="form-group col-md-6">
            <div class="input-group input-group-lg">
              <span class="input-group-addon">@</span>
              <textarea required name="script" class="form-control" placeholder="Paste command script here."></textarea>
            </div>
        </div>  
        <div class="form-group col-md-6">
            <div class="input-group input-group-lg">
              <span class="input-group-addon">@</span>
              <textarea required name="expected" class="form-control" placeholder="Paste expected output here."></textarea>
            </div>
        </div>  
        <input type="hidden" name="submit" value="true"/>
        <input type="hidden" name="csrf" value="<?php echo $_SESSION['csrf'] ?>"/>
        <input type="submit" name="submit" value="Ask the Oracle" class="btn btn-lg btn-primary"/>
            <br/><br/>

          </form>
        <?php } else { ?>
          <p class="h2 text-center">Error</p>
          <p class="h4 text-center"><?php echo htmlspecialchars($error) ?></p>
        <?php } ?>
        </div>

        <div class="footer">
          <p> <a href="https://github.com/rajiteh/eecs3311-oracle">@rajiteh</a></p>
        </div>

      </div>

      <script>
      window.onresize = function() { 
        var scriptDom = document.querySelector('textarea[name="script"]');
        var expectedDom = document.querySelector('textarea[name="expected"]');
        var jumboDom = document.querySelector('.jumbotron');
        scriptDom.style.height = (jumboDom.offsetHeight - 140) + "px";
        expectedDom.style.height = (jumboDom.offsetHeight - 140) + "px";
      }
      window.onresize();
      </script>


      <!-- build:js(.) scripts/vendor.js -->
      <!-- bower:js -->
      <!-- endbower -->
      <!-- endbuild -->

    </body>
    </html>
