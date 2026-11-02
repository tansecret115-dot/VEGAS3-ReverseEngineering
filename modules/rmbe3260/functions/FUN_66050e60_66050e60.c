/* Module: rmbe3260.dll
   Function: FUN_66050e60
   Address: 66050e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66050e60(void *this,uint param_1,short param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0x80004005;
  }
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(uint *)((int)this + 0x14) = param_1;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x1c);
    }
    uVar1 = *(int *)((int)this + 0x14) + param_1;
    *(uint *)((int)this + 0x14) = uVar1;
    if ((uVar1 < param_1) && (1 < param_1)) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      return 0;
    }
    if ((param_1 < uVar1) && (param_1 == 0)) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      return 0;
    }
  }
  return 0;
}


