/* Module: rv303260.dll
   Function: FUN_67205ac0
   Address: 67205ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_67205ac0(void *this,ulonglong *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,
            uint param_6,int param_7)

{
  uint uVar1;
  void *pvVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (*(int *)((int)this + 0xfe) != 0) {
    param_7 = 0;
  }
  uVar1 = param_6 * (int)param_3;
  if (*(uint *)((int)this + 0xd8) <= uVar1 && uVar1 - *(uint *)((int)this + 0xd8) != 0) {
    if (*(void **)((int)this + 0xd4) != (void *)0x0) {
      free(*(void **)((int)this + 0xd4));
    }
    pvVar2 = malloc(uVar1 * 4);
    *(void **)((int)this + 0xd4) = pvVar2;
    *(uint *)((int)this + 0xd8) = uVar1;
  }
  FUN_67211230(param_2,param_5,param_6,param_5,param_1,param_3,param_4,param_3,
               *(uint **)((int)this + 0xd4),param_7);
  puVar5 = (uint *)((int)param_2 + param_6 * param_5);
  puVar3 = (ulonglong *)((int)param_1 + param_4 * (int)param_3);
  puVar4 = (uint *)((int)param_3 >> 1);
  uVar1 = (int)param_5 >> 1;
  FUN_67211230(puVar5,uVar1,(int)param_6 >> 1,uVar1,puVar3,puVar4,(int)param_4 >> 1,puVar4,
               *(uint **)((int)this + 0xd4),0);
  FUN_67211230((uint *)((param_5 >> 1) * (param_6 >> 1) + (int)puVar5),uVar1,(int)param_6 >> 1,uVar1
               ,(ulonglong *)(((uint)param_3 >> 1) * (param_4 >> 1) + (int)puVar3),puVar4,
               (int)param_4 >> 1,puVar4,*(uint **)((int)this + 0xd4),0);
  return 0;
}


