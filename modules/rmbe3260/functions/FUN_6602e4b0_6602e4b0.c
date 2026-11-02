/* Module: rmbe3260.dll
   Function: FUN_6602e4b0
   Address: 6602e4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602e4b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66053230(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


