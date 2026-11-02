/* Module: sfconfigmgr.dll
   Function: FUN_004060b0
   Address: 004060b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004060b0(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_004230d4;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_004230d4 = GetCurrentThreadId();
  DAT_004230d8 = param_1;
  DAT_004230dc = param_2;
  _mbscpy(&DAT_004230e8,param_3);
  return 1;
}


