/* Module: rv203260.dll
   Function: FUN_638a1a00
   Address: 638a1a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_638a1a00(void *this,uint param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iStack_18;
  
  if ((*(uint *)((int)this + 0xac) != param_1) || (*(int *)((int)this + 0xe0) == 0)) {
    iVar14 = *(int *)((int)this + 8);
    piVar4 = (int *)((int)this + 8);
    iVar12 = 0;
    if (*(short *)((int)this + 0xf4) != 0) {
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        *(int *)(iVar1 + 0x11a) = *(int *)(iVar1 + 0x11a) + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)(uint)*(ushort *)((int)this + 0xf4));
    }
    uVar13 = *(uint *)((int)this + 0xac);
    *(undefined4 *)((int)this + 0x2ce) = 0;
    if (param_1 < uVar13) {
      uVar13 = (param_1 - uVar13) - 1;
    }
    else {
      uVar13 = param_1 - uVar13;
    }
    if (*(int *)((int)this + 0xe0) == 0) {
      iVar14 = 0;
      *(undefined4 *)((int)this + 0xe0) = 1;
      *(uint *)((int)this + 0xa8) = param_1;
      *(uint *)((int)this + 0xac) = param_1;
      if (*(short *)((int)this + 0xf4) != 0) {
        piVar4 = (int *)((int)this + 8);
        do {
          iVar12 = *piVar4;
          iVar14 = iVar14 + 1;
          piVar4 = piVar4 + 1;
          *(uint *)(iVar12 + 0x11e) = param_1;
          *(uint *)(iVar12 + 0x122) = param_1;
          *(uint *)(iVar12 + 0x126) = param_1;
          *(uint *)(iVar12 + 0x12a) = param_1;
          *(uint *)(iVar12 + 0x12e) = param_1;
        } while (iVar14 < (int)(uint)*(ushort *)((int)this + 0xf4));
      }
    }
    else if (((*(int *)((int)this + 0xd0) != 0) &&
             ((double)uVar13 <=
              ((double)*(int *)((int)this + 0xd0) - _DAT_638b30f8) *
              (_DAT_638b30f0 / *(double *)(iVar14 + 0x1a6)))) || (86400000 < uVar13)) {
      *(undefined4 *)((int)this + 0x2ce) = 1;
    }
    if (*(int *)((int)this + 0x2ce) == 0) {
      *(undefined4 *)((int)this + 0x2ce) = 1;
      *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0xac);
      *(uint *)((int)this + 0xac) = param_1;
      iStack_18 = 0;
      if (*(short *)((int)this + 0xf4) != 0) {
        piVar4 = (int *)((int)this + 8);
        do {
          iVar14 = *piVar4;
          if (*(int *)((int)this + 0xfe) != 0) {
            uVar13 = *(uint *)((int)this + 0xa8);
            if (param_1 < uVar13) {
              uVar5 = param_1 - uVar13;
              uVar6 = uVar5 - 1;
            }
            else {
              uVar5 = param_1 - uVar13;
              uVar6 = uVar5;
            }
            if (10 < uVar6) {
              if (param_1 < uVar13) {
                uVar5 = uVar5 - 1;
              }
              dVar2 = (_DAT_638b30f0 / (double)uVar5) * _DAT_638b3100 -
                      *(double *)(iVar14 + 0xf2) * _DAT_638b3108;
              *(double *)(iVar14 + 0xf2) = dVar2;
              dVar3 = *(double *)(iVar14 + 0x1a6) /
                      ((double)*(int *)((int)this + 0xd0) - (double)_DAT_638b3110);
              if (dVar3 < dVar2) {
                *(double *)(iVar14 + 0xf2) = dVar3;
              }
            }
          }
          if (*(int *)(iVar14 + 0xea) == 2) {
            *(undefined4 *)(iVar14 + 0x17e) = 0;
          }
          else {
            uVar13 = *(uint *)((int)this + 0xac);
            iVar12 = ftol();
            uVar5 = uVar13 - iVar12;
            uVar6 = *(int *)(iVar14 + 0x122) + *(int *)(iVar14 + 0x1ce);
            if (uVar6 < uVar13) {
              uVar8 = uVar6 - uVar13;
              uVar7 = uVar8 - 1;
            }
            else {
              uVar7 = uVar6 - uVar13;
              uVar8 = uVar7;
            }
            if (uVar13 < uVar6) {
              uVar9 = uVar13 - uVar6;
              uVar10 = uVar9 - 1;
            }
            else {
              uVar9 = uVar13 - uVar6;
              uVar10 = uVar9;
            }
            if (uVar7 < uVar10) {
              uVar9 = uVar8;
              if (uVar6 < uVar13) {
LAB_638a1c76:
                uVar9 = uVar8 - 1;
              }
            }
            else {
              uVar8 = uVar9;
              if (uVar13 < uVar6) goto LAB_638a1c76;
            }
            if (uVar6 < uVar5) {
              uVar7 = uVar6 - uVar5;
              uVar13 = uVar7 - 1;
            }
            else {
              uVar13 = uVar6 - uVar5;
              uVar7 = uVar13;
            }
            if (uVar5 < uVar6) {
              uVar10 = uVar5 - uVar6;
              uVar8 = uVar10 - 1;
            }
            else {
              uVar10 = uVar5 - uVar6;
              uVar8 = uVar10;
            }
            if (uVar13 < uVar8) {
              if (uVar6 < uVar5) {
                uVar7 = uVar7 - 1;
              }
            }
            else {
              uVar7 = uVar10;
              if (uVar5 < uVar6) {
                uVar7 = uVar10 - 1;
              }
            }
            if (uVar9 < uVar7) {
              *(undefined4 *)(iVar14 + 0x17e) = 1;
              *(undefined4 *)((int)this + 0x2ce) = 0;
            }
            else {
              *(undefined4 *)(iVar14 + 0x17e) = 0;
            }
          }
          iStack_18 = iStack_18 + 1;
          piVar4 = piVar4 + 1;
        } while (iStack_18 < (int)(uint)*(ushort *)((int)this + 0xf4));
      }
      iVar14 = 0;
      if (0 < *(int *)((int)this + 0x2d2)) {
        puVar11 = (undefined4 *)((int)this + 0x336);
        do {
          *puVar11 = 0;
          iVar14 = iVar14 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar14 < *(int *)((int)this + 0x2d2));
      }
    }
  }
  return 0;
}


