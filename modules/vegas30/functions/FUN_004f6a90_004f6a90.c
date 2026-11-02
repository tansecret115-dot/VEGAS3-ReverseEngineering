/* Module: vegas30.exe
   Function: FUN_004f6a90
   Address: 004f6a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f6a90(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0x2e88) = DAT_00642138;
  *(undefined4 *)(*param_2 + 0x2eb0) = DAT_00642160;
  *(undefined4 *)(*param_2 + 0xf4) = DAT_0063f3a4;
  *(undefined4 *)(*param_2 + 0x22d8) = DAT_00641588;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x22e0) = DAT_00641590;
  *(undefined4 *)(iVar1 + 0x22e4) = DAT_00641594;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x7b8) = DAT_0063fa68;
  *(undefined4 *)(iVar1 + 0x7bc) = DAT_0063fa6c;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x22e8) = DAT_00641598;
  *(undefined4 *)(iVar1 + 0x22ec) = DAT_0064159c;
  *(undefined4 *)(*param_2 + 0x22f0) = DAT_006415a0;
  *(undefined4 *)(*param_2 + 0x22f4) = DAT_006415a4;
  *(undefined4 *)(*param_2 + 0xf8) = DAT_0063f3a8;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x100) = DAT_0063f3b0;
  *(undefined4 *)(iVar1 + 0x104) = DAT_0063f3b4;
  *(undefined4 *)(*param_2 + 0x2e78) = DAT_00642128;
  *(undefined4 *)(*param_2 + 0x3850) = 0x96;
  FUN_004f0c10(*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_004f61d0(param_1,param_2);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x1e] = 1;
  param_2[0x19] = 1;
  return;
}


