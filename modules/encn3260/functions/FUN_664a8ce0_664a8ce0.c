/* Module: encn3260.dll
   Function: FUN_664a8ce0
   Address: 664a8ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a8ce0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  FUN_664aa6d0(*(void **)(param_1 + 0x48),1,0);
  return 0;
}


