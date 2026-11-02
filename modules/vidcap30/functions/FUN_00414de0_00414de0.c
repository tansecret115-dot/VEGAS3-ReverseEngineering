/* Module: vidcap30.exe
   Function: FUN_00414de0
   Address: 00414de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414de0(void)

{
  uchar local_104 [260];
  
  _SfGetModulePath_12(DAT_005ba298,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"sfhandle.fnt");
  RemoveFontResourceA((LPCSTR)local_104);
  DeleteFileA((LPCSTR)local_104);
  return;
}


