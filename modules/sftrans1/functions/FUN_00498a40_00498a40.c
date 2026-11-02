/* Module: sftrans1.dll
   Function: FUN_00498a40
   Address: 00498a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00498a40(int param_1)

{
  LPARAM LVar1;
  HWND pHVar2;
  int *unaff_EBP;
  UINT UVar3;
  WPARAM WVar4;
  LPCSTR pCVar5;
  
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
  }
  (**(code **)(iRam00000000 + 0xc))(0,(float *)(param_1 + 0x68));
  LVar1 = ftol();
  WVar4 = 1;
  UVar3 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1648);
  SendMessageA(pHVar2,UVar3,WVar4,LVar1);
  LVar1 = ftol();
  WVar4 = 1;
  UVar3 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x164c);
  SendMessageA(pHVar2,UVar3,WVar4,LVar1);
  LVar1 = ftol();
  WVar4 = 1;
  UVar3 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x164b);
  SendMessageA(pHVar2,UVar3,WVar4,LVar1);
  FUN_004c6ae0(&stack0xfffffef4,&DAT_0055e6e4,(double)*(float *)(param_1 + 0x6c));
  pCVar5 = &stack0xfffffef4;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1647);
  SetWindowTextA(pHVar2,pCVar5);
  FUN_004c6ae0(&stack0xfffffef4,&DAT_0055e6e4,(double)*(float *)(param_1 + 0x70));
  pCVar5 = &stack0xfffffef4;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1649);
  SetWindowTextA(pHVar2,pCVar5);
  FUN_004c6ae0(&stack0xfffffef4,&DAT_0055e6e4,(double)*(float *)(param_1 + 0x68));
  pCVar5 = &stack0xfffffef4;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x164a);
  SetWindowTextA(pHVar2,pCVar5);
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}


