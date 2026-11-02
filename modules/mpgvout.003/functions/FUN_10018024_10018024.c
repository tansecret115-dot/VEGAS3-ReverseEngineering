/* Module: mpgvout.003
   Function: FUN_10018024
   Address: 10018024
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10018024(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  void *pvVar14;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar4 = param_2 * 0x28;
  iVar8 = param_1 + 0x6ac + iVar4;
  piVar1 = (int *)(iVar8 + 0x18);
  if (((*(byte *)(iVar4 + 0x6b8 + param_1) & 0x10) != 0) && (*(int *)(param_1 + 0x53c) == 0)) {
    if (*(int *)(param_1 + 0x58c) == 0) {
      iVar4 = param_1 + 0x6ac + *(int *)(iVar4 + 0x6bc + param_1) * 0x28;
      pvVar12 = *(void **)(iVar4 + 0x18);
      pvVar14 = *(void **)(iVar8 + 0x18);
      iVar10 = *(int *)(param_1 + 0x368) * 2;
      if (*(int *)(param_1 + 0x374) != 0) {
        pvVar12 = (void *)((int)pvVar12 + *(int *)(param_1 + 0x368));
      }
      for (local_2c = 0; local_2c < *(int *)(param_1 + 0x36c) >> 1; local_2c = local_2c + 1) {
        memcpy(pvVar14,pvVar12,*(size_t *)(param_1 + 0x368));
        pvVar2 = (void *)(*(size_t *)(param_1 + 0x368) + (int)pvVar14);
        pvVar14 = (void *)((int)pvVar14 + iVar10);
        memcpy(pvVar2,pvVar12,*(size_t *)(param_1 + 0x368));
        pvVar12 = (void *)((int)pvVar12 + iVar10);
      }
      pvVar12 = *(void **)(iVar4 + 0x1c);
      pvVar14 = *(void **)(iVar8 + 0x1c);
      iVar10 = *(int *)(param_1 + 0x368);
      if (*(int *)(param_1 + 0x374) != 0) {
        pvVar12 = (void *)((int)pvVar12 + (iVar10 >> 1));
      }
      for (local_2c = 0; local_2c < *(int *)(param_1 + 0x36c) >> 2; local_2c = local_2c + 1) {
        memcpy(pvVar14,pvVar12,*(int *)(param_1 + 0x368) >> 1);
        sVar5 = *(int *)(param_1 + 0x368) >> 1;
        pvVar2 = (void *)(sVar5 + (int)pvVar14);
        pvVar14 = (void *)((int)pvVar14 + iVar10);
        memcpy(pvVar2,pvVar12,sVar5);
        pvVar12 = (void *)((int)pvVar12 + iVar10);
      }
      pvVar12 = *(void **)(iVar4 + 0x20);
      pvVar14 = *(void **)(iVar8 + 0x20);
      iVar4 = *(int *)(param_1 + 0x368);
      if (*(int *)(param_1 + 0x374) != 0) {
        pvVar12 = (void *)((int)pvVar12 + (iVar4 >> 1));
      }
      for (local_2c = 0; local_2c < *(int *)(param_1 + 0x36c) >> 2; local_2c = local_2c + 1) {
        memcpy(pvVar14,pvVar12,*(int *)(param_1 + 0x368) >> 1);
        sVar5 = *(int *)(param_1 + 0x368) >> 1;
        pvVar2 = (void *)(sVar5 + (int)pvVar14);
        pvVar14 = (void *)((int)pvVar14 + iVar4);
        memcpy(pvVar2,pvVar12,sVar5);
        pvVar12 = (void *)((int)pvVar12 + iVar4);
      }
    }
    else {
      piVar3 = (int *)(param_1 + 0x6c4 + *(int *)(iVar4 + 0x6bc + param_1) * 0x28);
      iVar4 = *(int *)(param_1 + 0x368);
      for (iVar10 = 0; iVar10 < iVar4 * *(int *)(param_1 + 0x36c); iVar10 = iVar10 + 1) {
        *(undefined1 *)(iVar10 + *piVar1) = *(undefined1 *)(iVar10 + *piVar3);
        iVar4 = *(int *)(param_1 + 0x368);
      }
      iVar4 = *(int *)(param_1 + 0x368);
      for (iVar10 = 0; iVar10 < iVar4 * *(int *)(param_1 + 0x36c) >> 2; iVar10 = iVar10 + 1) {
        *(undefined1 *)(iVar10 + *(int *)(iVar8 + 0x1c)) = *(undefined1 *)(iVar10 + piVar3[1]);
        iVar4 = *(int *)(param_1 + 0x368);
      }
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x368) * *(int *)(param_1 + 0x36c) >> 2) {
        do {
          *(undefined1 *)(iVar4 + *(int *)(iVar8 + 0x20)) = *(undefined1 *)(iVar4 + piVar3[2]);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x368) * *(int *)(param_1 + 0x36c) >> 2);
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x5d4) + -1;
  local_10 = (*(int *)(param_1 + 0x34) * ((iVar10 + iVar4) / *(int *)(param_1 + 0x34)) + 1) - iVar10
  ;
  if (local_10 < 0) {
    local_10 = 0;
  }
  *(int *)(param_1 + 0x5d8) = local_10;
  if ((*(int *)(param_1 + 0x5d4) == 0) || (iVar4 % iVar10 == 0)) {
    uVar7 = *(undefined4 *)(param_1 + 0x630);
    *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x634);
    *(undefined4 *)(param_1 + 0x634) = uVar7;
    (**(code **)(param_1 + 0x52c))(param_1,uVar7,piVar1);
    iVar4 = 2;
    iVar10 = 0;
    do {
      *(undefined4 *)(param_1 + 0x67c + iVar10) = *(undefined4 *)(param_1 + 0x644 + iVar10);
      *(undefined4 *)(param_1 + 0x644 + iVar10) = *(undefined4 *)(param_1 + 0x660 + iVar10);
      *(undefined4 *)(param_1 + 0x660 + iVar10) = *(undefined4 *)(param_1 + 0x67c + iVar10);
      *(undefined4 *)(param_1 + 0x638 + iVar10) = *(undefined4 *)(param_1 + 0x654 + iVar10);
      *(undefined4 *)(param_1 + 0x654 + iVar10) = *(undefined4 *)((int)piVar1 + iVar10);
      iVar10 = iVar10 + 4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x630);
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x634);
    if (*(int *)(param_1 + 0x5d4) == 0) {
      iVar4 = 0;
      FUN_1001bba0(param_1);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x5d4) + *(int *)(param_1 + 0x38) + -1;
    }
    iVar10 = *(int *)(param_1 + 0x5c);
    if ((iVar10 <= iVar4) && (iVar10 != 0)) {
      iVar4 = iVar10 + -1;
    }
    if (*(int *)(param_1 + 0x5d4) == local_10) {
      *(undefined4 *)(param_1 + 0x5bc) = 1;
      *(undefined4 *)(param_1 + 0x59c) = 0xf;
      *(undefined4 *)(param_1 + 0x598) = 0xf;
      *(undefined4 *)(param_1 + 0x5a4) = 0xf;
      *(undefined4 *)(param_1 + 0x5a0) = 0xf;
      if (local_10 == 0) {
        iVar10 = *(int *)(param_1 + 0x38);
        iVar13 = (*(int *)(param_1 + 0x34) + 1) - iVar10;
      }
      else {
        iVar13 = *(int *)(param_1 + 0x34);
        iVar10 = *(int *)(param_1 + 0x38);
      }
      iVar11 = *(int *)(param_1 + 0x5c) - local_10;
      if ((iVar11 < iVar13) && (*(int *)(param_1 + 0x5c) != 0)) {
        iVar13 = iVar11;
      }
      if (*(int *)(param_1 + 0x5d4) == 0) {
        iVar11 = iVar13 + -2 + iVar10 * 2;
      }
      else {
        iVar11 = iVar10 + -1 + iVar13;
      }
      iVar10 = iVar11 / iVar10 + -1;
      FUN_100234a4(param_1,iVar10,(iVar13 - iVar10) + -1);
      if ((*(int *)(param_1 + 0x5d4) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
        FUN_1001bba0(param_1);
      }
      FUN_1001c0fc(param_1,local_10,(uint)(*(int *)(param_1 + 0x5d4) == 0));
    }
    else {
      *(undefined4 *)(param_1 + 0x5bc) = 2;
      if (*(int *)(param_1 + 0x28) < 2) {
        iVar10 = *(int *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xa4)) {
          iVar10 = *(int *)(param_1 + 0xa4);
        }
        *(int *)(param_1 + 0x598) = iVar10;
        *(int *)(param_1 + 0x59c) = iVar10;
      }
      else {
        *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0xa8);
      }
      *(undefined4 *)(param_1 + 0x5a4) = 0xf;
      local_14 = *(int *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x5a0) = 0xf;
      local_18 = *(int *)(param_1 + 0xb0);
    }
  }
  else {
    iVar10 = 0;
    iVar4 = 2;
    do {
      *(undefined4 *)(param_1 + 0x67c + iVar10) = *(undefined4 *)(param_1 + 0x68c + iVar10);
      iVar10 = iVar10 + 4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(undefined4 *)(param_1 + 0x5bc) = 3;
    iVar4 = *(int *)(param_1 + 0x5d4) + -1;
    iVar10 = (*(int *)(param_1 + 0x5d4) + -2) % *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x538) = iVar10;
    if (*(int *)(param_1 + 0x28) < 2) {
      iVar6 = iVar10 * 0x20;
      iVar13 = *(int *)(iVar6 + 0xa4 + param_1);
      iVar11 = *(int *)(iVar6 + 0xa8 + param_1);
      if (iVar11 < iVar13) {
        iVar11 = iVar13;
      }
      *(int *)(param_1 + 0x598) = iVar11;
      *(int *)(param_1 + 0x59c) = iVar11;
      iVar13 = *(int *)(iVar6 + 0xb4 + param_1);
      iVar11 = *(int *)(iVar6 + 0xb8 + param_1);
      if (iVar11 < iVar13) {
        iVar11 = iVar13;
      }
      *(int *)(param_1 + 0x5a0) = iVar11;
      *(int *)(param_1 + 0x5a4) = iVar11;
    }
    else {
      iVar13 = iVar10 * 0x20;
      *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(iVar13 + 0xa4 + param_1);
      *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(iVar13 + 0xa8 + param_1);
      *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(iVar13 + 0xb4 + param_1);
      *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(iVar13 + 0xb8 + param_1);
    }
    iVar10 = iVar10 * 0x20;
    local_14 = *(int *)(iVar10 + 0xac + param_1);
    local_18 = *(int *)(iVar10 + 0xb0 + param_1);
    local_1c = *(int *)(iVar10 + 0xbc + param_1);
    local_20 = *(int *)(iVar10 + 0xc0 + param_1);
  }
  local_38 = param_1 + 0x2e0;
  local_3c = param_1 + 0x2ec;
  local_40 = param_1 + 0x2f8;
  local_44 = param_1 + 0x304;
  local_48 = (int *)(param_1 + 0x67c);
  local_4c = (int *)(param_1 + 0x698);
  iVar10 = *(int *)(param_1 + 0x5bc) * 4 + -4;
  *(int *)(param_1 + 0x5b8) = iVar4 - local_10;
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(iVar10 + local_38);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(iVar10 + local_3c);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(iVar10 + local_40);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(iVar10 + local_44);
  uVar7 = 0;
  if (((*(int *)(param_1 + 0x34) != 1) && (*(int *)(param_1 + 0x5bc) != 3)) ||
     (DAT_10035734 != (FILE *)0x0)) {
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 0x594) = uVar7;
  *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x40) + iVar4;
  *(int *)(param_1 + 0x670) = *piVar1;
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(iVar8 + 0x1c);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(iVar8 + 0x20);
  if (DAT_10035734 != (FILE *)0x0) {
    fprintf(DAT_10035734,"\nFrame %d (#%d in display order):\n",*(undefined4 *)(param_1 + 0x5d4),
            iVar4);
    fprintf(DAT_10035734," picture_type=%c\n",(int)*(char *)(*(int *)(param_1 + 0x5bc) + 0x10035520)
           );
    fprintf(DAT_10035734," temporal_reference=%d\n",*(undefined4 *)(param_1 + 0x5b8));
    fprintf(DAT_10035734," frame_pred_frame_dct=%d\n",*(undefined4 *)(param_1 + 0x5c4));
    fprintf(DAT_10035734," q_scale_type=%d\n",*(undefined4 *)(param_1 + 0x5c8));
    fprintf(DAT_10035734," intra_vlc_format=%d\n",*(undefined4 *)(param_1 + 0x5cc));
    fprintf(DAT_10035734," alternate_scan=%d\n",*(undefined4 *)(param_1 + 0x5d0));
    if (*(int *)(param_1 + 0x5bc) != 1) {
      fprintf(DAT_10035734," forward search window: %d...%d / %d...%d\n",-local_14,local_14,
              -local_18,local_18);
      iVar8 = 4 << ((byte)*(undefined4 *)(param_1 + 0x59c) & 0x1f);
      iVar4 = 4 << ((byte)*(undefined4 *)(param_1 + 0x598) & 0x1f);
      fprintf(DAT_10035734," forward vector range: %d...%d.5 / %d...%d.5\n",-iVar4,iVar4 + -1,-iVar8
              ,iVar8 + -1);
    }
    if (*(int *)(param_1 + 0x5bc) == 3) {
      fprintf(DAT_10035734," backward search window: %d...%d / %d...%d\n",-local_1c,local_1c,
              -local_20,local_20);
      iVar8 = 4 << ((byte)*(undefined4 *)(param_1 + 0x5a4) & 0x1f);
      iVar4 = 4 << ((byte)*(undefined4 *)(param_1 + 0x5a0) & 0x1f);
      fprintf(DAT_10035734," backward vector range: %d...%d.5 / %d...%d.5\n",-iVar4,iVar4 + -1,
              -iVar8,iVar8 + -1);
    }
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar7 = 2;
    if (*(int *)(param_1 + 0x588) != 0) {
      uVar7 = 1;
    }
    *(undefined4 *)(param_1 + 0x590) = uVar7;
    *(int *)(param_1 + 0x5a8) = (4 << ((byte)*(undefined4 *)(param_1 + 0x598) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5ac) = (4 << ((byte)*(undefined4 *)(param_1 + 0x59c) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5b0) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a0) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5b4) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a4) & 0x1f)) + -1;
    iVar8 = FUN_10003fc4(param_1,local_4c,*(int *)(param_1 + 0x6a4));
    if (iVar8 == 0) {
      return 2;
    }
    iVar8 = FUN_1001e7e0(param_1);
    if (iVar8 == 0) {
      return 2;
    }
    if (DAT_10035734 != (FILE *)0x0) {
      FUN_10026174(param_1,(int *)(param_1 + 0x670),local_48);
      FUN_100265b4(param_1);
    }
    uVar7 = 1;
    if (*(int *)(param_1 + 0x588) != 0) {
      uVar7 = 2;
    }
    *(undefined4 *)(param_1 + 0x590) = uVar7;
    if (*(int *)(param_1 + 0x5bc) == 1) {
      *(undefined4 *)(param_1 + 0x5bc) = 2;
      *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x5a4) = 0xf;
      *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0x5a0) = 0xf;
    }
    *(int *)(param_1 + 0x5a8) = (4 << ((byte)*(undefined4 *)(param_1 + 0x598) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5ac) = (4 << ((byte)*(undefined4 *)(param_1 + 0x59c) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5b0) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a0) & 0x1f)) + -1;
    *(int *)(param_1 + 0x5b4) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a4) & 0x1f)) + -1;
    iVar8 = FUN_10003fc4(param_1,local_4c,*(int *)(param_1 + 0x6a4));
    if (iVar8 == 0) {
      return 2;
    }
    iVar8 = FUN_1001e7e0(param_1);
    goto joined_r0x10018c18;
  }
  *(undefined4 *)(param_1 + 0x590) = 3;
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x58c) = 1;
    if (*(int *)(param_1 + 0x2c) == 2) {
      uVar9 = *(uint *)(param_1 + 0x5dc) & 3;
      if (uVar9 == 1) {
LAB_10018b64:
        *(undefined4 *)(param_1 + 0x588) = 0;
        *(undefined4 *)(param_1 + 0x584) = 0;
      }
      else {
        if (uVar9 == 0) {
          *(undefined4 *)(param_1 + 0x588) = 1;
        }
        else {
          if (uVar9 != 2) {
            if (uVar9 == 3) goto LAB_10018b40;
            goto LAB_10018b90;
          }
LAB_10018b7c:
          *(undefined4 *)(param_1 + 0x588) = 0;
        }
LAB_10018b86:
        *(undefined4 *)(param_1 + 0x584) = 1;
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x5dc) & 3;
      if (uVar9 == 1) {
        *(undefined4 *)(param_1 + 0x588) = 1;
        goto LAB_10018b86;
      }
      if (uVar9 == 0) {
LAB_10018b40:
        *(undefined4 *)(param_1 + 0x588) = 1;
        *(undefined4 *)(param_1 + 0x584) = 0;
      }
      else {
        if (uVar9 == 2) goto LAB_10018b64;
        if (uVar9 == 3) goto LAB_10018b7c;
      }
    }
  }
LAB_10018b90:
  *(int *)(param_1 + 0x5a8) = (4 << ((byte)*(undefined4 *)(param_1 + 0x598) & 0x1f)) + -1;
  *(int *)(param_1 + 0x5ac) = (4 << ((byte)*(undefined4 *)(param_1 + 0x59c) & 0x1f)) + -1;
  *(int *)(param_1 + 0x5b0) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a0) & 0x1f)) + -1;
  *(int *)(param_1 + 0x5b4) = (4 << ((byte)*(undefined4 *)(param_1 + 0x5a4) & 0x1f)) + -1;
  iVar8 = FUN_10003fc4(param_1,local_4c,*(int *)(param_1 + 0x6a4));
  if (iVar8 == 0) {
    return 2;
  }
  iVar8 = FUN_1001e7e0(param_1);
joined_r0x10018c18:
  if (iVar8 == 0) {
    return 2;
  }
  if (DAT_10035734 != (FILE *)0x0) {
    FUN_10026174(param_1,(int *)(param_1 + 0x670),local_48);
    FUN_100265b4(param_1);
  }
  FUN_10016674(param_1);
  *(int *)(param_1 + 0x5d4) = *(int *)(param_1 + 0x5d4) + 1;
  *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x580) + 1;
  return 0;
}


