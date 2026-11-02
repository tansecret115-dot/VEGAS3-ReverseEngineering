/* Module: vidpcore.dll
   Function: FUN_5de9be80
   Address: 5de9be80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de9be80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = ftol();
  uVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  uVar8 = 4;
  local_28 = 0;
  local_20 = 0x4000;
  local_14 = 0x4000;
  puVar7 = &local_28;
  local_24 = 0xffffc000;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0xffffc000;
  local_c = 0;
  uVar5 = ftol(puVar7,4);
  uVar6 = ftol(uVar5);
  FUN_5de9abc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_0000005c,
               in_stack_00000060,in_stack_00000064,in_stack_00000068,in_stack_0000006c,
               in_stack_00000070,uVar1,uVar2,((int)uVar3 < 0) - 1 & uVar3,
               ((int)uVar4 < 0) - 1 & uVar4,uVar6,uVar5,puVar7,uVar8);
  return;
}


