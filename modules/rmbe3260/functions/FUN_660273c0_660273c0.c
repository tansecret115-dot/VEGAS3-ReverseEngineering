/* Module: rmbe3260.dll
   Function: FUN_660273c0
   Address: 660273c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660273c0(int param_1,uint param_2)

{
  if ((param_2 < 7) && (param_2 != 0)) {
    *(uint *)(param_1 + 0x38) = param_2;
    return 0;
  }
  return 0x80070057;
}


