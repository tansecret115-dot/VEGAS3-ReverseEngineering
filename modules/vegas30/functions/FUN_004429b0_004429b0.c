/* Module: vegas30.exe
   Function: FUN_004429b0
   Address: 004429b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004429b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 in_stack_00000020;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = ftol(0,0,0);
  iVar1 = FUN_005c9cc0(param_2,param_1,param_3,2,uVar3,uVar4,uVar5,uVar6);
  if (-1 < iVar1) {
    puVar2 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_28[0] = 0x10;
    local_20 = ftol();
    local_18 = ftol();
    local_8 = in_stack_00000020;
    local_10 = param_4;
    local_c = 0;
    *(undefined8 *)(*param_2 + 0x20) = local_18;
    FUN_005c70c0(param_1,*param_2,param_4,local_28,0,0,1);
  }
  return;
}


