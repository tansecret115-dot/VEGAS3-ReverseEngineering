/* Module: erv23260.dll
   Function: FUN_63819060
   Address: 63819060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63819060(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x2f8) != 0) {
    if (*(int *)((int)this + 0x464) == 7) {
      return;
    }
    if (param_1 < 0x21) {
      if ((-0x20 < param_1) || (-0x40 < *param_3)) goto LAB_638190a2;
      iVar1 = *param_3 + 0x40;
    }
    else {
      if (*param_3 < 0x40) goto LAB_638190a2;
      iVar1 = *param_3 + -0x40;
    }
    *param_3 = iVar1;
LAB_638190a2:
    if (0x20 < param_2) {
      if (param_3[1] < 0x40) {
        return;
      }
      param_3[1] = param_3[1] + -0x40;
      return;
    }
    if (-0x20 < param_2) {
      return;
    }
    if (-0x40 < param_3[1]) {
      return;
    }
    param_3[1] = param_3[1] + 0x40;
    return;
  }
  iVar1 = *param_3;
  if (iVar1 < 0x20) {
    if (-0x21 < iVar1) goto LAB_638190ec;
    iVar1 = iVar1 + 0x40;
  }
  else {
    iVar1 = iVar1 + -0x40;
  }
  *param_3 = iVar1;
LAB_638190ec:
  iVar1 = param_3[1];
  if (iVar1 < 0x20) {
    if (iVar1 < -0x20) {
      param_3[1] = iVar1 + 0x40;
    }
    return;
  }
  param_3[1] = iVar1 + -0x40;
  return;
}


