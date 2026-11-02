/* Module: wmfdist2.exe
   Function: FUN_010085a9
   Address: 010085a9
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010085a9(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if ((int)param_2 < 0x101) {
    uVar1 = 0x101 - param_2;
    if ((int)param_3 <= (int)(0x101 - param_2)) {
      uVar1 = param_3;
    }
    uVar1 = FUN_010085f7(param_1,param_2,uVar1);
    param_1[0xbb0] = uVar1;
    param_3 = param_3 + (param_2 - uVar1);
    if ((int)param_3 < 1) {
      return param_3;
    }
  }
  uVar1 = FUN_010082d1(param_1,uVar1,param_3);
  return uVar1;
}


