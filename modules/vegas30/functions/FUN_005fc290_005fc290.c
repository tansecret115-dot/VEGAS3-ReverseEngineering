/* Module: vegas30.exe
   Function: FUN_005fc290
   Address: 005fc290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fc290(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  if (param_1 != 0) {
    *param_4 = *param_4 & 0x5fffffff;
    *param_4 = *(uint *)(param_1 + 0xc);
  }
  return 0;
}


