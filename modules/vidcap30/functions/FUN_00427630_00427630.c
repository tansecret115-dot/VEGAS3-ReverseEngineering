/* Module: vidcap30.exe
   Function: FUN_00427630
   Address: 00427630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x854);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3);
    return uVar2;
  }
  return 1;
}


