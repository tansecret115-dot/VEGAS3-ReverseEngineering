/* Module: sfs4rw.dll
   Function: FUN_004761e0
   Address: 004761e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004761e0(int *param_1,int param_2,uint param_3)

{
  if ((((param_1[0x18] & 1U) == 0) || ((param_1[0x18] & 4U) == 0)) &&
     (FUN_00475ad0(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  param_1[0x18] = param_1[0x18] | 0x18;
  if (param_3 != 0) {
    FUN_00475b00((int)param_1,"Incorrect IEND chunk length");
  }
  FUN_00475d40(param_1,param_3);
  return;
}


