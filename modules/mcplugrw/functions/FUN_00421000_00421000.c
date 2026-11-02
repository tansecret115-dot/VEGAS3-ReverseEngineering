/* Module: mcplugrw.dll
   Function: FUN_00421000
   Address: 00421000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421000(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_004a98fc;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_004a98fc = GetCurrentThreadId();
  DAT_004a9900 = param_1;
  DAT_004a9904 = param_2;
  _mbscpy(&DAT_004a9910,param_3);
  return 1;
}


