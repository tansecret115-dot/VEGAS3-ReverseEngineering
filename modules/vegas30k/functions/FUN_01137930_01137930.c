/* Module: vegas30k.dll
   Function: FUN_01137930
   Address: 01137930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01137930(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_01136550();
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(*(int **)(param_1 + 0x24),0);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))(*(int **)(param_1 + 0x24),0,0);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return 1;
}


