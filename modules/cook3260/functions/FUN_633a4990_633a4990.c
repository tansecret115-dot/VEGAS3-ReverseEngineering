/* Module: cook3260.dll
   Function: FUN_633a4990
   Address: 633a4990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a4990(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  uint local_8;
  
  local_c = FUN_633a3930(this,6,&local_8);
  *param_1 = local_8 - 6;
  iVar2 = 1;
  if (1 < *(int *)((int)this + 0x20)) {
    do {
      if (iVar2 < *(int *)((int)this + 0x18) * 2) {
        iVar1 = iVar2 >> 1;
        if (iVar1 < 1) {
          iVar1 = 1;
        }
      }
      else {
        iVar1 = iVar2 - *(int *)((int)this + 0x18);
      }
      iVar1 = FUN_633a5ab0(this,*(int *)((int)this + iVar1 * 4 + 0x44b4),(int *)&local_8);
      local_c = local_c + iVar1;
      iVar2 = iVar2 + 1;
      param_1[1] = *param_1 + -0xc + local_8;
      param_1 = param_1 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  return local_c;
}


