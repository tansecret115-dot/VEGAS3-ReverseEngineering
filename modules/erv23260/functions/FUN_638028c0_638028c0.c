/* Module: erv23260.dll
   Function: FUN_638028c0
   Address: 638028c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638028c0(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x838) == 0) {
    return 4;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x30) != 0) {
    return 4;
  }
  if ((*param_1 < 0xb) || (0xc < *param_1)) {
    return 8;
  }
  iVar2 = FUN_63802830(this,param_1[1],param_1[2]);
  if (iVar2 == 0) {
    return 7;
  }
  if (1 < *(int *)((int)this + 0x80)) {
    iVar2 = *(int *)((int)this + 0x80) * 0x77c;
    if ((param_1[1] == *(int *)(iVar2 + -0x6f4 + (int)this)) &&
       (param_1[2] == *(int *)((int)this + iVar2 + -0x6f0))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return 7;
    }
  }
  return 0;
}


