/* Module: erv33260.dll
   Function: FUN_67071600
   Address: 67071600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67071600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 uint param_5,uint param_6,uint param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4 >> 1;
  uVar2 = param_5 >> 1;
  FUN_67071660(param_1,param_8,param_4,param_5,param_6);
  puVar1 = (undefined4 *)((int)param_8 + param_5 * param_4);
  FUN_67071660(param_3,puVar1,uVar3,uVar2,param_7);
  FUN_67071660(param_2,(undefined4 *)(uVar2 * uVar3 + (int)puVar1),uVar3,uVar2,param_7);
  return;
}


