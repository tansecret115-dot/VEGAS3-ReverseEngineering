/* Module: vegas30.exe
   Function: FUN_004299a0
   Address: 004299a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004299a0(HWND param_1,int param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int iVar4;
  UINT UVar5;
  undefined4 uVar6;
  LPARAM LVar7;
  undefined4 uVar8;
  
  pHVar1 = GetDlgItem(param_1,0x5e9);
  WVar2 = FUN_004298c0(pHVar1,param_2);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  LVar7 = 0;
  UVar5 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x5e9);
  LVar3 = SendMessageA(pHVar1,UVar5,WVar2,LVar7);
  if (LVar3 < 0) {
    uVar8 = 0;
    uVar6 = 0;
    pHVar1 = GetDlgItem(param_1,0x61a);
    FUN_00429810(pHVar1,uVar6,uVar8);
  }
  else {
    if (DAT_0064b57c == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *DAT_0064b57c;
    }
    if (iVar4 + -1 < LVar3) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_0064b57c[2] + LVar3 * 4);
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x1a8);
    uVar8 = *(undefined4 *)(param_2 + 0x3118);
    pHVar1 = GetDlgItem(param_1,0x61a);
    FUN_00429810(pHVar1,uVar6,uVar8);
  }
  LVar7 = *(LPARAM *)(param_2 + 0x3228);
  WVar2 = 1;
  UVar5 = 0x610;
  pHVar1 = GetDlgItem(param_1,0xe1a);
  SendMessageA(pHVar1,UVar5,WVar2,LVar7);
  FUN_00429600(param_1,*(undefined4 *)(param_2 + 0x3228));
  CheckDlgButton(param_1,0x622,*(UINT *)(param_2 + 0x322c));
  return;
}


