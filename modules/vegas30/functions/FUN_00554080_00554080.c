/* Module: vegas30.exe
   Function: FUN_00554080
   Address: 00554080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00554080(HWND param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  undefined8 uVar2;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x7c8) = DAT_0063fa78;
  *(undefined4 *)(iVar1 + 0x7cc) = DAT_0063fa7c;
  *(undefined4 *)(*param_2 + 0x2ea4) = DAT_00642154;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1d68) = *(undefined4 *)(iVar1 + 0x7c8);
  *(undefined4 *)(iVar1 + 0x1d6c) = *(undefined4 *)(iVar1 + 0x7cc);
  iVar1 = *param_2;
  uVar2 = __allmul(*(undefined4 *)(iVar1 + 0x2ea4),0,*(undefined4 *)(iVar1 + 0x1d68),
                   *(undefined4 *)(iVar1 + 0x1d6c));
  *(undefined8 *)(iVar1 + 0x1d68) = uVar2;
  iVar1 = *param_2;
  uVar2 = __alldiv(*(undefined4 *)(iVar1 + 0x1d68),*(undefined4 *)(iVar1 + 0x1d6c),2,0);
  *(undefined8 *)(iVar1 + 0x1d68) = uVar2;
  *(undefined4 *)(*param_2 + 0x1194) = DAT_00640444;
  *(undefined4 *)(*param_2 + 0xac) = DAT_0063f35c;
  *(undefined4 *)(*param_2 + 0x2e70) = DAT_00642120;
  *(undefined4 *)(*param_2 + 0x2438) = DAT_006416e8;
  _mbscpy((uchar *)(*param_2 + 0x474),&DAT_0063f724);
  _mbscpy((uchar *)(*param_2 + 0x243c),&DAT_006416ec);
  _mbscpy((uchar *)(*param_2 + 0x2540),&DAT_006417f0);
  _mbscpy((uchar *)(*param_2 + 0x101c),&DAT_006402cc);
  *(undefined4 *)(*param_2 + 0x2eec) = DAT_0064219c;
  *(undefined4 *)(*param_2 + 0x1d70) = DAT_00641020;
  _mbscpy((uchar *)(*param_2 + 0x11a8),&DAT_00640458);
  *(undefined4 *)(*param_2 + 0x3284) = DAT_00642534;
  _mbscpy((uchar *)(*param_2 + 0x3288),&DAT_00642538);
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x2e60) = DAT_00642110;
  *(undefined4 *)(iVar1 + 0x2e64) = DAT_00642114;
  *(undefined4 *)(*param_2 + 0x2e5c) = DAT_0064210c;
  FUN_004f19e0(*param_2);
  FUN_00553e70(param_1,param_2);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x19] = 1;
  param_2[0x1b] = 1;
  return 0;
}


