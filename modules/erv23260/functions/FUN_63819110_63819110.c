/* Module: erv23260.dll
   Function: FUN_63819110
   Address: 63819110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63819110(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  
  if (param_1 == 5) {
    uVar1 = param_2[2] + param_2[6] + param_2[4] + *param_2;
    *param_3 = (int)(char)(&DAT_63829470)[uVar1 & 0xf] + ((int)uVar1 >> 3);
    uVar1 = param_2[3] + param_2[1] + param_2[7] + param_2[5];
    param_3[1] = (int)(char)(&DAT_63829470)[uVar1 & 0xf] + ((int)uVar1 >> 3);
    return;
  }
  *param_3 = (int)(char)(&DAT_63829468)[*param_2 & 3] + ((int)*param_2 >> 1);
  param_3[1] = (int)(char)(&DAT_63829468)[param_2[1] & 3] + ((int)param_2[1] >> 1);
  return;
}


