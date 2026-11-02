/* Module: vidpcore.dll
   Function: FUN_5de7ffc0
   Address: 5de7ffc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de7ffc0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM lParam;
  int *unaff_ESI;
  undefined1 *puVar3;
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17bb0,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],(undefined4 *)(param_1 + 0x50),8);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x458);
  lParam = ftol();
  SendMessageA(pHVar2,0x610,1,lParam);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar3 = &stack0xfffffef0;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x459);
  FUN_5deb6a10(pHVar2,puVar3);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


