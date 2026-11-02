/* Module: erv23260.dll
   Function: FUN_637f4f40
   Address: 637f4f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f4f40(uint *param_1,uint *param_2)

{
  FUN_637f20c0(param_2);
  *param_2 = 0xb;
  param_2[1] = param_1[3];
  param_2[2] = param_1[4];
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[3] = param_2[1];
  param_2[4] = param_2[2];
  param_2[8] = param_1[7];
  param_2[9] = param_1[7];
  param_2[10] = param_1[7];
  param_2[0xd] = *param_1;
  param_2[0xf] = param_1[1];
  param_2[0xe] = param_1[2];
  return;
}


