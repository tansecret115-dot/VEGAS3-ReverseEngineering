/* Module: cook3260.dll
   Function: FUN_633a1580
   Address: 633a1580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_633a1580(void *this,int param_1,uint param_2,undefined4 *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x28) != 2) {
    return 0x80004003;
  }
  uVar1 = param_2 / *(uint *)((int)this + 4);
  iVar2 = 0;
  iVar4 = 0;
  if (0 < (int)uVar1) {
    do {
      if (iVar2 != 0) goto LAB_633a15f3;
      iVar2 = (**(code **)(**(int **)this + 0x10))
                        (iVar4 * *(int *)((int)this + 4) + param_1,~param_5 & 1,
                         (int)param_3 + *(int *)((int)this + 0xc) * iVar4 * 2);
      param_5 = param_5 >> 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar1);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0xc) * uVar1;
    uVar3 = iVar2 * 2;
    *param_4 = uVar3;
    uVar1 = *(uint *)((int)this + 0x1c);
    if (uVar1 != 0) {
      if (uVar3 <= uVar1) {
        *(uint *)((int)this + 0x1c) = uVar1 + iVar2 * -2;
        *param_4 = 0;
        return 0;
      }
      *param_4 = uVar3 - uVar1;
      memmove(param_3,(void *)((int)param_3 + *(int *)((int)this + 0x1c)),uVar3 - uVar1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    return 0;
  }
LAB_633a15f3:
  *param_4 = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  for (uVar3 = (uVar1 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  for (iVar2 = (uVar1 & 1) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)param_3 = 0;
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return 0x80004005;
}


