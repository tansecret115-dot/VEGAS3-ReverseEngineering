/* Module: sfnetmedia.dll
   Function: FUN_00415710
   Address: 00415710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415710(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_00441d64;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_00441d64 = GetCurrentThreadId();
  DAT_00441d68 = param_1;
  DAT_00441d6c = param_2;
  _mbscpy(&DAT_00441d78,param_3);
  return 1;
}


