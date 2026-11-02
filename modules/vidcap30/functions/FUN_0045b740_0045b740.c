/* Module: vidcap30.exe
   Function: FUN_0045b740
   Address: 0045b740
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0045b740(uchar *param_1)

{
  int iVar1;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  _mbscpy(local_208,param_1);
  _SfAddSlashToPathName_8(local_208,0x104);
  iVar1 = _SfCreateTempFileAndName_16(local_208,&DAT_00586c70,local_104,0x104);
  if (-1 < iVar1) {
    DeleteFileA(local_104);
  }
  return -1 < iVar1;
}


