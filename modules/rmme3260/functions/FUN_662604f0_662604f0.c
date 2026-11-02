/* Module: rmme3260.dll
   Function: FUN_662604f0
   Address: 662604f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662604f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    uVar1 = FUN_66263400(*(int **)(param_1 + 0x30));
    return uVar1;
  }
  return 0;
}


