<?php
session_start();

$ORACLE_PATH = "oracle";
$alerts = array();

function run_oracle($script, $expected) {
  $script_file = tempnam(sys_get_temp_dir(), '3311-Oracle-script');

  $script_handle = fopen($script_file, "w");
  fwrite($script_handle, $script);
  fclose($script_handle);

  $output = shell_exec($ORACLE_PATH . ' -b ' . $script_file);

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
            <pre id="display" style="text-align: left;"></pre>
          </div>
        </div>
        <script src="diff.js"></script>
        <script>
          var one = <?php echo json_encode($_REQUEST['script']); ?>;
          var other = <?php echo json_encode($oracle_says); ?>;
          var diff = JsDiff.diffLines(other, one);
          diff.forEach(function(part){
            // green for additions, red for deletions
            // grey for common parts
            var color = part.added ? 'green' :
              part.removed ? 'red' : 'grey';
            var span = document.createElement('span');
            span.style.color = color;
            span.appendChild(document
              .createTextNode(part.value));
            display.appendChild(span);
          });
        </script>
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
