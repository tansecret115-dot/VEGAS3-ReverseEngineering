/* Module: vidpcore.dll
   Function: FUN_5de6f4b0
   Address: 5de6f4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de6f4b0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  int *unaff_ESI;
  undefined1 *puVar4;
  int *local_10c [67];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_10c[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17af0,local_10c);
  }
  (**(code **)(*local_10c[0] + 0x34))(local_10c[0],(undefined4 *)(param_1 + 0x50),0x18);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3fe);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3ff);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x400);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar4 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x405);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar4 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x406);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x60),
               *(undefined4 *)(param_1 + 100));
  puVar4 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x407);
  FUN_5deb6a10(pHVar2,puVar4);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


