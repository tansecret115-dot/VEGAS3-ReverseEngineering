/* Module: rmbe3260.dll
   Function: FUN_66017330
   Address: 66017330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017330(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 6) = param_2 / 100;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    return 0;
  }
  *(uint *)(param_1 + 10) = param_3 / 100;
  return 0;
}


