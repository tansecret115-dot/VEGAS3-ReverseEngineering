/* Module: g2plug.dll
   Function: FUN_5f825e50
   Address: 5f825e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f825e50(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_5f877524;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_5f877524 = GetCurrentThreadId();
  DAT_5f877528 = param_1;
  DAT_5f87752c = param_2;
  _mbscpy(&DAT_5f877538,param_3);
  return 1;
}


