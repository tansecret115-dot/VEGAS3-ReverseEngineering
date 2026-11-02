/* Module: vidcap30.exe
   Function: FUN_005371f0
   Address: 005371f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005371f0(int param_1,uchar *param_2)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_2);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)(param_1 + 0x54));
  DVar1 = GetFileAttributesA((LPCSTR)local_104);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    _SfCreateDirectory_8(local_104,0);
  }
  return 0;
}


