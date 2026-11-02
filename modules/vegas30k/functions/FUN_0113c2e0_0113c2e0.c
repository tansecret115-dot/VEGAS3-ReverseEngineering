/* Module: vegas30k.dll
   Function: FUN_0113c2e0
   Address: 0113c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113c2e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x160);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x13c) != 0)) {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,*(int *)(param_1 + 0x13c),0);
    return uVar2;
  }
  return 0x8000ffff;
}


