/* Module: rmbe3260.dll
   Function: FUN_6601cc90
   Address: 6601cc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601cc90(int *param_1)

{
  int *this;
  int iVar1;
  
  this = param_1;
  if (param_1[0x34] != 0) {
    return -0x7ffbfda8;
  }
  if (param_1[0x33] != 0) {
    return 0;
  }
  if (param_1[0x20] == 0) {
    return -0x7ffbfff9;
  }
  iVar1 = FUN_6601cb90((int)param_1);
  if (-1 < iVar1) {
    param_1 = (int *)0x0;
    if (this[0x2a] != 0) {
      iVar1 = (**(code **)(*(int *)this[0x20] + 0x34))((int *)this[0x20],&param_1);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*(int *)(this[0x21] + 0x48) + 0xc))((int *)(this[0x21] + 0x48),param_1)
        ;
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*(int *)this[0x21] + 0x20))((int *)this[0x21],this[0x2f]);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*(int *)this[0x21] + 0x24))((int *)this[0x21],this[0x30]);
          }
        }
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if ((this[0x2b] != 0) && (-1 < iVar1)) {
      iVar1 = (**(code **)(*(int *)this[0x20] + 0x38))((int *)this[0x20],&param_1);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*(int *)(this[0x22] + 0x48) + 0xc))((int *)(this[0x22] + 0x48),param_1)
        ;
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*(int *)this[0x22] + 0x20))((int *)this[0x22],this[0x2f]);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*(int *)this[0x22] + 0x24))((int *)this[0x22],this[0x30]);
          }
        }
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if ((this[0x2c] != 0) && (-1 < iVar1)) {
      FUN_66015d10((void *)this[0x23],this[0x32]);
      if (this[0x31] != 0) {
        iVar1 = FUN_6601d510(this,this + 0x45);
        if (-1 < iVar1) {
          FUN_66015c50((void *)this[0x23],(char *)this[0x45]);
        }
      }
    }
    if ((this[0x2d] != 0) && (-1 < iVar1)) {
      FUN_66015d10((void *)this[0x24],this[0x32]);
      if (this[0x31] != 0) {
        iVar1 = FUN_6601d510(this,this + 0x48);
        if (-1 < iVar1) {
          FUN_66015c50((void *)this[0x24],(char *)this[0x48]);
        }
      }
    }
  }
  return iVar1;
}


