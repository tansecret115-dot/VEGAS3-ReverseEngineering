/* Module: sfcdi.dll
   Function: FUN_5bf25770
   Address: 5bf25770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf25770(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_5bf7607c;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_5bf7607c = GetCurrentThreadId();
  DAT_5bf76080 = param_1;
  DAT_5bf76084 = param_2;
  _mbscpy(&DAT_5bf76090,param_3);
  return 1;
}


