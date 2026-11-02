/* Module: rmme3260.dll
   Function: FUN_66224860
   Address: 66224860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_66224860(void *this,uint param_1)

{
  int *piVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  uVar4 = *(int *)((int)this + 0x18) + 1;
  *(uint *)((int)this + 0x18) = uVar4;
  dVar2 = (double)param_1 + *(double *)((int)this + 0x24);
  *(double *)((int)this + 0x24) = dVar2;
  if (*(uint *)((int)this + 0x14) < uVar4) {
    if ((dVar2 * _DAT_6626bd28) / *(double *)((int)this + 0x1c) <= _DAT_6626bd28) {
      uVar3 = ftol();
      *(undefined4 *)((int)this + 0x10) = uVar3;
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 100;
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    if (0 < *(int *)((int)this + 4)) {
      while (-1 < iVar5) {
        piVar1 = *(int **)(*(int *)this + iVar6 * 4);
        iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x10));
        iVar6 = iVar6 + 1;
        if (*(int *)((int)this + 4) <= iVar6) {
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}


