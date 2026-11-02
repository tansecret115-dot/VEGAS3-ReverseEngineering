/* Module: vidpcore.dll
   Function: FUN_5de9b3a0
   Address: 5de9b3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de9b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 *param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_7;
  uVar3 = FUN_5de9ad70(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  param_7 = param_5 + -1;
  puVar1 = param_6;
  if (0 < param_7) {
    do {
      FUN_5de9b460(param_1,param_2,param_3,param_4,*puVar1,puVar1[1],puVar1[2],puVar1[3],0x3f800000,
                   uVar2);
      param_7 = param_7 + -1;
      puVar1 = puVar1 + 2;
    } while (param_7 != 0);
  }
  FUN_5de9b460(param_1,param_2,param_3,param_4,param_6[param_5 * 2 + -2],param_6[param_5 * 2 + -1],
               *param_6,param_6[1],0x3f800000,uVar2);
  return uVar3;
}


