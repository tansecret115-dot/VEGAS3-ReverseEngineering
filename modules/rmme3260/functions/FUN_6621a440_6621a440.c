/* Module: rmme3260.dll
   Function: FUN_6621a440
   Address: 6621a440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621a440(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x34) = 0;
    FUN_6622b1a0(*(void **)((int)this + 0x40),param_1,*(int *)((int)this + 0x50));
    return 0;
  }
  if (*(int *)((int)this + 0x34) == 1) {
    *(undefined4 *)((int)this + 0x34) = 2;
  }
  else if (*(int *)((int)this + 0x34) == 2) {
    uVar1 = *(int *)((int)this + 0x38) + 1;
    *(uint *)((int)this + 0x38) = uVar1;
    if (*(uint *)((int)this + 0x30) <= uVar1) {
      *(undefined4 *)((int)this + 0x34) = 3;
      FUN_6621a1e0((int)this);
      return 0;
    }
    if (*(uint *)((int)this + 0x54) <= *(uint *)((int)this + 0x50)) {
      FUN_6622b1a0(*(void **)((int)this + 0x40),0,*(uint *)((int)this + 0x50));
      return 0;
    }
  }
  FUN_6621a1e0((int)this);
  return 0;
}


