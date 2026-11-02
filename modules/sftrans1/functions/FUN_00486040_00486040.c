/* Module: sftrans1.dll
   Function: FUN_00486040
   Address: 00486040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00486040(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    piVar3 = *(int **)piVar1[2];
    FUN_004dc400(piVar1,0,1,1);
    if (piVar3 != (int *)0x0) {
      FUN_00486040();
      (**(code **)(*piVar3 + 0xc))(1);
    }
    piVar1 = *(int **)(param_1 + 0x28);
    iVar2 = *piVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    DestroyWindow(*(HWND *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_004dd670(*(undefined4 *)(param_1 + 0x28));
  return;
}


