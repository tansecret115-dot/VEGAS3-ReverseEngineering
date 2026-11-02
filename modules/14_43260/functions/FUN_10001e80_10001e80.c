/* Module: 14_43260.dll
   Function: FUN_10001e80
   Address: 10001e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_10001e80(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11,int param_12,int param_13)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 in_stack_ffffffa8;
  int *in_stack_ffffffac;
  int in_stack_ffffffb0;
  undefined4 in_stack_ffffffb4;
  undefined4 uVar6;
  int local_30 [10];
  int local_8;
  
  local_8 = *(int *)((int)this + 0x260);
  iVar2 = param_12 + 1;
  if (iVar2 < local_8 >> 1) {
    iVar2 = local_8 - iVar2;
  }
  local_8 = local_8 - iVar2;
  if (param_12 == 0) {
    *(undefined4 *)((int)this + 0x8d6) = *(undefined4 *)((int)this + 0x27c);
    *(undefined4 *)((int)this + 0x8ce) = *(undefined4 *)((int)this + 0x27c);
    *(undefined4 *)((int)this + 0x8d2) = *(undefined4 *)((int)this + 0x274);
  }
  piVar1 = param_3 + param_6 * 10;
  if (param_3 < piVar1) {
    iVar4 = param_9 - (int)param_3;
    do {
      **(undefined2 **)((int)this + 0x8d6) =
           (short)(*(int *)((int)param_3 + iVar4) * local_8 + *param_3 * iVar2 >> 2);
      param_3 = param_3 + 1;
      *(int *)((int)this + 0x8d6) = *(int *)((int)this + 0x8d6) + 2;
    } while (param_3 < piVar1);
  }
  uVar6 = 0x10001f30;
  iVar2 = FUN_10002170(this,*(short **)((int)this + 0x8ce),local_30);
  if (iVar2 == 1) {
    puVar5 = (undefined4 *)&stack0xffffffa8;
    iVar4 = param_6;
    for (iVar3 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
        iVar3 = iVar3 + -1) {
      *puVar5 = *(undefined4 *)register0x00000010;
      puVar5 = puVar5 + 1;
    }
    FUN_10001fb0(this,in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4,uVar6,
                 iVar4,param_13);
  }
  else {
    iVar4 = FUN_10002010(param_13,local_30);
    **(int **)((int)this + 0x8d2) = iVar4;
    *(int *)((int)this + 0x8d2) = *(int *)((int)this + 0x8d2) + 8;
  }
  *(int *)((int)this + 0x8ce) = *(int *)((int)this + 0x8ce) + param_6 * 0x14;
  return iVar2;
}


