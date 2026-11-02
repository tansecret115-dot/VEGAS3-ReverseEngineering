/* Module: vidpcore.dll
   Function: FUN_5de7cb20
   Address: 5de7cb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de7cb20(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  int *unaff_ESI;
  int *local_10c [67];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_10c[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b80,local_10c);
  }
  (**(code **)(*local_10c[0] + 0x34))(local_10c[0],(double *)(param_1 + 0x50),0x10);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x443);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x444);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,_DAT_5df18830 - *(double *)(param_1 + 0x50));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x539);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,_DAT_5df18830 - *(double *)(param_1 + 0x58));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x53a);
  FUN_5deb6a10(pHVar2);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


