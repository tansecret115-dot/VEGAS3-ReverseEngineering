/* Module: Setup.exe
   Function: FUN_00401390
   Address: 00401390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401390(void)

{
  int iVar1;
  uchar local_308 [260];
  BYTE local_204 [256];
  uchar local_104 [260];
  
  iVar1 = FUN_00401980();
  if (iVar1 == 6) {
    _SfLoadString_16(DAT_00446d7c,0x1d,(LPSTR)local_204,0x100);
    SfPrintF(local_308,local_204);
    iVar1 = _SfMessageBox_16((HWND)0x0,(LPCSTR)local_308,&DAT_00446e8c,0x40001);
    if (iVar1 != 1) {
      return 1;
    }
    SfPrintF(local_104,(BYTE *)"msiexec /x %s");
    FUN_004020d0((LPSTR)local_104);
  }
  return 0;
}


