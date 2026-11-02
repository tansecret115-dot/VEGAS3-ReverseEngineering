/* Module: mp3rw.dll
   Function: FUN_0043c800
   Address: 0043c800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043c800(int param_1,uchar *param_2)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_2);
  FUN_0041c940(local_104,0x104);
  _mbscat(local_104,(uchar *)(param_1 + 0x54));
  DVar1 = GetFileAttributesA((LPCSTR)local_104);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    FUN_0041d600(local_104,(LPSECURITY_ATTRIBUTES)0x0);
  }
  return 0;
}


