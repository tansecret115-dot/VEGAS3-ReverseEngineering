/* Module: sftrans1.dll
   Function: FUN_00494620
   Address: 00494620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00494620(undefined4 param_1,undefined4 param_2,double *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,double param_10,double param_11)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  switch(param_1) {
  case 0:
    param_10 = *param_3 - param_10;
    break;
  case 1:
    param_10 = param_10 + *param_3;
    break;
  case 2:
    param_10 = *param_3 - param_11;
    break;
  case 3:
    param_10 = param_11 + *param_3;
    break;
  case 4:
  case 5:
  case 9:
    local_10 = 0;
    uStack_c = 0;
    FUN_00494720(param_2,&local_10,param_4,param_5,param_6,param_7,param_8,param_9);
    param_10 = (double)CONCAT44(uStack_c,local_10);
    break;
  default:
    return 0;
  }
  *param_3 = param_10;
  if ((double)CONCAT44(param_7,param_6) <= *param_3) {
    if ((double)CONCAT44(param_9,param_8) < *param_3) {
      *param_3 = (double)CONCAT44(param_9,param_8);
      return 1;
    }
    *param_3 = *param_3;
    return 1;
  }
  *param_3 = (double)CONCAT44(param_7,param_6);
  return 1;
}


