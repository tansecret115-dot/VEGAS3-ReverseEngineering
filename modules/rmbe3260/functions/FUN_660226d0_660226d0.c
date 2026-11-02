/* Module: rmbe3260.dll
   Function: FUN_660226d0
   Address: 660226d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660226d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uVar2 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*param_2)(param_2,&DAT_66065a68,(undefined4 *)(param_1 + 0x1c));
  }
  return uVar2;
}


