/* Module: vegas30.exe
   Function: FUN_005c2b90
   Address: 005c2b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_005c2b90(int param_1,int *param_2,int param_3,undefined4 param_4,byte *param_5,int *param_6)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piStack_4ec;
  undefined **local_4e8;
  int *local_4e4;
  uint local_4e0;
  int local_4dc;
  double dStack_4d8;
  int local_4d0;
  int local_4cc;
  int iStack_4c8;
  int *local_4c4;
  double dStack_4c0;
  int iStack_4b4;
  double dStack_4b0;
  int iStack_4a4;
  tagRECT tStack_4a0;
  int iStack_490;
  uint uStack_48c;
  int iStack_488;
  float fStack_484;
  undefined4 local_480;
  undefined4 local_47c;
  int iStack_474;
  int local_470;
  int local_46c;
  undefined4 local_468;
  undefined4 local_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  int aiStack_430 [267];
  
  local_4e8 = &PTR_FUN_0062a0e8;
  local_4e4 = (int *)0x0;
  local_4cc = 0;
  local_4c4 = (int *)0x0;
  local_4d0 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  local_468 = 0;
  local_464 = 0;
  local_480 = 0;
  local_47c = 0x3ff00000;
  local_470 = param_1;
  local_46c = FUN_005f13f0(3);
  if (local_46c != 0) {
    iVar3 = FUN_005f6990(&local_4e4);
    if (iVar3 < 0) {
      local_4e8 = &PTR_FUN_0062a0e8;
      if (local_4e4 == (int *)0x0) {
        return iVar3;
      }
      (**(code **)(*local_4e4 + 8))(local_4e4);
      return iVar3;
    }
    iVar3 = (**(code **)(*local_4e4 + 0x54))(local_4e4,&local_480);
    if (iVar3 != 0) {
      iStack_488 = 0;
      fStack_484 = 1.875;
    }
    iVar3 = (**(code **)(*piStack_4ec + 0x34))(piStack_4ec,&local_4e8);
    if ((iVar3 < 0) || (iVar3 == 1)) {
      local_4e0 = 1;
      local_4dc = 0;
    }
    iVar3 = *(int *)(param_1 + 0x4cc);
    iStack_4b4 = 1;
    iStack_490 = 0;
    if ((iVar3 < local_4dc) || ((iVar3 <= local_4dc && (*(uint *)(param_1 + 0x4c8) < local_4e0)))) {
      if ((iVar3 < 1) && (iVar3 < 0)) {
        *(undefined4 *)(param_1 + 0x4c8) = 0;
        iStack_4b4 = 0;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
        iVar3 = FUN_005f03a0(param_1 + 0x170);
        if ((iVar3 != 0) && ((*(uint *)(param_1 + 0x134) & 0x400) != 0)) {
          iStack_490 = 1;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x4c8) = local_4e0 - 1;
      *(uint *)(param_1 + 0x4cc) = local_4dc - (uint)(local_4e0 == 0);
    }
    iStack_4c8 = 0;
    uStack_48c = 0;
    iStack_488 = 0;
    fStack_484 = 0.0;
    iStack_4a4 = 1;
LAB_005c2d22:
    iStack_4c8 = iStack_4c8 + 1;
    iVar3 = (**(code **)(*local_4e4 + 0x3c))
                      (local_4e4,*(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc),
                       &local_4d0,&local_4cc,&local_4c4,0,&local_468,-(DAT_0064aec8 != 0) & 8,0);
    if (iVar3 < 0) {
      if (iVar3 != -0x7ffb1ff6) {
        local_4e8 = &PTR_FUN_0062a0e8;
        if (local_4e4 != (int *)0x0) {
          (**(code **)(*local_4e4 + 8))(local_4e4);
        }
        return iVar3;
      }
    }
    else if ((iVar3 != -0x7ffb1ff6) && (iVar3 != 1)) {
      if ((local_4c4[1] == 0) || (local_4c4[2] == 0)) {
        (**(code **)(*local_4e4 + 0x40))(local_4e4,local_4d0);
      }
      else {
        if (local_4cc < 0) {
          local_4d0 = local_4d0 - (local_4c4[2] + -1) * local_4cc;
        }
        dStack_4c0 = *(double *)(local_46c + 0x50);
        if ((dStack_4c0 < _DAT_00612af0) || (_DAT_00610808 < dStack_4c0)) {
          dStack_4c0 = 1.0;
        }
        if (((*(int *)(local_46c + 0x44) != 0) && (1 < local_4c4[2])) &&
           (_DAT_006106d0 == (double)CONCAT44(local_47c,local_480))) {
          if (local_4c4[4] == 3) {
            iVar3 = 0xc;
          }
          else {
            iVar3 = local_4c4[8] << 2;
          }
          iVar4 = *local_4c4;
          piVar9 = local_4c4;
          piVar8 = aiStack_430;
          for (uVar5 = (uint)(iVar4 + iVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *piVar8 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar8 = piVar8 + 1;
          }
          for (uVar5 = iVar4 + iVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)piVar8 = (char)*piVar9;
            piVar9 = (int *)((int)piVar9 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
          aiStack_430[2] = aiStack_430[2] / 2;
          if (local_4cc == 0) {
            uVar5 = (uint)*(ushort *)((int)local_4c4 + 0xe) * local_4c4[1] + 0x1f;
            local_4cc = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          }
          dStack_4c0 = dStack_4c0 * _DAT_00610560;
          local_4cc = local_4cc * 2;
          local_4c4 = aiStack_430;
          param_1 = local_470;
        }
        if (*param_2 == 0) {
          if (param_3 == 0) {
            param_3 = 0x1e;
          }
          iVar3 = _SfDibAlloc_28(param_2,0x1c,param_3,param_4,0,0,0);
          if (iVar3 < 0) {
            (**(code **)(*local_4e4 + 0x40))(local_4e4,local_4d0);
            if (piStack_4ec != (int *)0x0) {
              (**(code **)(*piStack_4ec + 8))(piStack_4ec);
            }
            return -0x7fffbffb;
          }
        }
        if (iStack_4a4 != 0) {
          iStack_4a4 = 0;
          iStack_474 = *(int *)(*param_2 + 4);
          uVar5 = *(uint *)(*param_2 + 8);
          uVar6 = (int)uVar5 >> 0x1f;
          iVar3 = (uVar5 ^ uVar6) - uVar6;
          uVar5 = local_4c4[2] >> 0x1f;
          dStack_4d8 = (double)CONCAT44(dStack_4d8._4_4_,iVar3);
          dStack_4b0 = ((double)local_4c4[1] / (double)(int)((local_4c4[2] ^ uVar5) - uVar5)) *
                       dStack_4c0;
          SetRect(&tStack_4a0,0,0,iStack_474,iVar3);
          dStack_4d8 = (double)dStack_4d8._0_4_;
          if ((double)iStack_474 / dStack_4d8 <= dStack_4b0) {
            iVar3 = ftol();
            tStack_4a0.top = (tStack_4a0.bottom - iVar3) / 2;
            tStack_4a0.bottom = tStack_4a0.top + iVar3;
          }
          else {
            iVar3 = ftol();
            tStack_4a0.left = (tStack_4a0.right - iVar3) / 2;
            tStack_4a0.right = tStack_4a0.left + iVar3;
          }
          dStack_4d8 = (double)CONCAT44(dStack_4d8._4_4_,(uint)param_5[2]);
          _SfDibSet_36(*param_2,0,0,0,(float)param_5[2] * _DAT_00610f1c,
                       (float)param_5[1] * _DAT_00610f1c,(float)*param_5 * _DAT_00610f1c,
                       (float)param_5[3] * _DAT_00610f1c,3);
        }
        iVar3 = _SfDibCopy_36(*param_2,0,&tStack_4a0,0,local_4c4,local_4d0,0,local_4cc,3);
        dStack_4b0 = (double)CONCAT44(dStack_4b0._4_4_,iVar3);
        (**(code **)(*local_4e4 + 0x40))(local_4e4,local_4d0);
        iVar4 = _SfGetPixelType_4(*param_2);
        if (((iVar4 == 0x1c) || (iVar4 == 0x1d)) || ((iVar4 == 0x1f || (iVar4 == 0x20)))) {
          piVar9 = (int *)*param_2;
          uVar1 = *(ushort *)((int)piVar9 + 0xe);
          iVar3 = (-(uint)(iVar4 != 0x20) & 0xfffffff4) + 0x10;
          dStack_4d8 = (double)CONCAT44(dStack_4d8._4_4_,iVar3);
          uVar5 = piVar9[1] * (uint)uVar1 + 0x1f;
          iVar4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          if (piVar9[4] == 0) {
            if (((piVar9[8] != 0) || (uVar1 == 0)) || (8 < uVar1)) goto LAB_005c30ef;
            iVar7 = 1 << ((byte)uVar1 & 0x1f);
LAB_005c30f2:
            piVar8 = (int *)(*piVar9 + iVar7 * 4 + (int)piVar9);
          }
          else {
            if (piVar9[4] != 3) {
LAB_005c30ef:
              iVar7 = piVar9[8];
              goto LAB_005c30f2;
            }
            piVar8 = piVar9 + 0xd;
          }
          _SfDibPrepAlpha_32((int *)((piVar9[2] + -1) * iVar4 + (int)piVar8),piVar9[1],piVar9[2],
                             -iVar4,0,*(undefined4 *)(local_46c + 0x60),local_46c + 0x68,iVar3);
          iVar3 = dStack_4b0._0_4_;
          param_1 = local_470;
        }
        if (((iStack_4b4 != 0) ||
            (iVar3 = _SfDibStats_20(*param_2,0,&tStack_4a0,0,&fStack_460), iVar3 < 0)) ||
           (fVar2 = (fStack_458 - fStack_460) * (fStack_45c - fStack_458) +
                    (fStack_450 - fStack_44c) * (fStack_44c - fStack_454) +
                    (fStack_444 - fStack_440) * (fStack_440 - fStack_448),
           (float)_DAT_00612ae0 < fVar2)) goto LAB_005c33b9;
        if (fStack_484 < fVar2) {
          uStack_48c = *(uint *)(param_1 + 0x4c8);
          iStack_488 = *(int *)(param_1 + 0x4cc);
          fStack_484 = fVar2;
          if (7 < iStack_4c8) {
LAB_005c33b9:
            if (param_6 != (int *)0x0) {
              *param_6 = tStack_4a0.left;
              param_6[1] = tStack_4a0.top;
              param_6[2] = tStack_4a0.right;
              param_6[3] = tStack_4a0.bottom;
            }
            local_4e8 = &PTR_FUN_0062a0e8;
            if (local_4e4 == (int *)0x0) {
              return iVar3;
            }
            (**(code **)(*local_4e4 + 8))(local_4e4);
            return iVar3;
          }
          iVar4 = iStack_488 + (uint)(0xfffffffe < uStack_48c);
          if ((local_4dc < iVar4) || ((local_4dc <= iVar4 && (local_4e0 <= uStack_48c + 1))))
          goto LAB_005c33b9;
        }
      }
    }
    iVar3 = local_4dc;
    if (iStack_4c8 < 8) {
      uVar5 = *(uint *)(param_1 + 0x4c8);
      iVar4 = *(int *)(param_1 + 0x4cc) + (uint)(0xfffffffe < uVar5);
      if ((local_4dc < iVar4) || ((local_4dc <= iVar4 && (local_4e0 <= uVar5 + 1))))
      goto LAB_005c3316;
      if (iStack_490 == 0) {
        if ((0 < local_4dc) || ((-1 < local_4dc && (0x13 < local_4e0)))) {
          iVar4 = *(int *)(param_1 + 0x4cc) + (uint)(0xfffffff5 < uVar5);
          *(uint *)(param_1 + 0x4c8) = uVar5 + 10;
          goto LAB_005c32d1;
        }
        *(uint *)(param_1 + 0x4c8) = uVar5 + 1;
        *(int *)(param_1 + 0x4cc) = iVar4;
      }
      else {
        dStack_4d8 = (double)CONCAT44(dStack_4d8._4_4_,iStack_4c8 * iStack_4c8);
        uVar10 = ftol();
        iVar4 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)(param_1 + 0x4c8) = (int)uVar10;
LAB_005c32d1:
        *(int *)(param_1 + 0x4cc) = iVar4;
      }
      if ((iVar3 <= *(int *)(param_1 + 0x4cc)) &&
         ((iVar3 < *(int *)(param_1 + 0x4cc) || (local_4e0 <= *(uint *)(param_1 + 0x4c8))))) {
        *(uint *)(param_1 + 0x4c8) = local_4e0 - 1;
        *(uint *)(param_1 + 0x4cc) = iVar3 - (uint)(local_4e0 == 0);
      }
      goto LAB_005c2d22;
    }
LAB_005c3316:
    if (iStack_4a4 == 0) {
      *(uint *)(param_1 + 0x4c8) = uStack_48c;
      *(int *)(param_1 + 0x4cc) = iStack_488;
      iStack_4b4 = 1;
      goto LAB_005c2d22;
    }
  }
  local_4e8 = &PTR_FUN_0062a0e8;
  if (local_4e4 != (int *)0x0) {
    (**(code **)(*local_4e4 + 8))(local_4e4);
  }
  return -0x7fffbffb;
}


