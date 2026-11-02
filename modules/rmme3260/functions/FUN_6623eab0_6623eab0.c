/* Module: rmme3260.dll
   Function: FUN_6623eab0
   Address: 6623eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623eab0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf0) = param_2 & 0xffff;
  return 0;
}


