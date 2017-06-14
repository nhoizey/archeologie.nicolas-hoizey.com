<?php

  /* ------------------------- */
  /* Variables globales        */
  /* ------------------------- */

  $MyMail = "nicolas@hoizey.com";
  $MyHome = "https://archeologie.nicolas-hoizey.com/1998-cine-files/";
  $WebCercle = "http://www.lecercle.com/";

  /* ------------------------- */
  /* Identification du browser */
  /* ------------------------- */

  $Browser="unknown";
  if(ereg("(MSIE|Microsoft Internet Explorer)", $HTTP_USER_AGENT))
  {
    $Browser="ie";
  }
  elseif(ereg("(Mozilla|Netscape)", $HTTP_USER_AGENT))
  {
    $Browser="nn";
  }

  $Version=0;
  if(ereg("[0-9]+", $HTTP_USER_AGENT, $Ver))
  {
    $Version = (int)$Ver[0];
  }

  $StyleSheets=0;
  $JavaScript=0;
  if($Version>=4)
  {
    $StyleSheets=1;
    if($Browser == "nn")
    {
      $JavaScript=1;
    }
  }

  /* -------------------------- */
  /* Fonctions de mise en forme */
  /* -------------------------- */

  function MyDecHex($i)
  {
    $C1 = "0".DecHex($i);
    $C2 = substr($C1, strlen($C1)-2, 2);
    return $C2;
  }

  function Bouton($lien, $nom)
  {
    global $JavaScript;
    global $MyHome;

    if($JavaScript == 1)
    {
      echo("\n<A HREF=\"".$lien."\" onMouseOver='on(\"".$nom."\")' onMouseOut='off(\"".$nom."\")'>");
      echo("<IMG SRC=\"".$MyHome."Images/Menu/".$nom."1.gif\" BORDER=0 NAME=\"".$nom."\"></A>");
    }
    else
    {
      echo("\n<A HREF=\"".$lien."\">");
      echo("<IMG SRC=\"".$MyHome."Images/Menu/".$nom."1.gif\" BORDER=0></A>");
    }
  }

  function Lien($lien, $nom)
  {
    if(is_dir("../../".$lien))
    {
      echo("<A HREF=\"".$lien."\">".$nom."</A>");
    }
    else
    {
      echo("<B>".$nom."</B>");
    }
  }
?>

<BASE HREF="<?php echo($MyHome); ?>">
<BASE SRC="<?php echo($MyHome); ?>">
<HEAD>
<?php
  if($StyleSheets == "1"):
?>
    <LINK REL=STYLESHEET TYPE="text/css" HREF="cinefiles.css">
<?php
  endif;

  if($JavaScript==1):
?>
    <SCRIPT LANGUAGE="JavaScript">
    <!-- D&eacute;but du code --
    liste = new Array('accueil', 'films', 'gens', 'faq');
    function preload()
    {
      over = new Array(liste.length);
      out = new Array(liste.length);
      for(i=0;i<over.length;i++)
      {
        over[liste[i]] = new Image;
        out[liste[i]] = new Image;
        over[liste[i]].src = 'Images/Menu/'+liste[i]+'2.gif';
        out[liste[i]].src = 'Images/Menu/'+liste[i]+'1.gif';
      }
    }

    function on(nom)
    {
      document.images[nom].src=over[nom].src;
    }

    function off(nom)
    {
      document.images[nom].src=out[nom].src;
    }
    // -- Fin du code -->
    </SCRIPT>
<?php
  endif;
?>
<TITLE>Cin&eacute; Files
<?php
  if($Titre != "")
  {
    echo(" - ".$Titre);
  }
?>
</TITLE>
</HEAD>

<BODY BGCOLOR="#FFFFFF" TEXT="#FFFFFF" LINK="#66FFFF" ALINK="#FF6666" VLINK="#66FFFF" MARGINWIDTH=0 MARGINHEIGHT=0 LEFTMARGIN=0 RIGHTMARGIN=0 TOPMARGIN=0 BOTTOMMARGIN=0 <?php if($JavaScript == 1): ?>onLoad="preload()"<?php endif; ?>>
<CENTER>
<TABLE WIDTH=100% HEIGHT=100% BORDER=0 CELLPADDING=0 CELLSPACING=0>
<TR>
  <TD VALIGN=MIDDLE ALIGN=CENTER>

<TABLE BORDER=0 CELLPADDING=0 CELLSPACING=0>
<TR>
  <TD WIDTH=10 HEIGHT=50 BGCOLOR="#FFFFFF">&nbsp;</TD>
  <TD WIDTH=160 HEIGHT=50 BGCOLOR="#FFFFFF"><IMG SRC="Images/Cadre/cine.gif" WIDTH=160 HEIGHT=50></TD>
  <TD COLSPAN=3 HEIGHT=50 BGCOLOR="#FFFFFF">&nbsp;</TD>
</TR>
<TR>
  <TD WIDTH=10 HEIGHT=10 BGCOLOR="#000000"><IMG SRC="Images/Cadre/hg.gif" WIDTH=10 HEIGHT=10></TD>
  <TD ROWSPAN=2 COLSPAN=2 WIDTH=270 HEIGHT=50 BGCOLOR="#000000"><IMG SRC="Images/Cadre/files.gif" WIDTH=270 HEIGHT=50></TD>
  <TD ROWSPAN=2 HEIGHT=50 BGCOLOR="#000000">&nbsp;</TD>
  <TD WIDTH=10 HEIGHT=10 BGCOLOR="#000000"><IMG SRC="Images/Cadre/hd.gif" WIDTH=10 HEIGHT=10></TD>
</TR>
<TR>
  <TD WIDTH=10 HEIGHT=40 BGCOLOR="#000000">&nbsp;</TD>
  <TD WIDTH=10 HEIGHT=40 BGCOLOR="#000000">&nbsp;</TD>
</TR>
<TR>
  <TD WIDTH=10 BGCOLOR="#000000">&nbsp;</TD>
  <TD COLSPAN=3 BGCOLOR="#000000">
    <BR>
