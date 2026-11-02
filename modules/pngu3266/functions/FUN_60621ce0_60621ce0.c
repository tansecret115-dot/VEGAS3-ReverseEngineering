/* Module: pngu3266.dll
   Function: FUN_60621ce0
   Address: 60621ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60621ce0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,*(int *)(param_1 + 0x18) + param_2,param_3);
  return uVar2;
}


