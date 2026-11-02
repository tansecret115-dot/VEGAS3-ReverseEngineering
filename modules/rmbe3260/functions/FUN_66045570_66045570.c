/* Module: rmbe3260.dll
   Function: FUN_66045570
   Address: 66045570
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66045570(void *this,int *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  short *psVar12;
  void *pvVar13;
  undefined *puVar14;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined3 uVar15;
  ushort uVar16;
  byte *pbVar17;
  undefined2 uVar18;
  bool bVar19;
  int local_c;
  
  local_c = 0;
  if ((*(int *)((int)this + 0x52) == 0) || (*(int *)this == 0)) {
    *(undefined4 *)((int)this + 0x487) = 0x80040007;
    return -0x7ffbfff9;
  }
  if (*(int *)((int)this + 0x1c) == 0) {
    iVar6 = *(int *)((int)this + 0x2a);
    uVar3 = *(ushort *)((int)this + 0x1a);
  }
  else {
    iVar6 = *(int *)((int)this + 0x38);
    uVar3 = *(ushort *)((int)this + 0x14);
  }
  *param_1 = iVar6 * (uint)uVar3 * 2;
  if (param_3 != (int *)0x0) {
    *param_3 = *(int *)((int)this + 0x1c);
  }
  pbVar17 = &DAT_6606e210;
  pbVar8 = (byte *)(*(int *)this + 0x218);
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_660455fd:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_66045602;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_660455fd;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_66045602:
  if (iVar6 == 0) {
    sVar4 = 3;
  }
  else {
    pbVar17 = &DAT_6606e208;
    pbVar5 = pbVar8;
    do {
      bVar1 = *pbVar5;
      bVar19 = bVar1 < *pbVar17;
      if (bVar1 != *pbVar17) {
LAB_6604563b:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_66045640;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar19 = bVar1 < pbVar17[1];
      if (bVar1 != pbVar17[1]) goto LAB_6604563b;
      pbVar5 = pbVar5 + 2;
      pbVar17 = pbVar17 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_66045640:
    if (iVar6 == 0) {
      sVar4 = 4;
    }
    else {
      pbVar17 = &DAT_6606e614;
      pbVar5 = pbVar8;
      do {
        bVar1 = *pbVar5;
        bVar19 = bVar1 < *pbVar17;
        if (bVar1 != *pbVar17) {
LAB_66045679:
          iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
          goto LAB_6604567e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar19 = bVar1 < pbVar17[1];
        if (bVar1 != pbVar17[1]) goto LAB_66045679;
        pbVar5 = pbVar5 + 2;
        pbVar17 = pbVar17 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_6604567e:
      if (iVar6 == 0) {
        sVar4 = 4;
      }
      else {
        pbVar17 = &DAT_6606e60c;
        pbVar5 = pbVar8;
        do {
          bVar1 = *pbVar5;
          bVar19 = bVar1 < *pbVar17;
          if (bVar1 != *pbVar17) {
LAB_660456b7:
            iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_660456bc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar19 = bVar1 < pbVar17[1];
          if (bVar1 != pbVar17[1]) goto LAB_660456b7;
          pbVar5 = pbVar5 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_660456bc:
        if (iVar6 == 0) {
          sVar4 = 4;
        }
        else {
          pbVar17 = &DAT_6606cc30;
          pbVar5 = pbVar8;
          do {
            bVar1 = *pbVar5;
            bVar19 = bVar1 < *pbVar17;
            if (bVar1 != *pbVar17) {
LAB_660456f2:
              iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_660456f7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar19 = bVar1 < pbVar17[1];
            if (bVar1 != pbVar17[1]) goto LAB_660456f2;
            pbVar5 = pbVar5 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_660456f7:
          if (iVar6 == 0) {
            sVar4 = 4;
          }
          else {
            pbVar5 = &DAT_6606e604;
            do {
              bVar1 = *pbVar8;
              bVar19 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_6604572d:
                iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                goto LAB_66045732;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar19 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_6604572d;
              pbVar8 = pbVar8 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_66045732:
            sVar4 = (iVar6 != 0) + 4;
          }
        }
      }
    }
  }
  piVar7 = FUN_66047020(sVar4);
  if (piVar7 == (int *)0x0) {
    local_c = -0x7ff8fff2;
  }
  iVar6 = *(int *)this;
  param_3 = piVar7;
  (**(code **)(*piVar7 + 0x88))
            (CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(iVar6 + 0x225)),iVar6 + 0x218);
  if (local_c != 0) goto LAB_6604599d;
  pbVar17 = &DAT_6606e208;
  pbVar8 = (byte *)(*(int *)this + 0x218);
  pbVar5 = pbVar8;
  pvVar13 = this;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_660457b0:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_660457b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_660457b0;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_660457b5:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6606e63c);
    goto LAB_6604599d;
  }
  pbVar17 = &DAT_6606e614;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_6604580e:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_66045813;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_6604580e;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_66045813:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6606e634);
    goto LAB_6604599d;
  }
  pbVar17 = &DAT_6606cc30;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_6604586c:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_66045871;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_6604586c;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_66045871:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6606cc30);
    goto LAB_6604599d;
  }
  pbVar17 = &DAT_6606e60c;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_660458ca:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_660458cf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_660458ca;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_660458cf:
  if (iVar6 == 0) {
LAB_66045ac9:
    *(undefined4 *)((int)this + 0x34) = 0;
    (**(code **)(*piVar7 + 0x84))(0);
    (**(code **)(*piVar7 + 0x78))(&DAT_6606e62c);
    puVar9 = (undefined4 *)
             FUN_6604b200(*(void **)this,
                          CONCAT22(extraout_var_03,*(undefined2 *)((int)*(void **)this + 0x225)),
                          (undefined *)0x6,(short *)((int)&param_1 + 2));
    if (param_1._2_2_ == 4) {
      *(undefined4 *)((int)this + 0x24) = *puVar9;
    }
    pbVar5 = &DAT_6606e210;
    pbVar8 = (byte *)(*(int *)this + 0x218);
    do {
      bVar1 = *pbVar8;
      bVar19 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_66045b3c:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_66045b41;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar19 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_66045b3c;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_66045b41:
    if (iVar6 == 0) {
      (**(code **)(*piVar7 + 0x80))(0xc,*(short *)((int)this + 0x24) * 0xc,0);
      goto LAB_6604599d;
    }
  }
  else {
    pbVar17 = &DAT_6606e210;
    pbVar5 = pbVar8;
    do {
      bVar1 = *pbVar5;
      uVar15 = (undefined3)((uint)pvVar13 >> 8);
      pvVar13 = (void *)CONCAT31(uVar15,bVar1);
      bVar19 = bVar1 < *pbVar17;
      if (bVar1 != *pbVar17) {
LAB_66045902:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_66045907;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      pvVar13 = (void *)CONCAT31(uVar15,bVar1);
      bVar19 = bVar1 < pbVar17[1];
      if (bVar1 != pbVar17[1]) goto LAB_66045902;
      pbVar5 = pbVar5 + 2;
      pbVar17 = pbVar17 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_66045907:
    if (iVar6 == 0) goto LAB_66045ac9;
    pbVar5 = &DAT_6606e604;
    do {
      bVar1 = *pbVar8;
      uVar10 = (uint)pvVar13 >> 0x10;
      bVar19 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_6604593e:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_66045943;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar2 = pbVar5[1];
      pvVar13 = (void *)CONCAT31((int3)((uint)pvVar13 >> 8),bVar2);
      bVar19 = bVar1 < bVar2;
      if (bVar1 != bVar2) goto LAB_6604593e;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_66045943:
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x34) = 1;
      (**(code **)(*param_3 + 0x84))(1);
      puVar11 = (ushort *)
                FUN_6604b200(*(void **)this,
                             CONCAT22(extraout_var_00,*(undefined2 *)((int)*(void **)this + 0x225)),
                             (undefined *)0xd,(short *)((int)&param_1 + 2));
      uVar3 = *puVar11;
      psVar12 = (short *)FUN_6604b200(*(void **)this,
                                      CONCAT22(extraout_var_01,
                                               *(undefined2 *)((int)*(void **)this + 0x225)),
                                      (undefined *)0x6,(short *)((int)&param_1 + 2));
      sVar4 = *psVar12;
      psVar12 = (short *)FUN_6604b200(*(void **)this,
                                      CONCAT22(extraout_var_02,
                                               *(undefined2 *)((int)*(void **)this + 0x225)),
                                      (undefined *)0xf,(short *)((int)&param_1 + 2));
      uVar18 = (undefined2)((uint)this >> 0x10);
      uVar16 = *psVar12 * sVar4;
      piVar7 = (int *)FUN_6604b200(*(void **)this,
                                   CONCAT22(uVar18,*(undefined2 *)((int)*(void **)this + 0x225)),
                                   (undefined *)0x10,(short *)((int)&param_1 + 2));
      if (*piVar7 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        pvVar13 = operator_new((int)((ulonglong)uVar16 / (ulonglong)(longlong)(int)(uint)uVar3) << 1
                              );
        puVar14 = (undefined *)0x0;
        if (pvVar13 != (void *)0x0) {
          puVar14 = FUN_6604b200(*(void **)this,
                                 CONCAT22(uVar18,*(undefined2 *)((int)*(void **)this + 0x225)),
                                 (undefined *)0x11,(short *)((int)&param_1 + 2));
        }
      }
      local_c = (**(code **)(*param_3 + 0x74))
                          (&DAT_6606e61c,CONCAT22((short)uVar10,uVar3),sVar4,CONCAT22(uVar18,uVar16)
                           ,puVar14);
      piVar7 = param_3;
      goto LAB_6604599d;
    }
    *(undefined4 *)((int)this + 0x34) = 0;
    (**(code **)(*piVar7 + 0x84))(0);
    (**(code **)(*piVar7 + 0x78))(&DAT_6606e62c);
    puVar9 = (undefined4 *)
             FUN_6604b200(*(void **)this,
                          CONCAT22(extraout_var,*(undefined2 *)((int)*(void **)this + 0x225)),
                          (undefined *)0x6,(short *)((int)&param_1 + 2));
    if (param_1._2_2_ == 4) {
      *(undefined4 *)((int)this + 0x24) = *puVar9;
    }
  }
  (**(code **)(*piVar7 + 0x80))(1,*(undefined2 *)((int)this + 0x24),0);
LAB_6604599d:
  if (local_c == 0) {
    uVar10 = (**(code **)(*piVar7 + 0xac))();
    *param_2 = uVar10 & 0xffff;
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)*piVar7)(1);
  }
  if (local_c == 0) {
    *(undefined4 *)((int)this + 0x487) = 0;
  }
  return local_c;
}


