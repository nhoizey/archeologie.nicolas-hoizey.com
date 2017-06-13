<?php
  $Titre = "les films";
  require("../haut.inc");
?>

<CENTER>
<?php
  $Dir = dir("./");
  while($Fichier = $Dir->read())
  {
    if(is_dir($Fichier) && (substr($Fichier, 0, 1) != "."))
    {
      echo("<A HREF=\"Films/".$Fichier."/\"><IMG SRC=\"Films/".$Fichier."/affiche.gif\" BORDER=0></A>\n");
    }
  }
  $Dir->close();
?>

<?php require("../bas.inc"); ?>