/* Module: vegas30.exe
   Function: FUN_004f4fd0
   Address: 004f4fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f4fd0(HWND param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xe6c) = DAT_0064011c;
  *(undefined4 *)(iVar1 + 0xe70) = DAT_00640120;
  *(undefined4 *)(iVar1 + 0xe74) = DAT_00640124;
  *(undefined4 *)(iVar1 + 0xe78) = DAT_00640128;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xe7c) = DAT_0064012c;
  *(undefined4 *)(iVar1 + 0xe80) = DAT_00640130;
  *(undefined4 *)(iVar1 + 0xe84) = DAT_00640134;
  *(undefined4 *)(iVar1 + 0xe88) = DAT_00640138;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xe8c) = DAT_0064013c;
  *(undefined4 *)(iVar1 + 0xe90) = DAT_00640140;
  *(undefined4 *)(iVar1 + 0xe94) = DAT_00640144;
  *(undefined4 *)(iVar1 + 0xe98) = DAT_00640148;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xe9c) = DAT_0064014c;
  *(undefined4 *)(iVar1 + 0xea0) = DAT_00640150;
  *(undefined4 *)(iVar1 + 0xea4) = DAT_00640154;
  *(undefined4 *)(iVar1 + 0xea8) = DAT_00640158;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xeac) = DAT_0064015c;
  *(undefined4 *)(iVar1 + 0xeb0) = DAT_00640160;
  *(undefined4 *)(iVar1 + 0xeb4) = DAT_00640164;
  *(undefined4 *)(iVar1 + 0xeb8) = DAT_00640168;
  *(undefined4 *)(*param_2 + 0x22f4) = DAT_006415a4;
  *(undefined4 *)(*param_2 + 200) = DAT_0063f378;
  *(undefined4 *)(*param_2 + 0xcc) = DAT_0063f37c;
  *(undefined4 *)(*param_2 + 0xfa8) = DAT_00640258;
  *(undefined4 *)(*param_2 + 0xfac) = DAT_0064025c;
  *(undefined4 *)(*param_2 + 0xf84) = DAT_00640234;
  *(undefined4 *)(*param_2 + 0x7b0) = DAT_0063fa60;
  *(undefined4 *)(*param_2 + 0x7a8) = DAT_0063fa58;
  uVar2 = DAT_006411ac;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1ef8) = DAT_006411a8;
  *(undefined4 *)(iVar1 + 0x1efc) = uVar2;
  uVar2 = DAT_006411b4;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1f00) = DAT_006411b0;
  *(undefined4 *)(iVar1 + 0x1f04) = uVar2;
  *(undefined4 *)(*param_2 + 0x1f08) = DAT_006411b8;
  *(undefined4 *)(*param_2 + 0x1f0c) = DAT_006411bc;
  *(undefined4 *)(*param_2 + 0x33a0) = DAT_00642650;
  *(undefined1 *)(*param_2 + 0x584) = 0;
  *(undefined4 *)(*param_2 + 0x7ac) = DAT_0063fa5c;
  FUN_004f0c10(*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_004f4890(param_1,param_2);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x1e] = 1;
  return;
}


