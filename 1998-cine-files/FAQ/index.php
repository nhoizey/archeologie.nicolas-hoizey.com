<?php
  $Titre = "la FAQ";
  require("../haut.inc");
?>

Vous trouverez ici des réponses aux questions les plus
farfelues que vous osez (j'ose !!!) vous
(<A HREF="mailto:<?php echo($MyMail); ?>?Subject=FAQ...">me</A> ?)
poser sur le 7<SUP>ème</SUP> Art ...
<P>
<TABLE WIDTH=100% BORDER=1 CELLPADDING=2 CELLSPACING=2>
<?php

  $NbFic = 0;
  $NoFic = 0;
  $Dir = dir("./");
  while($Fichier = $Dir->read())
  {
    if(substr($Fichier, 0, 3) == "faq")
    {
      $NbFic++;
    }
  }
  $Dir->rewind();
  while($Fichier = $Dir->read())
  {
    if(substr($Fichier, 0, 3) == "faq")
    {
      $Couleur = MyDecHex(round(255-$NoFic*(255/$NbFic)));
      echo("\n<TR>\n  <TD BGCOLOR=\"#".$Couleur."0000\">");
      $FAQ = file($Fichier);
      $NbLignes = count($FAQ);
      echo("\n    <B>".htmlentities($FAQ[0])."</B>\n    <BR>");
      for($NoLigne=1; $NoLigne<$NbLignes; $NoLigne++)
      {
        echo("\n    ".htmlentities($FAQ[$NoLigne]));
      }
      $NoFic++;
      echo("\n  </TD>\n</TR>");
    }
  }
  $Dir->close();
?>
</TABLE>

<?php require("../bas.inc"); ?>