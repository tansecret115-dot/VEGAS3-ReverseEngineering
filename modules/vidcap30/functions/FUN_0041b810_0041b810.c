/* Module: vidcap30.exe
   Function: FUN_0041b810
   Address: 0041b810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b810(HWND param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0xfa8) = DAT_005b3aa8;
  *(undefined4 *)(*param_2 + 0xcd4) = DAT_005b37d4;
  *(undefined4 *)(*param_2 + 0xcd8) = DAT_005b37d8;
  *(undefined4 *)(*param_2 + 0xcdc) = DAT_005b37dc;
  *(undefined4 *)(*param_2 + 0xce0) = DAT_005b37e0;
  *(undefined4 *)(*param_2 + 0xf84) = DAT_005b3a84;
  *(undefined4 *)(*param_2 + 0xf88) = DAT_005b3a88;
  *(undefined4 *)(*param_2 + 0xf8c) = DAT_005b3a8c;
  *(undefined4 *)(*param_2 + 0xf90) = DAT_005b3a90;
  *(undefined4 *)(*param_2 + 0xf94) = DAT_005b3a94;
  *(undefined4 *)(*param_2 + 0xf98) = DAT_005b3a98;
  *(undefined4 *)(*param_2 + 0xfbc) = DAT_005b3abc;
  *(undefined4 *)(*param_2 + 0xfb8) = DAT_005b3ab8;
  *(undefined4 *)(*param_2 + 0xf74) = DAT_005b3a74;
  *(undefined4 *)(*param_2 + 0xf78) = DAT_005b3a78;
  *(undefined4 *)(*param_2 + 0xf7c) = DAT_005b3a7c;
  *(undefined4 *)(*param_2 + 0xf1c) = DAT_005b3a1c;
  *(undefined4 *)(*param_2 + 0xf00) = DAT_005b3a00;
  uVar2 = DAT_005b3a0c;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0xf08) = DAT_005b3a08;
  *(undefined4 *)(iVar1 + 0xf0c) = uVar2;
  *(undefined4 *)(*param_2 + 0xf18) = DAT_005b3a18;
  *(undefined4 *)(*param_2 + 0x12c0) = DAT_005b3dc0;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x12c8) = DAT_005b3dc8;
  *(undefined4 *)(iVar1 + 0x12cc) = DAT_005b3dcc;
  FUN_00418370(param_1,*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_0041aab0(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


