/* Module: sftrkfx1.dll
   Function: FUN_5cbf3920
   Address: 5cbf3920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbf3920(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x40) == 0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar2 = *(int *)((int)this + 0x8c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0xc;
      }
      iVar4 = *(int *)((int)this + 0x90);
LAB_5cbf398f:
      uVar3 = FUN_5cbf07fb(this,iVar2,iVar4 + 0x1c);
      return uVar3;
    }
  }
  else if ((*(int *)(*(int *)((int)this + 0x90) + 0x18) != 0) &&
          (bVar1 = FUN_5cbf602d((void *)(*(int *)((int)this + 0x8c) + 0x1c),
                                (char *)(*(int *)((int)this + 0x90) + 0x1c)),
          CONCAT31(extraout_var,bVar1) != 0)) {
    if (*(int *)((int)this + 0x90) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x90) + 0xc;
    }
    iVar4 = *(int *)((int)this + 0x8c);
    goto LAB_5cbf398f;
  }
  return 0;
}


