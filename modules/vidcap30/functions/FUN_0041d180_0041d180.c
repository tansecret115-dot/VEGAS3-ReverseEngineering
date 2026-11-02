/* Module: vidcap30.exe
   Function: FUN_0041d180
   Address: 0041d180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d180(HWND param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0x1010) = DAT_005b3b10;
  uVar2 = DAT_005b3b0c;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1008) = DAT_005b3b08;
  *(undefined4 *)(iVar1 + 0x100c) = uVar2;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xfb0) = DAT_005b3ab0;
  *(undefined4 *)(iVar1 + 0xfb4) = DAT_005b3ab4;
  *(undefined4 *)(*param_2 + 0xf9c) = DAT_005b3a9c;
  *(undefined4 *)(*param_2 + 0x1040) = DAT_005b3b40;
  *(undefined4 *)(*param_2 + 0x5a8) = DAT_005b30a8;
  FUN_00418370(param_1,*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_0041cb80(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


