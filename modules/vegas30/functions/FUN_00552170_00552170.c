/* Module: vegas30.exe
   Function: FUN_00552170
   Address: 00552170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552170(HWND param_1,undefined4 param_2)

{
  HWND hDlg;
  HWND pHVar1;
  BOOL BVar2;
  uint uVar3;
  int bEnable;
  int *piVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  hDlg = param_1;
  piVar4 = (int *)0x0;
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar6 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  if (WVar6 != 0xffffffff) {
    LVar7 = 0;
    UVar5 = 0x199;
    pHVar1 = GetDlgItem(hDlg,0x46e);
    piVar4 = (int *)SendMessageA(pHVar1,UVar5,WVar6,LVar7);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      BVar2 = 1;
      goto LAB_005521c3;
    }
  }
  BVar2 = 0;
LAB_005521c3:
  pHVar1 = GetDlgItem(hDlg,0x48b);
  EnableWindow(pHVar1,BVar2);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0xf1;
  pHVar1 = GetDlgItem(hDlg,0x48b);
  SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
    BVar2 = 0;
  }
  else {
    BVar2 = 1;
  }
  pHVar1 = GetDlgItem(hDlg,1099);
  EnableWindow(pHVar1,BVar2);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0xf1;
  pHVar1 = GetDlgItem(hDlg,1099);
  SendMessageA(pHVar1,UVar5,WVar6,LVar7);
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    uVar3 = (uint)(piVar4[0xb] != 0);
    LVar7 = 0;
    UVar5 = 0xf1;
    pHVar1 = GetDlgItem(hDlg,1099);
    SendMessageA(pHVar1,UVar5,uVar3,LVar7);
    uVar3 = (uint)(piVar4[0xc] != 0);
    LVar7 = 0;
    UVar5 = 0xf1;
    pHVar1 = GetDlgItem(hDlg,0x48b);
    SendMessageA(pHVar1,UVar5,uVar3,LVar7);
    param_1 = (HWND)0x0;
    bEnable = (*(code *)**(undefined4 **)*piVar4)((undefined4 *)*piVar4,&DAT_0060ea78,&param_1);
    if (bEnable == 0) {
      pHVar1 = GetDlgItem(hDlg,0x48b);
      EnableWindow(pHVar1,bEnable);
      (**(code **)(param_1->unused + 8))(param_1);
    }
  }
  FUN_00552040(hDlg,param_2);
  return;
}


