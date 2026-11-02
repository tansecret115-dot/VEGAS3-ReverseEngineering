/* Module: vidcap30.exe
   Function: FUN_00414d20
   Address: 00414d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414d20(void)

{
  uchar local_104 [256];
  undefined4 uStack_4;
  
  uStack_4 = 0x414d25;
  FUN_00414de0();
  _SfGetModulePath_12(DAT_005ba298,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfLogo.fot");
  RemoveFontResourceA((LPCSTR)local_104);
  DeleteFileA((LPCSTR)local_104);
  _SfGetModulePath_12(DAT_005ba298,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfLogo.ttf");
  DeleteFileA((LPCSTR)local_104);
  DeleteFileA((LPCSTR)local_104);
  return;
}


