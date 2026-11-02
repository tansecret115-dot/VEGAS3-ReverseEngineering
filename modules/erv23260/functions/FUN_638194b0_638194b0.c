/* Module: erv23260.dll
   Function: FUN_638194b0
   Address: 638194b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_638194b0(void *this,int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar2 = param_1;
  iVar4 = *(int *)(param_1 + 0x3c);
  bVar3 = **(byte **)(param_1 + 0xc) & 0x1f;
  if (((((**(byte **)(param_1 + 0xc) & 0x1f) == 0) && (*(int *)((int)this + 0x304) == 0)) &&
      (param_4 != 0)) && (*(int *)((int)this + 0x334) == 0)) {
    param_4 = 6;
    do {
      (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x4e4))
                (*(undefined4 *)(param_1 + 0x2c),**(undefined4 **)(param_1 + 0x30),iVar4,
                 *(undefined4 *)(param_1 + 0x48),0,
                 *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
      iVar1 = **(int **)(param_1 + 0x30);
      *(int **)(param_1 + 0x30) = *(int **)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar1 * 4 + -0x104;
      iVar4 = iVar4 + *param_2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 1;
    } while (param_4 != 0);
  }
  else {
    if ((((bVar3 == 0x11) &&
         ((*(byte *)(*(int *)(*(int *)((int)this + 0x344) + 0x11c) + param_5) & 0x1f) != 0)) ||
        (param_4 != 0)) ||
       (((bVar3 != 3 && ((bVar3 != 8 || (*(int *)((int)this + 0x33c) != 0)))) && (bVar3 != 0x11))))
    {
      return 0;
    }
    param_5 = 6;
    do {
      (**(code **)((*(int *)((int)this + 700) + 0x48) * 0x10 + (int)this))
                (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x18;
    if (*(int *)((int)this + 0x334) != 0) {
      param_1 = 6;
      do {
        (**(code **)((*(int *)((int)this + 700) + 0x48) * 0x10 + (int)this))
                  (*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100));
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 0x18;
    }
  }
  *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + 0x10;
  if (*(int *)(iVar2 + 0x40) != 0) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 0x10;
  }
  if (*(int *)(iVar2 + 0x44) != 0) {
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + *param_3 * 2;
  }
  return 1;
}


