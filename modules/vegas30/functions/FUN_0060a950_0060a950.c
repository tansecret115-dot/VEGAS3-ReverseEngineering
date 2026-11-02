/* Module: vegas30.exe
   Function: FUN_0060a950
   Address: 0060a950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0060a950(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


