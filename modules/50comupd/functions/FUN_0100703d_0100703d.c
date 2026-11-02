/* Module: 50comupd.exe
   Function: FUN_0100703d
   Address: 0100703d
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100703d(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 uint *param_7)

{
  uint uVar1;
  
  param_1[0xac1] = param_3;
  param_1[0xac2] = param_4 + 4 + param_3;
  param_1[0xac3] = param_5;
  FUN_0100750b((int)param_1);
  uVar1 = FUN_01007272(param_1,param_2);
  param_1[0xbb3] = param_1[0xbb3] + 1;
  if (-1 < (int)uVar1) {
    *param_7 = uVar1;
    param_1[0xac4] = param_1[0xac4] + uVar1;
  }
  else {
    *param_7 = 0;
  }
  return -1 >= (int)uVar1;
}


