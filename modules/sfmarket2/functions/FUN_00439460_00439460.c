/* Module: sfmarket2.dll
   Function: FUN_00439460
   Address: 00439460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00439460(int param_1,uchar *param_2)

{
  DWORD DVar1;
  uchar local_104 [260];
  
  _mbscpy(local_104,param_2);
  FUN_004203c0(local_104,0x104);
  _mbscat(local_104,(uchar *)(param_1 + 0x54));
  DVar1 = GetFileAttributesA((LPCSTR)local_104);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    FUN_00421080(local_104,(LPSECURITY_ATTRIBUTES)0x0);
  }
  return 0;
}


