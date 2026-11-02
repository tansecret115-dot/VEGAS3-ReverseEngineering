/* Module: vidcap30.exe
   Function: FUN_0053aa20
   Address: 0053aa20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0053aa20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_10 [16];
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  uVar5 = param_5;
  FUN_0053b9b0(0,0x40000000);
  puVar1 = (undefined4 *)
           FUN_00538a80(&param_2,in_stack_ffffffc0,in_stack_ffffffc4,in_stack_ffffffc8,
                        in_stack_ffffffcc,uVar2,uVar3,uVar4,uVar5);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  FUN_0053b9b0(0,0x40000000);
  puVar1 = (undefined4 *)FUN_00538a40(local_10);
  FUN_005389d0(param_1,*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar2,uVar3,uVar4,uVar5);
  return param_1;
}


