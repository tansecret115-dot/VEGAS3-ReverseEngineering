/* Module: erv33260.dll
   Function: FUN_67077f10
   Address: 67077f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67077f10(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  (**(code **)(*(int *)((int)this + 0x6c) + 8))(*(undefined4 *)((int)this + 0x2b0));
  if (*(int *)((int)this + 0x2b4) == 0) {
    return 4;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)(iVar1 + 0x30) == 0) {
    piVar3 = (int *)((int)this + 0xc);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar3 = param_2;
    piVar4 = (int *)((int)this + 0x38);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if (*param_2 == 0x15) {
      *(undefined4 *)(iVar1 + 0x28) = 0xeb851eb8;
      *(undefined4 *)(iVar1 + 0x2c) = 0x403df851;
      *(undefined4 *)((int)this + 0x32c) = 0x100;
    }
    else {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0x408f4000;
      *(undefined4 *)((int)this + 0x32c) = 0x2000;
    }
    *(int *)((int)this + 8) = *param_2;
    if (*(int *)((int)this + 0x288) == 1) {
      *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x80) = 1;
      *(undefined4 *)((int)this + 0x7c) = 1;
      *(undefined4 *)((int)this + 300) = 1;
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x14);
    }
    iVar1 = FUN_67078e00((int)this);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x328) == 0) {
        iVar1 = FUN_670788c0(this);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(undefined4 *)((int)this + 0x328) = 1;
        iVar1 = 0;
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x340) + 0x28))
                        (*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14));
      if (iVar2 == 0) {
        iVar1 = 1;
      }
    }
    return iVar1;
  }
  return 4;
}


