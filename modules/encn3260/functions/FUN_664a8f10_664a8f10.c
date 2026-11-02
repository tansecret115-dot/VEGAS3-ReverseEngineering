/* Module: encn3260.dll
   Function: FUN_664a8f10
   Address: 664a8f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a8f10(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf0) = param_2 & 0xffff;
  return 0;
}


