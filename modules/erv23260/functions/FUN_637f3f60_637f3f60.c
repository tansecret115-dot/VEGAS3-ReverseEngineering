/* Module: erv23260.dll
   Function: FUN_637f3f60
   Address: 637f3f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_637f3f60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined *param_12)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  (**(code **)(**(int **)((int)this + 0x2b4) + 4))(param_1,param_2);
  if ((*(int *)((int)this + 0xc) == 0x15) || (*(int *)((int)this + 0xc) == 0x16)) {
    puVar5 = (undefined4 *)((int)this + 0xdc);
    puVar6 = (undefined4 *)((int)this + 0x1c8);
    for (iVar4 = 0x3b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_637fc500(*(void **)((int)this + 0x2b4),*(int *)((int)this + 0x8c),(int)this + 0x90);
  }
  puVar1 = (uint *)((int)this + 0x1c8);
  iVar4 = FUN_637fb5d0(*(void **)((int)this + 0x2b4),puVar1);
  if (iVar4 == 0) {
    iVar4 = FUN_637f8590(*(void **)((int)this + 0x2c0),(int)puVar1);
    iVar4 = FUN_637fb930(*(void **)((int)this + 0x2b4),(int)puVar1,iVar4);
    if (iVar4 == 0) {
      iVar4 = FUN_637f8cb0(*(void **)((int)this + 0x2c0),(int *)puVar1,
                           (undefined4 *)((int)this + 0x340),(undefined4 *)((int)this + 0x344),
                           (undefined4 *)((int)this + 0x348),0);
      if (iVar4 == 0) {
        iVar2 = FUN_637fd250(*(int *)((int)this + 0x2b4));
        iVar4 = FUN_637f44d0(this);
        if (iVar4 == 0) {
          if (*(int *)((int)this + 0x3a4) == 0) {
            iVar3 = FUN_637fd250(*(int *)((int)this + 0x2b4));
            *(int *)(*(int *)(*(int *)((int)this + 0x2c0) + 0x310) + 0x14) = iVar3 - iVar2;
          }
          else {
            *(undefined4 *)((int)this + 0x3a4) = 0;
          }
          puVar5 = *(undefined4 **)((int)this + 0x358);
          (*(code *)param_12)(*puVar5,puVar5[2],puVar5[1],puVar5[5],puVar5[6],puVar5[7],param_3,
                              param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
        }
      }
    }
  }
  return iVar4;
}


