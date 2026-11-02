/* Module: rmto3260.dll
   Function: FUN_662f7e40
   Address: 662f7e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f7e40(void *this,int *param_1,uint *param_2,int *param_3)

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
  pbVar17 = &DAT_6630ba10;
  pbVar8 = (byte *)(*(int *)this + 0x218);
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_662f7ecd:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_662f7ed2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_662f7ecd;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_662f7ed2:
  if (iVar6 == 0) {
    sVar4 = 3;
  }
  else {
    pbVar17 = &DAT_6630af78;
    pbVar5 = pbVar8;
    do {
      bVar1 = *pbVar5;
      bVar19 = bVar1 < *pbVar17;
      if (bVar1 != *pbVar17) {
LAB_662f7f0b:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_662f7f10;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar19 = bVar1 < pbVar17[1];
      if (bVar1 != pbVar17[1]) goto LAB_662f7f0b;
      pbVar5 = pbVar5 + 2;
      pbVar17 = pbVar17 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_662f7f10:
    if (iVar6 == 0) {
      sVar4 = 4;
    }
    else {
      pbVar17 = &DAT_6630ba08;
      pbVar5 = pbVar8;
      do {
        bVar1 = *pbVar5;
        bVar19 = bVar1 < *pbVar17;
        if (bVar1 != *pbVar17) {
LAB_662f7f49:
          iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
          goto LAB_662f7f4e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar19 = bVar1 < pbVar17[1];
        if (bVar1 != pbVar17[1]) goto LAB_662f7f49;
        pbVar5 = pbVar5 + 2;
        pbVar17 = pbVar17 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_662f7f4e:
      if (iVar6 == 0) {
        sVar4 = 4;
      }
      else {
        pbVar17 = &DAT_6630ba00;
        pbVar5 = pbVar8;
        do {
          bVar1 = *pbVar5;
          bVar19 = bVar1 < *pbVar17;
          if (bVar1 != *pbVar17) {
LAB_662f7f87:
            iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_662f7f8c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar19 = bVar1 < pbVar17[1];
          if (bVar1 != pbVar17[1]) goto LAB_662f7f87;
          pbVar5 = pbVar5 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_662f7f8c:
        if (iVar6 == 0) {
          sVar4 = 4;
        }
        else {
          pbVar17 = &DAT_6630b9f8;
          pbVar5 = pbVar8;
          do {
            bVar1 = *pbVar5;
            bVar19 = bVar1 < *pbVar17;
            if (bVar1 != *pbVar17) {
LAB_662f7fc2:
              iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_662f7fc7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar19 = bVar1 < pbVar17[1];
            if (bVar1 != pbVar17[1]) goto LAB_662f7fc2;
            pbVar5 = pbVar5 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_662f7fc7:
          if (iVar6 == 0) {
            sVar4 = 4;
          }
          else {
            pbVar5 = &DAT_6630b9f0;
            do {
              bVar1 = *pbVar8;
              bVar19 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_662f7ffd:
                iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                goto LAB_662f8002;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar19 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_662f7ffd;
              pbVar8 = pbVar8 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_662f8002:
            sVar4 = (iVar6 != 0) + 4;
          }
        }
      }
    }
  }
  piVar7 = FUN_662f97a0(sVar4);
  if (piVar7 == (int *)0x0) {
    local_c = -0x7ff8fff2;
  }
  iVar6 = *(int *)this;
  param_3 = piVar7;
  (**(code **)(*piVar7 + 0x88))
            (CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(iVar6 + 0x225)),iVar6 + 0x218);
  if (local_c != 0) goto LAB_662f826d;
  pbVar17 = &DAT_6630af78;
  pbVar8 = (byte *)(*(int *)this + 0x218);
  pbVar5 = pbVar8;
  pvVar13 = this;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_662f8080:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_662f8085;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_662f8080;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_662f8085:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6630ba38);
    goto LAB_662f826d;
  }
  pbVar17 = &DAT_6630ba08;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_662f80de:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_662f80e3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_662f80de;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_662f80e3:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6630ba30);
    goto LAB_662f826d;
  }
  pbVar17 = &DAT_6630b9f8;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_662f813c:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_662f8141;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_662f813c;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_662f8141:
  if (iVar6 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    (**(code **)(*piVar7 + 0x84))(1);
    local_c = (**(code **)(*piVar7 + 0x78))(&DAT_6630b9f8);
    goto LAB_662f826d;
  }
  pbVar17 = &DAT_6630ba00;
  pbVar5 = pbVar8;
  do {
    bVar1 = *pbVar5;
    uVar15 = (undefined3)((uint)pvVar13 >> 8);
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < *pbVar17;
    if (bVar1 != *pbVar17) {
LAB_662f819a:
      iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_662f819f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    pvVar13 = (void *)CONCAT31(uVar15,bVar1);
    bVar19 = bVar1 < pbVar17[1];
    if (bVar1 != pbVar17[1]) goto LAB_662f819a;
    pbVar5 = pbVar5 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_662f819f:
  if (iVar6 == 0) {
LAB_662f8399:
    *(undefined4 *)((int)this + 0x34) = 0;
    (**(code **)(*piVar7 + 0x84))(0);
    (**(code **)(*piVar7 + 0x78))(&DAT_6630ba28);
    puVar9 = (undefined4 *)
             FUN_662fece0(*(void **)this,
                          CONCAT22(extraout_var_03,*(undefined2 *)((int)*(void **)this + 0x225)),
                          (undefined *)0x6,(short *)((int)&param_1 + 2));
    if (param_1._2_2_ == 4) {
      *(undefined4 *)((int)this + 0x24) = *puVar9;
    }
    pbVar5 = &DAT_6630ba10;
    pbVar8 = (byte *)(*(int *)this + 0x218);
    do {
      bVar1 = *pbVar8;
      bVar19 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_662f840c:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_662f8411;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar19 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_662f840c;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_662f8411:
    if (iVar6 == 0) {
      (**(code **)(*piVar7 + 0x80))(0xc,*(short *)((int)this + 0x24) * 0xc,0);
      goto LAB_662f826d;
    }
  }
  else {
    pbVar17 = &DAT_6630ba10;
    pbVar5 = pbVar8;
    do {
      bVar1 = *pbVar5;
      uVar15 = (undefined3)((uint)pvVar13 >> 8);
      pvVar13 = (void *)CONCAT31(uVar15,bVar1);
      bVar19 = bVar1 < *pbVar17;
      if (bVar1 != *pbVar17) {
LAB_662f81d2:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_662f81d7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      pvVar13 = (void *)CONCAT31(uVar15,bVar1);
      bVar19 = bVar1 < pbVar17[1];
      if (bVar1 != pbVar17[1]) goto LAB_662f81d2;
      pbVar5 = pbVar5 + 2;
      pbVar17 = pbVar17 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_662f81d7:
    if (iVar6 == 0) goto LAB_662f8399;
    pbVar5 = &DAT_6630b9f0;
    do {
      bVar1 = *pbVar8;
      uVar10 = (uint)pvVar13 >> 0x10;
      bVar19 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_662f820e:
        iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
        goto LAB_662f8213;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar2 = pbVar5[1];
      pvVar13 = (void *)CONCAT31((int3)((uint)pvVar13 >> 8),bVar2);
      bVar19 = bVar1 < bVar2;
      if (bVar1 != bVar2) goto LAB_662f820e;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_662f8213:
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x34) = 1;
      (**(code **)(*param_3 + 0x84))(1);
      puVar11 = (ushort *)
                FUN_662fece0(*(void **)this,
                             CONCAT22(extraout_var_00,*(undefined2 *)((int)*(void **)this + 0x225)),
                             (undefined *)0xd,(short *)((int)&param_1 + 2));
      uVar3 = *puVar11;
      psVar12 = (short *)FUN_662fece0(*(void **)this,
                                      CONCAT22(extraout_var_01,
                                               *(undefined2 *)((int)*(void **)this + 0x225)),
                                      (undefined *)0x6,(short *)((int)&param_1 + 2));
      sVar4 = *psVar12;
      psVar12 = (short *)FUN_662fece0(*(void **)this,
                                      CONCAT22(extraout_var_02,
                                               *(undefined2 *)((int)*(void **)this + 0x225)),
                                      (undefined *)0xf,(short *)((int)&param_1 + 2));
      uVar18 = (undefined2)((uint)this >> 0x10);
      uVar16 = *psVar12 * sVar4;
      piVar7 = (int *)FUN_662fece0(*(void **)this,
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
          puVar14 = FUN_662fece0(*(void **)this,
                                 CONCAT22(uVar18,*(undefined2 *)((int)*(void **)this + 0x225)),
                                 (undefined *)0x11,(short *)((int)&param_1 + 2));
        }
      }
      local_c = (**(code **)(*param_3 + 0x74))
                          (&DAT_6630ba18,CONCAT22((short)uVar10,uVar3),sVar4,CONCAT22(uVar18,uVar16)
                           ,puVar14);
      piVar7 = param_3;
      goto LAB_662f826d;
    }
    *(undefined4 *)((int)this + 0x34) = 0;
    (**(code **)(*piVar7 + 0x84))(0);
    (**(code **)(*piVar7 + 0x78))(&DAT_6630ba28);
    puVar9 = (undefined4 *)
             FUN_662fece0(*(void **)this,
                          CONCAT22(extraout_var,*(undefined2 *)((int)*(void **)this + 0x225)),
                          (undefined *)0x6,(short *)((int)&param_1 + 2));
    if (param_1._2_2_ == 4) {
      *(undefined4 *)((int)this + 0x24) = *puVar9;
    }
  }
  (**(code **)(*piVar7 + 0x80))(1,*(undefined2 *)((int)this + 0x24),0);
LAB_662f826d:
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


