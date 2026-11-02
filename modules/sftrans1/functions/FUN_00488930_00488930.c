/* Module: sftrans1.dll
   Function: FUN_00488930
   Address: 00488930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00488930(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(HMENU *)(param_1 + 300) != (HMENU)0x0) {
    DestroyMenu(*(HMENU *)(param_1 + 300));
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  FUN_00486ff0(0xffffffff,0xffffffff,1);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  FUN_004dd670(*(undefined4 *)(param_1 + 0xb0));
  piVar1 = *(int **)(param_1 + 0xa8);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    FUN_00486800(**(undefined4 **)piVar1[2]);
    piVar1 = *(int **)(param_1 + 0xa8);
    iVar2 = *piVar1;
  }
  piVar1 = *(int **)(param_1 + 0xac);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    FUN_00486800(**(undefined4 **)piVar1[2]);
    piVar1 = *(int **)(param_1 + 0xac);
    iVar2 = *piVar1;
  }
  if (*(HGDIOBJ *)(param_1 + 0x20) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x20));
  }
  if (*(HGDIOBJ *)(param_1 + 0x24) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x24));
  }
  if (*(HGDIOBJ *)(param_1 + 0x28) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x28));
  }
  FUN_004dd670(*(undefined4 *)(param_1 + 0xa8));
  FUN_004dd670(*(undefined4 *)(param_1 + 0xa4));
  FUN_004dd670(*(undefined4 *)(param_1 + 0xac));
  return;
}


