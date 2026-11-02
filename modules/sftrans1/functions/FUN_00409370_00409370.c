/* Module: sftrans1.dll
   Function: FUN_00409370
   Address: 00409370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409370(int *param_1,HWND param_2,int *param_3)

{
  DWORD DVar1;
  HWND pHVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  param_1[0xd] = (int)(param_1 + 0xb);
  DVar1 = GetCurrentThreadId();
  param_1[0xe] = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00577284);
  param_1[0xf] = (int)DAT_005772b8;
  DAT_005772b8 = param_1 + 0xd;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00577284);
  pHVar2 = CreateDialogParamA(DAT_00577258,(LPCSTR)0x89,param_2,FUN_00452190,0);
  param_1[0xc] = (int)pHVar2;
  (**(code **)(*param_1 + 0x24))(param_1,param_3);
  param_1[4] = param_3[2] - *param_3;
  param_1[5] = param_3[3] - param_3[1];
  return 0;
}


