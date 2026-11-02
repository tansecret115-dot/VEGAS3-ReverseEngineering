/* Module: sfmarket2.dll
   Function: FUN_00424a80
   Address: 00424a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424a80(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_004aaec4;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_004aaec4 = GetCurrentThreadId();
  DAT_004aaec8 = param_1;
  DAT_004aaecc = param_2;
  _mbscpy(&DAT_004aaed8,param_3);
  return 1;
}


