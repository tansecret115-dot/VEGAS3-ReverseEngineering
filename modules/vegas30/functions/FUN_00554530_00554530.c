/* Module: vegas30.exe
   Function: FUN_00554530
   Address: 00554530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554530(HWND param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  undefined8 uVar5;
  UINT Msg;
  LPARAM lParam;
  
  pHVar2 = GetDlgItem(param_1,0x435);
  uVar3 = _Trackbar_DefScrollProc_20(0x114,param_3,param_4,1,5);
  LVar4 = SendMessageA(pHVar2,0x60a,0,0);
  iVar1 = *param_2;
  *(LRESULT *)(iVar1 + 0x7c8) = LVar4;
  *(LRESULT *)(iVar1 + 0x7cc) = LVar4 >> 0x1f;
  iVar1 = *param_2;
  uVar5 = __allmul(*(undefined4 *)(iVar1 + 0x7c8),*(undefined4 *)(iVar1 + 0x7cc),10000,0);
  *(undefined8 *)(iVar1 + 0x7c8) = uVar5;
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x1d68) = *(undefined4 *)(iVar1 + 0x7c8);
  *(undefined4 *)(iVar1 + 0x1d6c) = *(undefined4 *)(iVar1 + 0x7cc);
  iVar1 = *param_2;
  uVar5 = __allmul(*(undefined4 *)(iVar1 + 0x2ea4),0,*(undefined4 *)(iVar1 + 0x1d68),
                   *(undefined4 *)(iVar1 + 0x1d6c));
  *(undefined8 *)(iVar1 + 0x1d68) = uVar5;
  iVar1 = *param_2;
  uVar5 = __alldiv(*(undefined4 *)(iVar1 + 0x1d68),*(undefined4 *)(iVar1 + 0x1d6c),2,0);
  *(undefined8 *)(iVar1 + 0x1d68) = uVar5;
  SfSetDlgItemText(param_1,0x436,&DAT_0061ae90,uVar3);
  lParam = 0;
  Msg = 0x468;
  pHVar2 = GetParent(param_1);
  SendMessageA(pHVar2,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x19] = 1;
  return;
}


