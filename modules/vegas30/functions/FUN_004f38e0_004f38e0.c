/* Module: vegas30.exe
   Function: FUN_004f38e0
   Address: 004f38e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f38e0(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x7c8) = DAT_0063fa78;
  *(undefined4 *)(iVar1 + 0x7cc) = DAT_0063fa7c;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1d68) = *(undefined4 *)(iVar1 + 0x7c8);
  *(undefined4 *)(iVar1 + 0x1d6c) = *(undefined4 *)(iVar1 + 0x7cc);
  *(undefined4 *)(*param_2 + 0xe4c) = DAT_006400fc;
  *(undefined4 *)(*param_2 + 0x1194) = DAT_00640444;
  FUN_004f0c10(*param_2);
  FUN_004f3760(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x19] = 1;
  param_2[0x1e] = 1;
  return 0;
}


