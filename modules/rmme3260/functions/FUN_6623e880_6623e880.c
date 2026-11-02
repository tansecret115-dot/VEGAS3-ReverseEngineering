/* Module: rmme3260.dll
   Function: FUN_6623e880
   Address: 6623e880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623e880(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  FUN_66240340(*(void **)(param_1 + 0x48),1,0);
  return 0;
}


