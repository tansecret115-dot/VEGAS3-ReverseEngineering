/* Module: vidpcore.dll
   Function: FUN_5de24050
   Address: 5de24050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de24050(int *param_1,HWND param_2,int *param_3)

{
  DWORD DVar1;
  HWND pHVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  param_1[0xd] = (int)(param_1 + 0xb);
  DVar1 = GetCurrentThreadId();
  param_1[0xe] = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5df427b4);
  param_1[0xf] = (int)DAT_5df427e8;
  DAT_5df427e8 = param_1 + 0xd;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5df427b4);
  pHVar2 = CreateDialogParamA(DAT_5df42788,&DAT_00000095,param_2,FUN_5de60ab0,0);
  param_1[0xc] = (int)pHVar2;
  (**(code **)(*param_1 + 0x24))(param_1,param_3);
  param_1[4] = param_3[2] - *param_3;
  param_1[5] = param_3[3] - param_3[1];
  return 0;
}


