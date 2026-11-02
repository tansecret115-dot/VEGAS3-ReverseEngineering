/* Module: encn3260.dll
   Function: FUN_664a16a0
   Address: 664a16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a16a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2,param_3);
  return uVar2;
}


