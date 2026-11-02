/* Module: sfppack3.dll
   Function: FUN_5cc3d760
   Address: 5cc3d760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5cc3d760(void *this,undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4,
            uint param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  uint _NewValue;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  float10 fVar9;
  ulonglong local_34;
  double *pdStack_c;
  uint local_8;
  
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  local_8 = 0;
  if (_DAT_5cc87cd8 <= *(double *)((int)this + 0x20c8)) {
    uVar5 = (uint)ROUND(*(double *)((int)this + 0x20c8));
  }
  else {
    uVar5 = -(int)ROUND(-*(double *)((int)this + 0x20c8));
  }
  do {
    if (((int)uVar5 < (int)*param_2) && (*(int *)((int)this + 0x22d0) == 0)) {
      uVar6 = 0;
      if (param_5 != 0) {
        pdStack_c = (double *)((int)this + 0x20d0);
        do {
          fVar9 = (float10)(**(code **)((int)this + 0x22e0))(param_1,uVar5,uVar6);
          uVar6 = uVar6 + 1;
          *pdStack_c = (double)fVar9;
          pdStack_c = pdStack_c + 1;
        } while (uVar6 < param_5);
      }
      *(undefined4 *)((int)this + 0x22d0) = 1;
    }
    uVar6 = uVar5 + 1;
    if (((int)uVar6 < (int)*param_2) && (*(int *)((int)this + 0x22d4) == 0)) {
      uVar7 = 0;
      if (param_5 != 0) {
        pdStack_c = (double *)((int)this + 0x21d0);
        do {
          fVar9 = (float10)(**(code **)((int)this + 0x22e0))(param_1,uVar6,uVar7);
          uVar7 = uVar7 + 1;
          *pdStack_c = (double)fVar9;
          pdStack_c = pdStack_c + 1;
        } while (uVar7 < param_5);
      }
      *(undefined4 *)((int)this + 0x22d4) = 1;
    }
    uVar7 = *(uint *)((int)this + 0x22d0);
    while (((uVar7 != 0 && (*(int *)((int)this + 0x22d4) != 0)) && (local_8 < *param_4))) {
      if (_DAT_5cc87cd8 <= *(double *)((int)this + 0x20c8)) {
        dVar2 = *(double *)((int)this + 0x20c8) -
                (double)(int)ROUND(*(double *)((int)this + 0x20c8));
      }
      else {
        dVar2 = (double)(int)ROUND(-*(double *)((int)this + 0x20c8)) +
                *(double *)((int)this + 0x20c8);
      }
      uVar6 = 0;
      if (param_5 != 0) {
        pdVar8 = (double *)((int)this + 0x20d0);
        do {
          (**(code **)((int)this + 0x22e4))
                    (((pdVar8[0x20] - *pdVar8) * dVar2 + *pdVar8) * *(double *)((int)this + 0x160),
                     param_3,local_8,uVar6);
          uVar6 = uVar6 + 1;
          pdVar8 = pdVar8 + 1;
        } while (uVar6 < param_5);
      }
      dVar3 = _DAT_5cc87bf8;
      dVar2 = *(double *)((int)this + 0x20b0) + *(double *)((int)this + 0x20c0);
      local_8 = local_8 + 1;
      *(double *)((int)this + 0x20c0) = dVar2;
      if (dVar3 < dVar2) {
        *(double *)((int)this + 0x20c0) = dVar2 - _DAT_5cc87bf8;
      }
      iVar4 = ftol();
      dVar2 = *(double *)((int)this + iVar4 * 8 + 0x170) + *(double *)((int)this + 0x20c8);
      bVar1 = _DAT_5cc87cd8 <= dVar2;
      *(double *)((int)this + 0x20c8) = dVar2;
      if (bVar1) {
        uVar6 = (uint)ROUND(dVar2);
      }
      else {
        uVar6 = -(int)ROUND(-dVar2);
      }
      uVar7 = (uint)(uVar5 == uVar6);
      *(uint *)((int)this + 0x22d4) = uVar7;
      *(uint *)((int)this + 0x22d0) = uVar7;
    }
  } while ((local_8 < *param_4) && (uVar5 = uVar6, (int)uVar6 < (int)*param_2));
  local_34 = (ulonglong)uVar6;
  *param_2 = uVar6;
  *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - (double)local_34;
  *param_4 = local_8;
  _controlfp(_NewValue,0xffffffff);
  return 0;
}


