/* Module: vidcap30.exe
   Function: FUN_0053ace0
   Address: 0053ace0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0053ace0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_10 [16];
  
  uVar4 = param_9;
  uVar3 = param_8;
  uVar2 = param_7;
  uVar1 = param_6;
  puVar5 = (undefined4 *)FUN_0053ad90(&param_6,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  puVar5 = (undefined4 *)FUN_0053ad90(local_10,param_2,param_3,uVar1,uVar2,uVar3,uVar4);
  FUN_005389d0(param_1,*puVar5,puVar5[1],puVar5[2],puVar5[3],uVar6,uVar7,uVar8,uVar9);
  return param_1;
}


