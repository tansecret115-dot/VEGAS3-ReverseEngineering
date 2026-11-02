/* Module: rmbe3260.dll
   Function: FUN_66049080
   Address: 66049080
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66049080(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 0x28) <= param_1) {
    *param_2 = *(uint *)((int)this + 0x28);
    *(undefined4 *)((int)this + 0xa0) = 0;
    return 0xffff;
  }
  uVar1 = FUN_66047d60(this,*(undefined4 *)((int)this + 0xc),param_1,&param_1);
  if (*(uint *)((int)this + 0x9c) <= uVar1) {
    *param_2 = *(uint *)((int)this + 0x28);
    *(undefined4 *)((int)this + 0xa0) = 0;
    return 0xffff;
  }
  *param_2 = param_1;
  *(uint *)((int)this + 0xa0) = (*(int *)((int)this + 0x9c) - uVar1) - *(int *)((int)this + 0x18);
  iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x20))(uVar1 + *(int *)((int)this + 0x18),0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x110))(0);
  }
  return iVar2;
}


