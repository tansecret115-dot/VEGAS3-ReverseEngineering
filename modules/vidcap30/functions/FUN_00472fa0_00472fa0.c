/* Module: vidcap30.exe
   Function: FUN_00472fa0
   Address: 00472fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004731a2) */
/* WARNING: Removing unreachable block (ram,0x004736ef) */
/* WARNING: Removing unreachable block (ram,0x0047371e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00472fa0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            undefined4 *param_6)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  int local_4e0;
  int iStack_4d8;
  int *piStack_4d4;
  int local_4d0;
  int *local_4cc;
  int local_4c8;
  undefined8 uStack_4c4;
  int *local_4bc;
  uint local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  double dStack_4a4;
  int local_49c;
  int local_498;
  undefined8 local_494;
  float local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  int iStack_478;
  int iStack_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  int aiStack_428 [266];
  
  local_4e0 = 0;
  if ((*(int *)(param_1 + 0x360) == -5) && (*(int *)(param_1 + 0x364) == -1)) {
    return 1;
  }
  uVar7 = *(uint *)(param_1 + 0x124);
  local_4cc = (int *)0x0;
  local_488 = 0;
  local_484 = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_4c8 = 0;
  local_4bc = (int *)0x0;
  local_4d0 = 0;
  local_49c = 0;
  local_470 = 0;
  local_46c = 0;
  local_4a8 = 0;
  local_4ac = 1;
  local_4b0 = 0;
  local_494._0_4_ = 0xffffffff;
  local_494._4_4_ = 0xffffffff;
  local_48c = -1.0;
  if ((((((uVar7 & 0x400) != 0) || (*(int *)(param_1 + 0x370) == 0)) ||
       (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x368))) ||
      (local_494 = -1, *(int *)(param_1 + 0x364) != *(int *)(param_1 + 0x36c))) &&
     (local_494 = -1, (uVar7 & 0x800) == 0)) {
    *(uint *)(param_1 + 0x124) = uVar7 & 0xfffff3ff;
    iVar5 = FUN_004715a0(2);
    local_498 = iVar5;
    if (iVar5 == 0) {
      local_4e0 = 0x4e007;
LAB_00473094:
      *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x800;
    }
    else {
      local_4e0 = FUN_00473a80(&local_4cc);
      if (-1 < local_4e0) {
        iVar6 = (**(code **)(*local_4cc + 0x54))(local_4cc,&local_488);
        if (iVar6 != 0) {
          local_494._4_4_ = 0;
          local_48c = 1.875;
        }
        iVar6 = (**(code **)(*piStack_4d4 + 0x34))(piStack_4d4,(int)&uStack_4c4 + 4);
        if ((iVar6 < 0) || (iVar6 == 1)) {
          local_4b8 = 1;
          local_4b4 = 0;
        }
        iVar6 = *(int *)(param_1 + 0x360);
        iVar2 = *(int *)(param_1 + 0x364);
        *(int *)(param_1 + 0x368) = iVar6;
        *(int *)(param_1 + 0x36c) = iVar2;
        if ((iVar6 == -4) && (iVar2 == -1)) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_00473900(iVar6,iVar2,local_4b8,local_4b4);
          local_4a8 = 1;
        }
        do {
          if ((lVar12 < 0x100000000) && (lVar12 < 0)) {
            iVar6 = 0;
            iStack_4d8 = 0;
LAB_004731ae:
            lVar4 = CONCAT44(iVar6,iStack_4d8);
          }
          else {
            iStack_4d8 = local_4b8 - 1;
            iVar6 = local_4b4 - (uint)(local_4b8 == 0);
            lVar4 = lVar12;
            if (CONCAT44(iVar6,iStack_4d8) < lVar12) goto LAB_004731ae;
          }
          local_4b0 = local_4b0 + 1;
          local_4e0 = (**(code **)(*local_4cc + 0x3c))
                                (local_4cc,lVar4,&local_4d0,&local_4c8,&local_4bc,&local_49c,
                                 &local_470,0,0);
          if (local_4e0 < 0) {
            if (local_4e0 == -0x7ffb1ff6) goto LAB_00473094;
            *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x800;
            goto LAB_0047388f;
          }
          if ((((local_4e0 == -0x7ffb1ff6) || (local_4e0 == 1)) || (local_4bc[1] == 0)) ||
             (local_4bc[2] == 0)) goto LAB_00473094;
          if (local_4c8 < 0) {
            local_4d0 = local_4d0 - (local_4bc[2] + -1) * local_4c8;
          }
          dStack_4a4 = *(double *)(iVar5 + 0x50);
          if ((dStack_4a4 < _DAT_0058a8f0) || (_DAT_00587ae0 < dStack_4a4)) {
            dStack_4a4 = 1.0;
          }
          if (((local_49c != 0) && (*(int *)(iVar5 + 0x44) != 0)) &&
             ((1 < local_4bc[2] && (_DAT_00587ad0 == (double)CONCAT44(local_484,local_488))))) {
            if (local_4bc[4] == 3) {
              iVar5 = 0xc;
            }
            else {
              iVar5 = local_4bc[8] << 2;
            }
            iVar6 = *local_4bc;
            piVar10 = local_4bc;
            piVar11 = aiStack_428;
            for (uVar7 = (uint)(iVar6 + iVar5) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *piVar11 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar11 = piVar11 + 1;
            }
            for (uVar7 = iVar6 + iVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(char *)piVar11 = (char)*piVar10;
              piVar10 = (int *)((int)piVar10 + 1);
              piVar11 = (int *)((int)piVar11 + 1);
            }
            aiStack_428[2] = aiStack_428[2] / 2;
            if (local_4c8 == 0) {
              uVar7 = (uint)*(ushort *)((int)local_4bc + 0xe) * local_4bc[1] + 0x1f;
              local_4c8 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
            }
            dStack_4a4 = dStack_4a4 * _DAT_00589f50;
            local_4c8 = local_4c8 * 2;
            local_4bc = aiStack_428;
          }
          piVar10 = (int *)(param_1 + 0x370);
          if (*(int *)(param_1 + 0x370) == 0) {
            local_4e0 = _SfDibAlloc_28(piVar10,0x1c,param_3,param_4,0,0,0);
            if (local_4e0 < 0) goto LAB_00473094;
          }
          if (local_4ac != 0) {
            iVar5 = local_4bc[1];
            iVar6 = *(int *)(*piVar10 + 4);
            iVar2 = *(int *)(*piVar10 + 8);
            uVar7 = local_4bc[2];
            uVar8 = (int)uVar7 >> 0x1f;
            *(undefined4 *)(param_1 + 0x374) = 0;
            local_4ac = 0;
            *(undefined4 *)(param_1 + 0x378) = 0;
            *(int *)(param_1 + 0x37c) = iVar6;
            *(int *)(param_1 + 0x380) = iVar2;
            uStack_4c4 = (double)iVar2;
            if ((double)iVar6 / uStack_4c4 <=
                ((double)iVar5 / (double)(int)((uVar7 ^ uVar8) - uVar8)) * dStack_4a4) {
              iVar5 = ftol();
              iVar6 = (*(int *)(param_1 + 0x380) - iVar5) / 2;
              *(int *)(param_1 + 0x378) = iVar6;
              *(int *)(param_1 + 0x380) = iVar6 + iVar5;
            }
            else {
              iVar5 = ftol();
              iVar6 = (*(int *)(param_1 + 0x37c) - iVar5) / 2;
              *(int *)(param_1 + 0x374) = iVar6;
              *(int *)(param_1 + 0x37c) = iVar6 + iVar5;
            }
            uStack_4c4 = (double)CONCAT44(uStack_4c4._4_4_,(uint)param_5[2]);
            _SfDibSet_36(*piVar10,0,0,0,(float)param_5[2] * _DAT_005935d8,
                         (float)param_5[1] * _DAT_005935d8,(float)*param_5 * _DAT_005935d8,
                         (float)param_5[3] * _DAT_005935d8,3);
          }
          iVar5 = param_1 + 0x374;
          local_4e0 = _SfDibCopy_36(*(undefined4 *)(param_1 + 0x370),0,iVar5,0,local_4bc,local_4d0,0
                                    ,local_4c8,3);
          if (local_49c != 0) {
            uStack_480 = 0;
            uStack_47c = 0;
            piVar10 = *(int **)(param_1 + 0x370);
            iStack_478 = piVar10[1];
            iStack_474 = piVar10[2];
            if (piVar10[4] == 0) {
              if (((piVar10[8] != 0) || (uVar1 = *(ushort *)((int)piVar10 + 0xe), uVar1 == 0)) ||
                 (8 < uVar1)) goto LAB_00473535;
              iVar6 = 1 << ((byte)uVar1 & 0x1f);
LAB_0047353b:
              piVar11 = (int *)((int)piVar10 + *piVar10 + iVar6 * 4);
            }
            else {
              if (piVar10[4] != 3) {
LAB_00473535:
                iVar6 = piVar10[8];
                goto LAB_0047353b;
              }
              piVar11 = piVar10 + 0xd;
            }
            uVar7 = (uint)*(ushort *)((int)piVar10 + 0xe) * piVar10[1] + 0x1f;
            uStack_468 = *(undefined4 *)(local_49c + 0x30);
            uStack_464 = *(undefined4 *)(local_49c + 0x34);
            uStack_460 = *(undefined4 *)(local_49c + 0x38);
            uStack_45c = *(undefined4 *)(local_49c + 0x3c);
            iVar6 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
            switch(*(int *)(local_49c + 0x28)) {
            case 2:
            case 3:
              _SfDibPrepAlphaImage_28
                        (piVar11,iVar5,iVar6,&uStack_480,*(int *)(local_49c + 0x28) == 3,&uStack_468
                         ,4);
              break;
            case -1:
            case 0:
              _SfDibChannelSet_32(piVar11,iVar5,iVar6,&uStack_480,4,3,0,0x3ff00000);
            case 1:
              _SfDibPremultiply_20(piVar11,iVar5,iVar6,&uStack_480,4);
            }
          }
          if (local_4d0 != 0) {
            (**(code **)(*local_4cc + 0x40))(local_4cc,local_4d0);
            local_4d0 = 0;
          }
          _SfDibStats_20(*(undefined4 *)(param_1 + 0x370),0,iVar5,0,&fStack_458);
          fVar3 = (fStack_450 - fStack_458) * (fStack_454 - fStack_450) +
                  (fStack_448 - fStack_444) * (fStack_444 - fStack_44c) +
                  (fStack_43c - fStack_438) * (fStack_438 - fStack_440);
          if (_DAT_005935d4 <= fVar3) {
            local_4a8 = 1;
          }
          if (lVar4 == local_494) {
            local_4a8 = 1;
          }
          if (((local_48c < fVar3) &&
              ((local_48c = fVar3, local_494 = lVar4, 7 < local_4b0 ||
               (CONCAT44(local_4b4,local_4b8) <= lVar4 + 1)))) || (local_4a8 != 0))
          goto LAB_00473795;
          iVar5 = local_498;
          lVar12 = local_494;
          if (local_4b0 < 8) {
            if ((lVar4 + 1 < CONCAT44(local_4b4,local_4b8)) &&
               ((0 < local_4b4 ||
                ((lVar12 = lVar4 + 1, -1 < local_4b4 && (lVar12 = lVar4 + 1, 0x13 < local_4b8))))))
            {
              lVar12 = lVar4 + 10;
            }
          }
        } while( true );
      }
      *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x800;
    }
    goto LAB_0047388f;
  }
LAB_00473795:
  if ((*(int *)(param_1 + 0x370) == 0) || (param_2 == (int *)0x0)) goto LAB_0047388f;
  if (*param_2 == 0) {
    local_4e0 = _SfDibAlloc_28(param_2,0x1c,param_3,param_4,0,0,0);
    if (local_4e0 < 0) {
      *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x800;
      goto LAB_0047388f;
    }
  }
  piVar10 = *(int **)(param_1 + 0x370);
  if (piVar10[4] == 0) {
    if (((piVar10[8] != 0) || (uVar1 = *(ushort *)((int)piVar10 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0047382f;
    iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_00473835:
    piVar11 = (int *)((int)piVar10 + *piVar10 + iVar5 * 4);
  }
  else {
    if (piVar10[4] != 3) {
LAB_0047382f:
      iVar5 = piVar10[8];
      goto LAB_00473835;
    }
    piVar11 = piVar10 + 0xd;
  }
  param_2 = (int *)*param_2;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0047386a;
    iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_0047386d:
    piVar9 = (int *)(*param_2 + iVar5 * 4 + (int)param_2);
  }
  else {
    if (param_2[4] != 3) {
LAB_0047386a:
      iVar5 = param_2[8];
      goto LAB_0047386d;
    }
    piVar9 = param_2 + 0xd;
  }
  local_4e0 = _SfDibCopy_36(param_2,piVar9,param_1 + 0x374,0,piVar10,piVar11,param_1 + 0x374,0,3);
LAB_0047388f:
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0x374);
    param_6[1] = *(undefined4 *)(param_1 + 0x378);
    param_6[2] = *(undefined4 *)(param_1 + 0x37c);
    param_6[3] = *(undefined4 *)(param_1 + 0x380);
  }
  if (local_4d0 != 0) {
    (**(code **)(*local_4cc + 0x40))(local_4cc,local_4d0);
  }
  if (local_4cc != (int *)0x0) {
    (**(code **)(*local_4cc + 8))(local_4cc);
  }
  return local_4e0;
}


