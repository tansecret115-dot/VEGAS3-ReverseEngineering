/* Module: sfpaplug.dll
   Function: FUN_00419340
   Address: 00419340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419340(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_0045c384;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_0045c384 = GetCurrentThreadId();
  DAT_0045c388 = param_1;
  DAT_0045c38c = param_2;
  _mbscpy(&DAT_0045c398,param_3);
  return 1;
}


