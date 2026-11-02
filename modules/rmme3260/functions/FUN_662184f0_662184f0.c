/* Module: rmme3260.dll
   Function: FUN_662184f0
   Address: 662184f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662184f0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x46) == 0) {
    piVar1 = FUN_6621b920(*(byte **)(param_1 + 0x42),*(int *)(param_1 + 0x3e));
    *(int **)(param_1 + 0x46) = piVar1;
  }
  return (-(uint)(*(int *)(param_1 + 0x46) != 0) & 0x7ff8fff2) + 0x8007000e;
}


