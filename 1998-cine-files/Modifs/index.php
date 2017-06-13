<?php
  $Titre = "l'historique";
  require("../haut.inc");
?>

Vous trouverez ici une chronologie des modification faites sur
ce site :
<P>
<TABLE WIDTH=100% BORDER=1 CELLPADDING=2 CELLSPACING=2>
<?php
  $Modifs=file("modifs.txt");
  $NbLignes=count($Modifs);
  for($NoLigne=0; $NoLigne<$NbLignes; $NoLigne++)
  {
    if(strlen($Modifs[$NoLigne])>0)
    {
      $Couleur = MyDecHex(round(255-$NoLigne*(255/$NbLignes)));
      $Ligne=explode(";", $Modifs[$NoLigne]);
      echo("\n<TR>\n  <TH VALIGN=TOP BGCOLOR=\"#".$Couleur."0000\">".$Ligne[0]."</TH>");
      echo("\n  <TD BGCOLOR=\"#".$Couleur."0000\">".htmlentities($Ligne[1])."</TD>\n</TR>");
    }
  }
?>
</TABLE>

<?php require("../bas.inc"); ?>