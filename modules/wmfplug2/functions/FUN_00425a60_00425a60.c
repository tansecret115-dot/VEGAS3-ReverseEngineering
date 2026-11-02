/* Module: wmfplug2.dll
   Function: FUN_00425a60
   Address: 00425a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425a60(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_00489e34;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_00489e34 = GetCurrentThreadId();
  DAT_00489e38 = param_1;
  DAT_00489e3c = param_2;
  _mbscpy(&DAT_00489e48,param_3);
  return 1;
}


