/* Module: vegas30k.dll
   Function: FUN_010f8770
   Address: 010f8770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f8770(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_30 = 0;
  if (param_3 < 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    puVar4 = (undefined4 *)(param_3 * 0x10 + param_2);
    uVar2 = 0;
    param_3 = param_3 + 1;
    do {
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar1 = (undefined4 *)
               FUN_010f6380(local_20,local_30,uVar5,uVar3,uVar2,param_4,param_5,param_6,param_7);
      puVar1 = (undefined4 *)
               FUN_010f6420(local_10,*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar6,uVar7,uVar8,uVar9);
      local_30 = *puVar1;
      puVar4 = puVar4 + -4;
      uVar5 = puVar1[1];
      uVar3 = puVar1[2];
      uVar2 = puVar1[3];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = local_30;
  param_1[1] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}


