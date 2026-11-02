/* Module: Setup.exe
   Function: FUN_00410fb0
   Address: 00410fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410fb0(int param_1,uchar *param_2)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_2);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)(param_1 + 0x54));
  DVar1 = GetFileAttributesA((LPCSTR)local_104);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    _SfCreateDirectory_8(local_104,(LPSECURITY_ATTRIBUTES)0x0);
  }
  return 0;
}


