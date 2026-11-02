/* Module: sfmarket2.dll
   Function: FUN_0047ea50
   Address: 0047ea50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047ea50(int *param_1,int param_2,uint param_3)

{
  if ((((param_1[0x18] & 1U) == 0) || ((param_1[0x18] & 4U) == 0)) &&
     (FUN_0047e340(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  param_1[0x18] = param_1[0x18] | 0x18;
  if (param_3 != 0) {
    FUN_0047e370((int)param_1,"Incorrect IEND chunk length");
  }
  FUN_0047e5b0(param_1,param_3);
  return;
}


