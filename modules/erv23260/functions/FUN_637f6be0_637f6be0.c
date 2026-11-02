/* Module: erv23260.dll
   Function: FUN_637f6be0
   Address: 637f6be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f6be0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(int *)((int)this + 0x20) = param_1;
  *(int *)((int)this + 0x24) = param_2;
  *(int *)((int)this + 0x28) = param_3;
  if (param_4 != 0) {
    uVar1 = FUN_637f7ac0(this,param_3);
    return uVar1;
  }
  uVar2 = param_2 * param_1;
  *(int *)((int)this + 0x1af0) = param_1;
  if (*(uint *)((int)this + 0x34) <= uVar2 && uVar2 - *(uint *)((int)this + 0x34) != 0) {
    if (*(void **)((int)this + 0x1aec) != (void *)0x0) {
      FUN_637f1080(*(void **)((int)this + 0x1aec));
    }
    puVar3 = FUN_637f1030(uVar2,0);
    *(undefined4 **)((int)this + 0x1aec) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 2;
    }
    *(uint *)((int)this + 0x34) = uVar2;
  }
  return 0;
}


