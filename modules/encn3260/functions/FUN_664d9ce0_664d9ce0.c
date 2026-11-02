/* Module: encn3260.dll
   Function: FUN_664d9ce0
   Address: 664d9ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d9ce0(void *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = param_1 - *(ushort *)this;
  if (uVar1 < 3000) {
    if (param_1 < *(ushort *)this) {
      *(int *)((int)this + 2) = *(int *)((int)this + 2) + 0x10000;
    }
    *(ushort *)this = param_1;
    *(int *)((int)this + 0xe) = *(int *)((int)this + 0xe) + 1;
    return 1;
  }
  if (uVar1 < 0xff9d) {
    if ((uint)param_1 == *(uint *)((int)this + 10)) {
      FUN_664d9cb0(this,param_1);
      *(int *)((int)this + 0xe) = *(int *)((int)this + 0xe) + 1;
      return 1;
    }
    *(uint *)((int)this + 10) = param_1 + 1 & 0xffff;
    return 0;
  }
  *(int *)((int)this + 0xe) = *(int *)((int)this + 0xe) + 1;
  return 1;
}


