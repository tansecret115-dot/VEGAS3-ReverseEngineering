/* Module: Setup.exe
   Function: FUN_00401230
   Address: 00401230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401230(void)

{
  int iVar1;
  char *pcVar2;
  BYTE local_200 [256];
  uchar local_100 [256];
  
  if (DAT_004479e8 == '\0') {
    _SfLoadString_16(DAT_00446d7c,10,(LPSTR)local_200,0x100);
    SfPrintF(local_100,local_200);
    _SfMessageBox_16((HWND)0x0,(LPCSTR)local_100,&DAT_00446e8c,0x40010);
    return 0x80004005;
  }
  FUN_00402860();
  SfPrintF(&DAT_00447e28,(BYTE *)"\"%s\" %s SFSOURCEDIR=\"%s\"");
  if (DAT_00448644 == 0) {
    iVar1 = lstrcmpA(&DAT_00448230,"");
    if (iVar1 == 0) goto LAB_00401308;
    pcVar2 = "%s APPDIR=\"%s\"";
  }
  else {
    pcVar2 = "%s TARGETDIR=\"%s\"";
  }
  SfPrintF(&DAT_00447e28,(BYTE *)pcVar2);
LAB_00401308:
  iVar1 = lstrcmpA(&DAT_00448334,"");
  if (iVar1 != 0) {
    SfPrintF(&DAT_00447e28,(BYTE *)"%s SFSHAREDDIR=\"%s\"");
  }
  if (DAT_00448640 != 0) {
    SfPrintF(&DAT_00447e28,(BYTE *)"%s /qb");
  }
  FUN_00402860();
  SfPrintF(&DAT_00447f28,(BYTE *)"\"%s\" %s SFSOURCEDIR=\"%s\"");
  return 0;
}


