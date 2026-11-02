/* Module: encn3260.dll
   Function: FUN_664c02d0
   Address: 664c02d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_664c02d0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = param_1;
  uVar5 = *(int *)((int)this + 4) << 2;
  if (uVar5 != 0) {
    pvVar3 = operator_new(uVar5);
    *param_1 = (int)pvVar3;
    param_1 = (int *)0x0;
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        iVar1 = (int)param_1 * 4;
        *(char *)(iVar4 + 3 + *piVar2) = (char)((uint)*(undefined4 *)(*(int *)this + iVar1) >> 0x18)
        ;
        *(char *)(iVar4 + 2 + *piVar2) = (char)((uint)*(undefined4 *)(*(int *)this + iVar1) >> 0x10)
        ;
        *(char *)(iVar4 + 1 + *piVar2) = (char)((uint)*(undefined4 *)(*(int *)this + iVar1) >> 8);
        *(undefined1 *)(iVar4 + *piVar2) = *(undefined1 *)(*(int *)this + iVar1);
        param_1 = (int *)((int)param_1 + 1);
        iVar4 = iVar4 + 4;
      } while ((int)param_1 < *(int *)((int)this + 4));
    }
    return uVar5;
  }
  return 0;
}


