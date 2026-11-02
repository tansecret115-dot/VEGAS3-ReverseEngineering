/* Module: encn3260.dll
   Function: FUN_664c46d0
   Address: 664c46d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c46d0(void *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    pcVar1 = strchr(param_1,*(int *)((int)this + 0x10));
    if ((pcVar1 != (char *)0x0) || (*(int *)((int)this + 0x10) == -1)) {
      return 0;
    }
    iVar2 = 1;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < *(uint *)((int)this + 4)) {
    do {
      pcVar1 = strchr(param_1,(int)*(char *)(*(int *)this + uVar3));
      if (pcVar1 != (char *)0x0) {
        return iVar2;
      }
      if (*(char *)(*(int *)this + uVar3) == -1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  return iVar2;
}


