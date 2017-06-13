<?php
  $Titre = "les gens";
  require("../haut.inc");
?>

<CENTER>
<?php
  $Dir = dir("./");
  while($Fichier = $Dir->read())
  {
    if(is_dir($Fichier) && (substr($Fichier, 0, 1) != "."))
    {
      echo("<A HREF=\"Gens/".$Fichier."/\"><IMG SRC=\"Gens/".$Fichier."/affiche.gif\" BORDER=0></A>\n");
    }
  }
  $Dir->close();
?>

<?php require("../bas.inc"); ?>