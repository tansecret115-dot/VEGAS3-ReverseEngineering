/* Module: mp3rw.dll
   Function: FUN_00476260
   Address: 00476260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476260(int *param_1,int param_2,uint param_3)

{
  if ((((param_1[0x18] & 1U) == 0) || ((param_1[0x18] & 4U) == 0)) &&
     (FUN_00475b50(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  param_1[0x18] = param_1[0x18] | 0x18;
  if (param_3 != 0) {
    FUN_00475b80((int)param_1,"Incorrect IEND chunk length");
  }
  FUN_00475dc0(param_1,param_3);
  return;
}


