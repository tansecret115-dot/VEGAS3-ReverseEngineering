/* Module: vegas30.exe
   Function: FUN_005e5450
   Address: 005e5450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005e5450(int param_1)

{
  WPARAM WVar1;
  HWND pHVar2;
  undefined *puVar3;
  UINT UVar4;
  undefined4 uVar5;
  LPARAM LVar6;
  undefined4 uVar7;
  BOOL BVar8;
  
  LVar6 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    pHVar2 = *(HWND *)(param_1 + 0x10);
    WVar1 = 0;
  }
  else {
    pHVar2 = *(HWND *)(param_1 + 0x10);
    WVar1 = *(int *)(param_1 + 0x4c) + 1;
  }
  UVar4 = 0x14e;
  pHVar2 = GetDlgItem(pHVar2,0x434);
  SendMessageA(pHVar2,UVar4,WVar1,LVar6);
  uVar7 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  puVar3 = &DAT_00619d20;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4b2);
  SfSetWindowText(pHVar2,puVar3,uVar5,uVar7);
  LVar6 = ftol();
  WVar1 = 0;
  UVar4 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x503);
  SendMessageA(pHVar2,UVar4,WVar1,LVar6);
  BVar8 = *(BOOL *)(param_1 + 0x48);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4b2);
  EnableWindow(pHVar2,BVar8);
  BVar8 = *(BOOL *)(param_1 + 0x48);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x503);
  EnableWindow(pHVar2,BVar8);
  WVar1 = *(int *)(param_1 + 0x58) - 1;
  LVar6 = 0;
  UVar4 = 0x14e;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x43c);
  SendMessageA(pHVar2,UVar4,WVar1,LVar6);
  CheckDlgButton(*(HWND *)(param_1 + 0x10),0x4b4,(uint)(*(int *)(param_1 + 0x5c) != 0));
  return 1;
}


