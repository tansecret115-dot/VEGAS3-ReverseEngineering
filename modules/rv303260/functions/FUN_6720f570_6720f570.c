/* Module: rv303260.dll
   Function: FUN_6720f570
   Address: 6720f570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_6720f570(uint *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
            uint param_6,float param_7,uint param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  
  if (_DAT_67213480 <= (double)CONCAT44(param_4,param_3)) {
    if ((param_9 == 0) && (0xf1 < param_8)) {
      uVar1 = FUN_6720fcd0(param_1,(uint *)param_2,param_3,(uint)param_4,param_5,param_6,param_7,
                           param_8);
      return uVar1;
    }
    uVar1 = FUN_6720f5f0(param_1,param_2,param_3,param_4,param_5,param_6);
    if (param_10 == 0) {
      return uVar1;
    }
  }
  return 0;
}


