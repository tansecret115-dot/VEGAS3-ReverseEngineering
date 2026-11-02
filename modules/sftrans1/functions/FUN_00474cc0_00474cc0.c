/* Module: sftrans1.dll
   Function: FUN_00474cc0
   Address: 00474cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00474cc0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x5d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5d0) = 0;
  }
  if (*(int *)(param_1 + 0x5dc) != 0) {
    FUN_004ddac0(*(int *)(param_1 + 0x5dc));
    *(undefined4 *)(param_1 + 0x5dc) = 0;
  }
  if (*(int *)(param_1 + 0x5e0) != 0) {
    FUN_00474970(*(int *)(param_1 + 0x5e0));
    *(undefined4 *)(param_1 + 0x5e0) = 0;
  }
  return 0;
}


