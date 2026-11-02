/* Module: auth3260.dll
   Function: FUN_627a5600
   Address: 627a5600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a5600(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*param_2 == -1) && (uVar2 = 0, *(int *)((int)this + 4) != 0)) {
    do {
      iVar1 = *(int *)(*(int *)this + uVar2 * 4);
      *param_2 = iVar1;
      if (iVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  iVar1 = *(int *)*param_2;
  *param_1 = iVar1;
  if ((iVar1 == 0) && (uVar2 = *(int *)(*param_2 + 4) + 1, uVar2 < *(uint *)((int)this + 4))) {
    do {
      iVar1 = *(int *)(*(int *)this + uVar2 * 4);
      *param_1 = iVar1;
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  return;
}


