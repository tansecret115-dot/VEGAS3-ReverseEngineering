/* Module: encn3260.dll
   Function: FUN_664a8df0
   Address: 664a8df0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_664a8df0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    fVar2 = (float10)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x1c))(iVar1 + 0x1c);
    return fVar2;
  }
  return (float10)*(float *)(param_1 + 0x1c8);
}


