/* Module: rmbe3260.dll
   Function: FUN_660439a0
   Address: 660439a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_660439a0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  switch(param_1) {
  case 0:
  case 2:
    if ((param_2 != 0) || (iVar1 = 2, 0x3fff < *(uint *)((int)this + 2))) {
      iVar1 = 4;
    }
    if ((param_2 != 0) || (iVar2 = 2, 0x3fff < *(uint *)((int)this + 6))) {
      iVar2 = 4;
    }
    return iVar1 + 3 + iVar2;
  case 1:
    return 2;
  case 3:
    if ((param_2 != 0) || (iVar2 = 2, 0x3fff < *(uint *)((int)this + 2))) {
      iVar2 = 4;
    }
    if ((param_2 != 0) || (iVar1 = 2, 0x3fff < *(uint *)((int)this + 10))) {
      iVar1 = 4;
    }
    iVar1 = iVar2 + 2 + iVar1;
  }
  return iVar1;
}


