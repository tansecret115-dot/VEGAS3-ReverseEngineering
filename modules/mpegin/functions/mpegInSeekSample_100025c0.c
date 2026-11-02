/* Module: mpegin.dll
   Function: mpegInSeekSample
   Address: 100025c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x100027c5) */
/* WARNING: Removing unreachable block (ram,0x100027ae) */
/* WARNING: Removing unreachable block (ram,0x10002895) */
/* WARNING: Removing unreachable block (ram,0x100028ac) */
/* WARNING: Removing unreachable block (ram,0x10002939) */
/* WARNING: Removing unreachable block (ram,0x10002950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl mpegInSeekSample(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  int local_2c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined8 local_10;
  
                    /* 0x25c0  6  mpegInSeekSample */
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4e58) == 4) {
    uVar3 = FUN_1000ad40(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x4e58) == 5) {
    uVar3 = FUN_10001470(param_1,param_2,param_3);
    return uVar3;
  }
  if (*(uint *)(param_1 + 0x84) <= param_3) {
    FUN_10007e90(param_1,(byte *)s_Requested_sample___u__is_greater_10018124);
    return 0xffffffff;
  }
  *(uint *)(*(int *)(param_1 + 0x12e54) + 0x60) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x238) = 1;
    iVar8 = *(int *)(param_1 + 0x12e54);
    iVar4 = (*(uint *)(iVar8 + 0x60) / *(uint *)(param_1 + 0xcb0)) * 0x10;
    puVar2 = (uint *)(*(int *)(iVar8 + 4) + iVar4);
    FUN_10005520((int *)(iVar8 + 0x200),*puVar2,puVar2[1],*(int *)(*(int *)(iVar8 + 4) + 8 + iVar4))
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x238) = 0;
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 0xb8) = 0;
    *(undefined4 *)(iVar8 + 0xbc) = 0;
    iVar8 = FUN_10001e20(param_1);
    if (iVar8 != 0) {
      FUN_10007e90(param_1,(byte *)s_Could_not_find_the_next_audio_he_100182b4);
      return 0xffffffff;
    }
    iVar8 = *(int *)(param_1 + 0x12e54);
    if (*(double *)(iVar8 + 0xb8) == _DAT_10016110) {
      local_10 = (double)(ulonglong)param_3;
      *(double *)(iVar8 + 0xb8) =
           (double)*(longlong *)(param_1 + 0x4d24) +
           (double)(longlong)local_10 * *(double *)(iVar8 + 0xe0);
    }
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 0xc0) = *(undefined4 *)(*(int *)(iVar8 + 4) + iVar4);
    *(undefined4 *)(iVar8 + 0xc4) = *(undefined4 *)(*(int *)(iVar8 + 4) + 4 + iVar4);
    iVar8 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar8 + 0x308) == 2) {
      return 0;
    }
  }
  else {
    local_10 = (double)(ulonglong)param_3;
    local_10 = (double)*(longlong *)(param_1 + 0x4d24) +
               (double)(longlong)local_10 * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
    lVar10 = *(longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
    lVar9 = __ftol();
    lVar9 = lVar9 + lVar10;
    iVar8 = (int)((ulonglong)lVar9 >> 0x20);
    if ((iVar8 == 0 || lVar9 < 0) && (lVar9 < 0)) {
      FUN_10007e90(param_1,(byte *)s_SeekSamples____file_pos_<__0_100182e4);
      return 0xffffffff;
    }
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar9,iVar8,0);
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 200) = 0;
    *(undefined4 *)(iVar8 + 0xcc) = 0xbff00000;
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 0xd8) = 0;
    *(undefined4 *)(iVar8 + 0xdc) = 0xbff00000;
    iVar8 = FUN_10001e20(param_1);
    while (iVar8 != 0) {
      plVar1 = (longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
      lVar10 = *plVar1;
      if (lVar9 <= lVar10) {
        FUN_10007e90(param_1,(byte *)s_Could_not_get_an_audio_frame_10018104);
        return 0xffffffff;
      }
      lVar9 = lVar9 + -0x200000;
      if (lVar9 < lVar10) {
        lVar9 = *plVar1;
      }
      FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar9,
                   (int)((ulonglong)lVar9 >> 0x20),0);
      iVar8 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar8 + 200) = 0;
      *(undefined4 *)(iVar8 + 0xcc) = 0xbff00000;
      iVar8 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar8 + 0xd8) = 0;
      *(undefined4 *)(iVar8 + 0xdc) = 0xbff00000;
      iVar8 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar8 + 0xd0) = 0;
      *(undefined4 *)(iVar8 + 0xd4) = 0xbff00000;
      iVar8 = FUN_10001e20(param_1);
    }
    local_2c = 1;
    while ((iVar8 = *(int *)(param_1 + 0x12e54), *(double *)(iVar8 + 0xd0) < _DAT_10016110 ||
           (local_10 < *(double *)(iVar8 + 0xd0)))) {
      local_2c = local_2c + 1;
      if (local_10 < *(double *)(iVar8 + 0xd0)) {
        lVar10 = *(longlong *)(iVar8 + 0xf8);
        if (lVar9 <= lVar10) {
          FUN_10007e90(param_1,(byte *)s_Could_not_find_a_PTS_before_the_s_10018084);
          return 0xffffffff;
        }
        lVar9 = lVar9 + -0x80000;
        if (lVar9 < lVar10) {
          lVar9 = *(longlong *)(iVar8 + 0xf8);
        }
        FUN_10005520((int *)(iVar8 + 0x200),(uint)lVar9,(int)((ulonglong)lVar9 >> 0x20),0);
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 200) = 0;
        local_2c = 1;
        *(undefined4 *)(iVar8 + 0xcc) = 0xbff00000;
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 0xd8) = 0;
        *(undefined4 *)(iVar8 + 0xdc) = 0xbff00000;
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 0xd0) = 0;
        *(undefined4 *)(iVar8 + 0xd4) = 0xbff00000;
      }
      iVar8 = FUN_10001e20(param_1);
      while (iVar8 != 0) {
        plVar1 = (longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
        lVar10 = *plVar1;
        if (lVar9 <= lVar10) {
          FUN_10007e90(param_1,(byte *)s_Could_not_find_a_PTS_before_the_s_10018054);
          return 0xffffffff;
        }
        lVar9 = lVar9 + -0x80000;
        if (lVar9 < lVar10) {
          lVar9 = *plVar1;
        }
        FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar9,
                     (int)((ulonglong)lVar9 >> 0x20),0);
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 200) = 0;
        local_2c = 1;
        *(undefined4 *)(iVar8 + 0xcc) = 0xbff00000;
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 0xd8) = 0;
        *(undefined4 *)(iVar8 + 0xdc) = 0xbff00000;
        iVar8 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar8 + 0xd0) = 0;
        *(undefined4 *)(iVar8 + 0xd4) = 0xbff00000;
        iVar8 = FUN_10001e20(param_1);
      }
    }
    lVar10 = __ftol();
    iVar8 = *(int *)(param_1 + 0xcb0);
    for (iVar4 = (int)lVar10 - iVar8; -1 < iVar4; iVar4 = iVar4 - iVar8) {
      iVar5 = FUN_10001e20(param_1);
      if (iVar5 != 0) {
        FUN_10007e90(param_1,(byte *)s_Could_not_find_the_next_audio_he_100180dc);
        return 0xffffffff;
      }
      local_2c = local_2c + 1;
    }
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar9,
                 (int)((ulonglong)lVar9 >> 0x20),0);
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 200) = 0;
    *(undefined4 *)(iVar8 + 0xcc) = 0xbff00000;
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 0xd8) = 0;
    *(undefined4 *)(iVar8 + 0xdc) = 0xbff00000;
    for (; 0 < local_2c; local_2c = local_2c + -1) {
      iVar8 = FUN_10001e20(param_1);
      if (iVar8 != 0) {
        FUN_10007e90(param_1,(byte *)s_Could_not_find_the_next_audio_he_100180b4);
        return 0xffffffff;
      }
    }
    iVar8 = *(int *)(param_1 + 0x12e54);
    local_10._4_4_ = (undefined4)((ulonglong)local_10 >> 0x20);
    *(undefined4 *)(iVar8 + 0xb8) = (undefined4)local_10;
    *(undefined4 *)(iVar8 + 0xbc) = local_10._4_4_;
    iVar8 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar8 + 0xc0) = *(undefined4 *)(iVar8 + 0x298);
    *(undefined4 *)(iVar8 + 0xc4) = *(undefined4 *)(iVar8 + 0x29c);
    iVar8 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar8 + 0x308) == 2) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x98) == 3) {
    FUN_10007e90(param_1,(byte *)s_MPEG_Layer_3_decoding_not_suppor_10018274);
    return 0xffffffff;
  }
  (**(code **)(*(int *)(iVar8 + 0x30c) + 0x14))(*(int *)(iVar8 + 0x30c),0,0x10000,0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x354) =
       *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x5c);
  *(int *)(*(int *)(param_1 + 0x12e54) + 0x358) =
       *(int *)(param_1 + 0xcb0) * *(int *)(param_1 + 0xa4) * 2;
  iVar8 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
  (**(code **)(iVar8 + 0x14))(iVar8,0,0x10001,*(int *)(param_1 + 0x12e54) + 0x354,8);
  iVar8 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar8 + 0x208) == *(int *)(iVar8 + 0x6c)) {
    uStack_18 = (undefined1)((uint)*(int *)(iVar8 + 0x208) >> 0x18);
    uStack_17 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x208) >> 0x10);
    uStack_16 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x208) >> 8);
    uStack_15 = *(undefined1 *)(iVar8 + 0x208);
    iVar8 = *(int *)(iVar8 + 0x30c);
    uVar11 = 4;
  }
  else {
    uStack_18 = (undefined1)((uint)*(int *)(iVar8 + 0x6c) >> 0x18);
    uStack_17 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x6c) >> 0x10);
    uStack_16 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x6c) >> 8);
    uStack_15 = *(undefined1 *)(iVar8 + 0x6c);
    uStack_14 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x208) >> 0x18);
    uStack_13 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x208) >> 0x10);
    uStack_12 = (undefined1)((uint)*(undefined4 *)(iVar8 + 0x208) >> 8);
    uStack_11 = *(undefined1 *)(iVar8 + 0x208);
    iVar8 = *(int *)(iVar8 + 0x30c);
    uVar11 = 8;
  }
  (**(code **)(iVar8 + 0xc))(iVar8,&uStack_18,uVar11);
  uVar3 = param_3 % *(uint *)(param_1 + 0xcb0);
  iVar8 = 0;
  if (uVar3 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 100) = 0;
  }
  else {
    if (0 < (int)(*(uint *)(param_1 + 0xcb0) * *(int *)(param_1 + 0xa4))) {
      do {
        iVar4 = *(int *)(param_1 + 0x12e54);
        if ((*(int *)(iVar4 + 0x240) != 0) || (*(int *)(iVar4 + 0x244) != 0)) break;
        if (*(uint *)(iVar4 + 0x210) < *(uint *)(iVar4 + 0x20c)) {
          iVar5 = *(uint *)(iVar4 + 0x210) - *(int *)(iVar4 + 0x204);
        }
        else {
          iVar5 = *(uint *)(iVar4 + 0x20c) - *(int *)(iVar4 + 0x204);
        }
        if (iVar5 < 1) {
          FUN_10007e90(param_1,(byte *)s_SeekSample____bytes_to_process_<_100181e8);
          return 0xffffffff;
        }
        *(undefined4 *)(iVar4 + 0x354) = *(undefined4 *)(iVar4 + 0x5c);
        *(int *)(*(int *)(param_1 + 0x12e54) + 0x358) =
             *(int *)(param_1 + 0xcb0) * *(int *)(param_1 + 0xa4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
        (**(code **)(iVar4 + 0x14))(iVar4,0,0x10001,*(int *)(param_1 + 0x12e54) + 0x354,8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
        uVar6 = (**(code **)(iVar4 + 0xc))
                          (iVar4,*(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x204),iVar5);
        iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
        uVar7 = (**(code **)(iVar4 + 0x14))(iVar4,0,0x10003,0,0);
        iVar8 = iVar8 + *(int *)(*(int *)(param_1 + 0x12e54) + 0x358);
        iVar4 = FUN_10006340((int *)(*(int *)(param_1 + 0x12e54) + 0x200),uVar6);
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x240) != 0) {
LAB_10002f1e:
            FUN_10007e90(param_1,(byte *)s_Could_not_get_a_complete_audio_h_100181c0);
            return 0xffffffff;
          }
          if ((uVar7 & 1) == 0) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
            (**(code **)(iVar4 + 0xc))(iVar4,0,0);
            iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
            uVar6 = (**(code **)(iVar4 + 0x14))(iVar4,0,0x10003,0,0);
            if ((uVar6 & 1) == 0) goto LAB_10002f1e;
            iVar8 = iVar8 + *(int *)(*(int *)(param_1 + 0x12e54) + 0x358);
          }
        }
      } while (iVar8 < *(int *)(param_1 + 0xcb0) * *(int *)(param_1 + 0xa4));
    }
    *(uint *)(*(int *)(param_1 + 0x12e54) + 100) = *(int *)(param_1 + 0xcb0) - uVar3;
  }
  if (param_4 == 0) {
    return 0;
  }
  uVar3 = mpegInGetNextSample(param_1,param_2,param_4);
  return uVar3;
}


