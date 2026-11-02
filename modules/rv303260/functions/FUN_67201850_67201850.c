/* Module: rv303260.dll
   Function: FUN_67201850
   Address: 67201850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_67201850(void *this,uint param_1)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iStack_18;
  
  uVar12 = *(uint *)((int)this + 0xac);
  if ((uVar12 != param_1) || (*(int *)((int)this + 0xe0) == 0)) {
    *(undefined4 *)((int)this + 0x2d6) = 0;
    if (param_1 < uVar12) {
      uVar12 = (param_1 - uVar12) - 1;
    }
    else {
      uVar12 = param_1 - uVar12;
    }
    if (*(int *)((int)this + 0xe0) == 0) {
      iVar13 = 0;
      *(undefined4 *)((int)this + 0xe0) = 1;
      *(uint *)((int)this + 0xa8) = param_1;
      *(uint *)((int)this + 0xac) = param_1;
      if (*(short *)((int)this + 0xf4) != 0) {
        piVar3 = (int *)((int)this + 8);
        do {
          iVar5 = *piVar3;
          iVar13 = iVar13 + 1;
          piVar3 = piVar3 + 1;
          *(uint *)(iVar5 + 0x11a) = param_1;
          *(uint *)(iVar5 + 0x11e) = param_1;
          *(uint *)(iVar5 + 0x122) = param_1;
          *(uint *)(iVar5 + 0x126) = param_1;
          *(uint *)(iVar5 + 0x12a) = param_1;
        } while (iVar13 < (int)(uint)*(ushort *)((int)this + 0xf4));
      }
    }
    else if (((*(int *)((int)this + 0xd0) != 0) &&
             ((double)uVar12 <=
              ((double)*(int *)((int)this + 0xd0) - _DAT_672130f8) *
              (_DAT_672130f0 / *(double *)(*(int *)((int)this + 8) + 0x19e)))) ||
            (86400000 < uVar12)) {
      *(undefined4 *)((int)this + 0x2d6) = 1;
    }
    if (*(int *)((int)this + 0x2d6) == 0) {
      *(undefined4 *)((int)this + 0x2d6) = 1;
      *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0xac);
      *(uint *)((int)this + 0xac) = param_1;
      iStack_18 = 0;
      if (*(short *)((int)this + 0xf4) != 0) {
        piVar3 = (int *)((int)this + 8);
        do {
          iVar13 = *piVar3;
          if (*(int *)((int)this + 0xfe) != 0) {
            uVar12 = *(uint *)((int)this + 0xa8);
            if (param_1 < uVar12) {
              uVar4 = param_1 - uVar12;
              uVar6 = uVar4 - 1;
            }
            else {
              uVar4 = param_1 - uVar12;
              uVar6 = uVar4;
            }
            if (10 < uVar6) {
              if (param_1 < uVar12) {
                uVar4 = uVar4 - 1;
              }
              dVar1 = (_DAT_672130f0 / (double)uVar4) * _DAT_67213100 -
                      *(double *)(iVar13 + 0xf2) * _DAT_67213108;
              *(double *)(iVar13 + 0xf2) = dVar1;
              dVar2 = *(double *)(iVar13 + 0x19e) /
                      ((double)*(int *)((int)this + 0xd0) - (double)_DAT_67213110);
              if (dVar2 < dVar1) {
                *(double *)(iVar13 + 0xf2) = dVar2;
              }
            }
          }
          if (*(int *)(iVar13 + 0xea) == 2) {
            *(undefined4 *)(iVar13 + 0x176) = 0;
          }
          else {
            uVar12 = *(uint *)((int)this + 0xac);
            iVar5 = ftol();
            uVar4 = uVar12 - iVar5;
            uVar6 = *(int *)(iVar13 + 0x1c6) + *(int *)(iVar13 + 0x11e);
            if (uVar6 < uVar12) {
              uVar8 = uVar6 - uVar12;
              uVar7 = uVar8 - 1;
            }
            else {
              uVar7 = uVar6 - uVar12;
              uVar8 = uVar7;
            }
            if (uVar12 < uVar6) {
              uVar9 = uVar12 - uVar6;
              uVar10 = uVar9 - 1;
            }
            else {
              uVar9 = uVar12 - uVar6;
              uVar10 = uVar9;
            }
            if (uVar7 < uVar10) {
              uVar9 = uVar8;
              if (uVar6 < uVar12) {
LAB_67201a86:
                uVar9 = uVar8 - 1;
              }
            }
            else {
              uVar8 = uVar9;
              if (uVar12 < uVar6) goto LAB_67201a86;
            }
            if (uVar6 < uVar4) {
              uVar7 = uVar6 - uVar4;
              uVar12 = uVar7 - 1;
            }
            else {
              uVar12 = uVar6 - uVar4;
              uVar7 = uVar12;
            }
            if (uVar4 < uVar6) {
              uVar10 = uVar4 - uVar6;
              uVar8 = uVar10 - 1;
            }
            else {
              uVar10 = uVar4 - uVar6;
              uVar8 = uVar10;
            }
            if (uVar12 < uVar8) {
              if (uVar6 < uVar4) {
                uVar7 = uVar7 - 1;
              }
            }
            else {
              uVar7 = uVar10;
              if (uVar4 < uVar6) {
                uVar7 = uVar10 - 1;
              }
            }
            if (uVar9 < uVar7) {
              *(undefined4 *)(iVar13 + 0x176) = 1;
              *(undefined4 *)((int)this + 0x2d6) = 0;
            }
            else {
              *(undefined4 *)(iVar13 + 0x176) = 0;
            }
          }
          iStack_18 = iStack_18 + 1;
          piVar3 = piVar3 + 1;
        } while (iStack_18 < (int)(uint)*(ushort *)((int)this + 0xf4));
      }
      iVar13 = 0;
      if (0 < *(int *)((int)this + 0x2da)) {
        puVar11 = (undefined4 *)((int)this + 0x33e);
        do {
          *puVar11 = 0;
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < *(int *)((int)this + 0x2da));
      }
    }
  }
  return 0;
}


