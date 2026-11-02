/* Module: rmto3260.dll
   Function: FUN_662def70
   Address: 662def70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662def70(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x46) == 0) {
    piVar1 = FUN_662e1d60(*(byte **)(param_1 + 0x42),*(int *)(param_1 + 0x3e));
    *(int **)(param_1 + 0x46) = piVar1;
  }
  return (-(uint)(*(int *)(param_1 + 0x46) != 0) & 0x7ff8fff2) + 0x8007000e;
}


