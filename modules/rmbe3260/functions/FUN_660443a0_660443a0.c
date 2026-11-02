/* Module: rmbe3260.dll
   Function: FUN_660443a0
   Address: 660443a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_660443a0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x52) != 0) {
    if ((param_1 != 0) && (*(int *)((int)this + 0x56) != 0)) {
      if (*(short *)((int)this + 0x50) == 3) {
        iVar1 = FUN_66047c50((int)*(void **)((int)this + 4));
      }
      else {
        iVar1 = FUN_66047b70(*(void **)((int)this + 4));
        if ((iVar1 == 0) && (iVar1 = FUN_66047c50(*(int *)((int)this + 4)), iVar1 == 0)) {
          iVar1 = FUN_660481e0(*(void **)((int)this + 4));
        }
      }
    }
    FUN_66043ea0(this);
    *(undefined4 *)((int)this + 0x52) = 0;
    if (iVar1 != 0) {
      *(int *)((int)this + 0x487) = iVar1;
    }
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x487) = 0x80040007;
  return -0x7ffbfff9;
}


