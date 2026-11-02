/* Module: rv103260.dll
   Function: FUN_636a47e0
   Address: 636a47e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_636a47e0(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0x80004005;
  switch(param_1) {
  case 0x10000:
    *(int *)((int)this + 0xc2) = *param_2;
    return uVar1;
  default:
    iVar2 = FUN_636a5340(this,param_1,param_2);
    uVar1 = -(uint)(iVar2 != 0) & 0x70;
    break;
  case 0x10007:
    iVar2 = *param_2;
    *(undefined4 *)((int)this + 0x106) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x106) = 1;
      return uVar1;
    }
    break;
  case 0x10008:
    param_2 = (int *)*param_2;
    iVar2 = FUN_636a5340(this,0x1003,&param_2);
    return -(uint)(iVar2 != 0) & 0x80004005;
  case 0x10009:
    iVar2 = *param_2;
    *(undefined4 *)((int)this + 0x10a) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x10a) = 1;
      return uVar1;
    }
    break;
  case 0x1001a:
    piVar3 = (int *)((int)this + 0xc6);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    return 0;
  }
  return uVar1;
}


