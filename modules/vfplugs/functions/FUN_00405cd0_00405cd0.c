/* Module: vfplugs.dll
   Function: FUN_00405cd0
   Address: 00405cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405cd0(int *param_1,HWND param_2,int *param_3)

{
  DWORD DVar1;
  HWND pHVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  param_1[0xd] = (int)(param_1 + 0xb);
  DVar1 = GetCurrentThreadId();
  param_1[0xe] = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0049455c);
  param_1[0xf] = (int)DAT_00494590;
  DAT_00494590 = param_1 + 0xd;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0049455c);
  pHVar2 = CreateDialogParamA(DAT_00494530,(LPCSTR)0x36,param_2,FUN_00409ec0,0);
  param_1[0xc] = (int)pHVar2;
  (**(code **)(*param_1 + 0x24))(param_1,param_3);
  param_1[4] = param_3[2] - *param_3;
  param_1[5] = param_3[3] - param_3[1];
  return 0;
}


