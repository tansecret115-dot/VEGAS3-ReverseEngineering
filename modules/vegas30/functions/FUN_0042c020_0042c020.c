/* Module: vegas30.exe
   Function: FUN_0042c020
   Address: 0042c020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c020(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hDlg;
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM lParam;
  
  hDlg = param_1;
  lParam = 0;
  WVar6 = 0;
  UVar5 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x63f);
  WVar6 = SendMessageA(pHVar1,UVar5,WVar6,lParam);
  if (WVar6 != 0xffffffff) {
    param_1 = (HWND)0x0;
    iVar2 = FUN_0042b5f0(hDlg,&param_1);
    if (iVar2 == 0) {
      UVar5 = 0x150;
      pHVar1 = GetDlgItem(hDlg,0x63f);
      LVar3 = SendMessageA(pHVar1,UVar5,WVar6,iVar2);
      iVar2 = param_4;
      *(LRESULT *)(param_4 + 0xa24) = LVar3;
      uVar4 = (**(code **)(param_1->unused + 0x10))(param_1);
      (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,uVar4,LVar3);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      FUN_0042b0d0(hDlg,unaff_ESI,unaff_EBP,iVar2);
    }
  }
  return;
}


