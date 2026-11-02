/* Module: vegas30.exe
   Function: FUN_00452390
   Address: 00452390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452390(void)

{
  uchar local_104 [256];
  undefined4 uStack_4;
  
  uStack_4 = 0x452395;
  FUN_00452450();
  _SfGetModulePath_12(DAT_006471fc,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfLogo.fot");
  RemoveFontResourceA((LPCSTR)local_104);
  DeleteFileA((LPCSTR)local_104);
  _SfGetModulePath_12(DAT_006471fc,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfLogo.ttf");
  DeleteFileA((LPCSTR)local_104);
  DeleteFileA((LPCSTR)local_104);
  return;
}


