/* Module: rmbe3260.dll
   Function: FUN_6602b740
   Address: 6602b740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6602b740(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  
  FUN_6602b020((int)this);
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x2c) = param_3;
  *(int *)((int)this + 0x28) = param_2;
  *(int *)((int)this + 0x30) = param_4;
  *(int *)((int)this + 0x34) = param_5;
  *(int *)((int)this + 0x38) = param_6;
  *(int *)((int)this + 0x3c) = param_7;
  if ((((param_4 == 0) && (param_5 == 0)) && (param_6 == param_2)) && (param_7 == param_3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *(int *)((int)this + 0x40) = iVar1;
  switch(param_1) {
  case 0:
    goto switchD_6602b7a4_caseD_0;
  case 1:
  case 5:
  case 9:
  case 0xd:
    iVar1 = FUN_6602b4c0(this,4);
    return iVar1;
  default:
    return -0x7ffbfff2;
  case 0x10:
    if (iVar1 == 0) {
      iVar1 = FUN_6602b4c0(this,1);
      return iVar1;
    }
switchD_6602b7a4_caseD_0:
    iVar1 = FUN_6602b4c0(this,0);
    return iVar1;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if (iVar1 != 0) {
      iVar1 = FUN_6602b4c0(this,2);
      return iVar1;
    }
    iVar1 = FUN_6602b4c0(this,3);
    return iVar1;
  }
}


