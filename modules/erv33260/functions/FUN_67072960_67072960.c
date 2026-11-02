/* Module: erv33260.dll
   Function: FUN_67072960
   Address: 67072960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_67072960(void *this,int *param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (param_4 == 2) {
    uVar1 = FUN_67072930(this,param_1);
    return uVar1;
  }
  if (param_4 == 1) {
    *param_5 = 1;
    uVar1 = FUN_670728e0(this,*param_1,param_2,param_3);
    return uVar1;
  }
  if (param_4 == 0) {
    *param_5 = 0;
    uVar1 = FUN_670728e0(this,*param_1,param_2,param_3);
    return uVar1;
  }
  return 3;
}


