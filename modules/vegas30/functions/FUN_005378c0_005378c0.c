/* Module: vegas30.exe
   Function: FUN_005378c0
   Address: 005378c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005378c0(HWND param_1,int param_2)

{
  HWND hDlg;
  int iVar1;
  HWND pHVar2;
  int lParam;
  LRESULT LVar3;
  undefined4 uVar4;
  int *unaff_ESI;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM lParam_00;
  
  hDlg = param_1;
  lParam_00 = 0;
  WVar6 = 0;
  UVar5 = 0x147;
  pHVar2 = GetDlgItem(param_1,0x3eb);
  WVar6 = SendMessageA(pHVar2,UVar5,WVar6,lParam_00);
  iVar1 = param_2;
  if (WVar6 != 0xffffffff) {
    param_1 = (HWND)0x0;
    lParam = FUN_00536dc0(hDlg,param_2,&param_1);
    if (lParam == 0) {
      UVar5 = 0x150;
      pHVar2 = GetDlgItem(hDlg,0x3eb);
      LVar3 = SendMessageA(pHVar2,UVar5,WVar6,lParam);
      *(LRESULT *)(iVar1 + 0x1478) = LVar3;
      uVar4 = (**(code **)(param_1->unused + 0x10))(param_1);
      (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,uVar4,LVar3);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      FUN_00537140(hDlg,iVar1);
    }
  }
  return;
}


