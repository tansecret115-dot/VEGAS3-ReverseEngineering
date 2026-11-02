/* Module: vegas30.exe
   Function: FUN_00503ee0
   Address: 00503ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503ee0(HWND param_1,int *param_2)

{
  undefined4 *puVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  puVar1 = (undefined4 *)FUN_005030c0(param_1);
  (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,*param_2 + 0x2eec);
  (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,*param_2 + 0x2ef0,0x104);
  FUN_00503ab0(param_1,param_2);
  FUN_005034c0(param_1,param_2);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x1b] = 1;
  return;
}


