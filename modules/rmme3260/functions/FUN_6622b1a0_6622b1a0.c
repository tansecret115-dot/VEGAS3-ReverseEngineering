/* Module: rmme3260.dll
   Function: FUN_6622b1a0
   Address: 6622b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622b1a0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 400) != 5) {
    return 0;
  }
  if ((param_1 != -0x7ffbf036) && (param_1 < 0)) {
    *(undefined4 *)((int)this + 0x1bc) = 0;
    FUN_66217480(*(void **)((int)this + 0x180),param_1);
    return 0;
  }
  if (*(int *)((int)this + 0x1bc) == 6) {
    if (param_1 != -0x7ffbf036) {
      FUN_66217480(*(void **)((int)this + 0x180),0);
      return 0;
    }
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1c0) + param_2;
    uVar1 = *(int *)((int)this + 0x1da) + 1;
    *(uint *)((int)this + 0x1da) = uVar1;
    *(uint *)((int)this + 0x1bc) = (-(uint)(uVar1 < *(ushort *)((int)this + 0x36)) & 0xfffffffe) + 7
    ;
  }
  FUN_6622c480(this);
  return 0;
}


