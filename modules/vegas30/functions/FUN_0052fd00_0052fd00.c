/* Module: vegas30.exe
   Function: FUN_0052fd00
   Address: 0052fd00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052fd00(HWND param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  HWND hDlg;
  int iVar3;
  int iVar4;
  ulong uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  
  hDlg = param_1;
  iVar4 = _SfDlgUndropComboBox_4(param_1);
  iVar3 = param_2;
  param_1 = (HWND)iVar4;
  if (iVar4 != 0) {
    SetWindowLongA(hDlg,0,1);
    return iVar4;
  }
  piVar1 = (int *)(param_2 + 0x1478);
  *piVar1 = 0;
  FUN_0052ea80(hDlg,param_2,piVar1);
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar2 + 0x10))(piVar2);
    param_1 = (HWND)0x0;
    iVar4 = (**(code **)(*(int *)*piVar1 + 0x24))((int *)*piVar1,&param_1);
    if (iVar4 == -0x7ffb1fb9) {
      SfShowFioInstallWizard(hDlg,DAT_0064b510,uVar5,0,0,0);
      param_1 = (HWND)0x1;
      (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
      *piVar1 = 0;
    }
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0x147;
  pHVar6 = GetDlgItem(hDlg,0x3eb);
  WVar9 = SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if (WVar9 == 0xffffffff) {
    *(undefined4 *)(iVar3 + 0x146c) = 0xffffffff;
  }
  else {
    LVar10 = 0;
    UVar8 = 0x150;
    pHVar6 = GetDlgItem(hDlg,0x3eb);
    LVar7 = SendMessageA(pHVar6,UVar8,WVar9,LVar10);
    *(LRESULT *)(iVar3 + 0x146c) = LVar7;
  }
  SetWindowLongA(hDlg,0,1);
  DAT_00649e20 = *(undefined4 *)(iVar3 + 0xb44);
  DAT_0064a514 = *(undefined4 *)(iVar3 + 0xb48);
  DAT_0064a56c = *(undefined4 *)(iVar3 + 0xb4c);
  return (int)param_1;
}


