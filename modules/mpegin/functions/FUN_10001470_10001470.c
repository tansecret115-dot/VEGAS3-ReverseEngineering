/* Module: mpegin.dll
   Function: FUN_10001470
   Address: 10001470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x100015f6) */
/* WARNING: Removing unreachable block (ram,0x100015df) */
/* WARNING: Removing unreachable block (ram,0x100016b0) */
/* WARNING: Removing unreachable block (ram,0x100016c7) */
/* WARNING: Removing unreachable block (ram,0x1000173e) */
/* WARNING: Removing unreachable block (ram,0x10001755) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10001470(int param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int local_24;
  ulonglong local_10;
  
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 0xffffffff;
  }
  if (param_3 < *(uint *)(param_1 + 0x84)) {
    local_10 = (ulonglong)param_3;
    *(uint *)(*(int *)(param_1 + 0x12e54) + 0x60) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
    dVar2 = (double)*(longlong *)(param_1 + 0x4d24) +
            (double)local_10 * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
    lVar7 = *(longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
    lVar6 = __ftol();
    lVar6 = lVar6 + lVar7;
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar6,
                 (int)((ulonglong)lVar6 >> 0x20),0);
    iVar3 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar3 + 200) = 0;
    *(undefined4 *)(iVar3 + 0xcc) = 0xbff00000;
    iVar3 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
    iVar3 = FUN_100013a0(param_1);
    while (iVar3 != 0) {
      plVar1 = (longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
      lVar7 = *plVar1;
      if (lVar6 <= lVar7) {
        FUN_10007e90(param_1,(byte *)s_Could_not_get_an_audio_frame_10018104);
        return 0xffffffff;
      }
      lVar6 = lVar6 + -0x200000;
      if (lVar6 < lVar7) {
        lVar6 = *plVar1;
      }
      FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar6,
                   (int)((ulonglong)lVar6 >> 0x20),0);
      iVar3 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0xbff00000;
      iVar3 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar3 + 0xd8) = 0;
      *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
      iVar3 = FUN_100013a0(param_1);
    }
    local_24 = 0;
    while ((iVar3 = *(int *)(param_1 + 0x12e54), *(double *)(iVar3 + 0xd0) < _DAT_10016110 ||
           (dVar2 < *(double *)(iVar3 + 0xd0)))) {
      local_24 = local_24 + 1;
      if (dVar2 < *(double *)(iVar3 + 0xd0)) {
        lVar7 = *(longlong *)(iVar3 + 0xf8);
        if (lVar6 <= lVar7) {
          FUN_10007e90(param_1,(byte *)s_Could_not_find_a_PTS_before_the_s_10018084);
          return 0xffffffff;
        }
        lVar6 = lVar6 + -0x80000;
        if (lVar6 < lVar7) {
          lVar6 = *(longlong *)(iVar3 + 0xf8);
        }
        FUN_10005520((int *)(iVar3 + 0x200),(uint)lVar6,(int)((ulonglong)lVar6 >> 0x20),0);
        iVar3 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar3 + 200) = 0;
        local_24 = 0;
        *(undefined4 *)(iVar3 + 0xcc) = 0xbff00000;
        iVar3 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar3 + 0xd8) = 0;
        *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
      }
      iVar3 = FUN_100013a0(param_1);
      while (iVar3 != 0) {
        plVar1 = (longlong *)(*(int *)(param_1 + 0x12e54) + 0xf8);
        lVar7 = *plVar1;
        if (lVar6 <= lVar7) {
          FUN_10007e90(param_1,(byte *)s_Could_not_find_a_PTS_before_the_s_10018054);
          return 0xffffffff;
        }
        lVar6 = lVar6 + -0x80000;
        if (lVar6 < lVar7) {
          lVar6 = *plVar1;
        }
        FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar6,
                     (int)((ulonglong)lVar6 >> 0x20),0);
        iVar3 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar3 + 200) = 0;
        local_24 = 0;
        *(undefined4 *)(iVar3 + 0xcc) = 0xbff00000;
        iVar3 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar3 + 0xd8) = 0;
        *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
        iVar3 = FUN_100013a0(param_1);
      }
    }
    lVar7 = __ftol();
    iVar3 = *(int *)(param_1 + 0xcb0);
    for (iVar4 = (int)lVar7 - iVar3; -1 < iVar4; iVar4 = iVar4 - iVar3) {
      iVar5 = FUN_100013a0(param_1);
      if (iVar5 != 0) {
        FUN_10007e90(param_1,(byte *)s_Could_not_find_the_next_audio_he_100180dc);
        return 0xffffffff;
      }
      local_24 = local_24 + 1;
    }
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar6,
                 (int)((ulonglong)lVar6 >> 0x20),0);
    iVar3 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar3 + 200) = 0;
    *(undefined4 *)(iVar3 + 0xcc) = 0xbff00000;
    iVar3 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
    do {
      local_24 = local_24 + -1;
      if (local_24 < 1) {
        if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x308) == 2) {
          *(double *)(*(int *)(param_1 + 0x12e54) + 0xb8) = dVar2;
          iVar3 = *(int *)(param_1 + 0x12e54);
          *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(iVar3 + 0x298);
          *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(iVar3 + 0x29c);
        }
        return 0;
      }
      iVar3 = FUN_100013a0(param_1);
    } while (iVar3 == 0);
    FUN_10007e90(param_1,(byte *)s_Could_not_find_the_next_audio_he_100180b4);
    return 0xffffffff;
  }
  FUN_10007e90(param_1,(byte *)s_Requested_sample___u__is_greater_10018124);
  return 0xffffffff;
}


