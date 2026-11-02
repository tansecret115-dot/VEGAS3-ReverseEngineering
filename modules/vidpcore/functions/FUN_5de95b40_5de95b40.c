/* Module: vidpcore.dll
   Function: FUN_5de95b40
   Address: 5de95b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de95b40(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  int *unaff_ESI;
  UINT UVar4;
  WPARAM WVar5;
  BOOL BVar6;
  undefined1 *puVar7;
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c50,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],(undefined4 *)(param_1 + 0x50),0x20);
  BVar6 = *(BOOL *)(param_1 + 0x68);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56f);
  EnableWindow(pHVar2,BVar6);
  BVar6 = *(BOOL *)(param_1 + 0x68);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56e);
  EnableWindow(pHVar2,BVar6);
  BVar6 = *(BOOL *)(param_1 + 100);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  EnableWindow(pHVar2,BVar6);
  BVar6 = *(BOOL *)(param_1 + 100);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x571);
  EnableWindow(pHVar2,BVar6);
  LVar3 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56f);
  SendMessageA(pHVar2,UVar4,WVar5,LVar3);
  LVar3 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  SendMessageA(pHVar2,UVar4,WVar5,LVar3);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar7 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56e);
  FUN_5deb6a10(pHVar2,puVar7);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar7 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x571);
  FUN_5deb6a10(pHVar2,puVar7);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x56b,*(UINT *)(param_1 + 0x60));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x577,*(UINT *)(param_1 + 0x68));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x578,*(UINT *)(param_1 + 100));
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


