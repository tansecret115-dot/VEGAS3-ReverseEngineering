/* Module: vegas30k.dll
   Function: FUN_01191c80
   Address: 01191c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01191c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar2 = 1;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3);
  }
  return uVar2;
}


