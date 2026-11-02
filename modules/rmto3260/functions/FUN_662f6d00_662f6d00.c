/* Module: rmto3260.dll
   Function: FUN_662f6d00
   Address: 662f6d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f6d00(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x52) != 0) {
    if ((param_1 != 0) && (*(int *)((int)this + 0x56) != 0)) {
      if (*(short *)((int)this + 0x50) == 3) {
        iVar1 = FUN_662fa3b0((int)*(void **)((int)this + 4));
      }
      else {
        iVar1 = FUN_662fa2d0(*(void **)((int)this + 4));
        if ((iVar1 == 0) && (iVar1 = FUN_662fa3b0(*(int *)((int)this + 4)), iVar1 == 0)) {
          iVar1 = FUN_662fa940(*(void **)((int)this + 4));
        }
      }
    }
    FUN_662f6860(this);
    *(undefined4 *)((int)this + 0x52) = 0;
    if (iVar1 != 0) {
      *(int *)((int)this + 0x487) = iVar1;
    }
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x487) = 0x80040007;
  return -0x7ffbfff9;
}


