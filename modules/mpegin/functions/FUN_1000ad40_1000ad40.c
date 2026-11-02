/* Module: mpegin.dll
   Function: FUN_1000ad40
   Address: 1000ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x1000aee6) */
/* WARNING: Removing unreachable block (ram,0x1000ae86) */
/* WARNING: Removing unreachable block (ram,0x1000ae9d) */
/* WARNING: Removing unreachable block (ram,0x1000aefd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000ad40(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong local_10;
  
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x84) <= param_3) {
    FUN_10007e90(param_1,(byte *)s_Requested_sample___u__is_greater_10018124);
    return 0xffffffff;
  }
  local_10 = (ulonglong)param_3;
  *(uint *)(*(int *)(param_1 + 0x12e54) + 0x60) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
  iVar8 = *(int *)(param_1 + 0x12e54);
  dVar4 = (double)*(longlong *)(param_1 + 0x4d24) + (double)local_10 * *(double *)(iVar8 + 0xe0);
  lVar9 = __ftol();
  lVar9 = lVar9 + *(longlong *)(iVar8 + 0xf8);
  *(undefined4 *)(iVar8 + 0x2d4) = 0;
  FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x200),(uint)lVar9,
               (int)((ulonglong)lVar9 >> 0x20),0);
  iVar8 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar8 + 0x2d4) == 0) {
    plVar1 = (longlong *)(iVar8 + 0xf8);
    while (*plVar1 < lVar9) {
      lVar9 = lVar9 + -0x200000;
      if (lVar9 < *plVar1) {
        lVar9 = *plVar1;
      }
    }
    FUN_10007e90(param_1,(byte *)s_Could_not_get_an_audio_frame_10018104);
    return 0xffffffff;
  }
  *(double *)(iVar8 + 0xd0) = (double)*(longlong *)(iVar8 + 600);
  iVar8 = *(int *)(param_1 + 0x12e54);
  dVar2 = *(double *)(iVar8 + 0xd0);
  while (dVar4 < dVar2) {
    lVar5 = *(longlong *)(iVar8 + 0xf8);
    if (lVar9 <= lVar5) {
      FUN_10007e90(param_1,(byte *)s_Could_not_find_a_PTS_before_the_s_10018084);
      return 0xffffffff;
    }
    lVar9 = lVar9 + -0x80000;
    if (lVar9 < lVar5) {
      lVar9 = *(longlong *)(iVar8 + 0xf8);
    }
    FUN_10005520((int *)(iVar8 + 0x200),(uint)lVar9,(int)((ulonglong)lVar9 >> 0x20),0);
    iVar8 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar8 + 0x2d4) == 0) {
      dVar2 = dVar4 + _DAT_10016150;
    }
    else {
      dVar2 = (double)*(longlong *)(iVar8 + 600);
    }
    *(double *)(iVar8 + 0xd0) = dVar2;
    iVar8 = *(int *)(param_1 + 0x12e54);
    dVar2 = *(double *)(iVar8 + 0xd0);
  }
  iVar8 = *(int *)(param_1 + 0x12e54);
  iVar3 = *(int *)(iVar8 + 0x2cc);
  if (4 < iVar3) {
    iVar7 = 0;
    if (iVar3 != 4 && -1 < iVar3 + -4) {
      do {
        FUN_10005910((int *)(iVar8 + 0x200),8);
        iVar8 = *(int *)(param_1 + 0x12e54);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar8 + 0x2cc) + -4);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2d0) = 0;
  }
  lVar9 = __ftol();
  iVar8 = (int)lVar9 * *(int *)(param_1 + 0xa4);
  while (((iVar8 != 0 && (iVar3 = *(int *)(param_1 + 0x12e54), *(int *)(iVar3 + 0x240) == 0)) &&
         (*(int *)(iVar3 + 0x244) == 0))) {
    FUN_10005910((int *)(iVar3 + 0x200),8);
    *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) =
         *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) + 1;
    if (iVar8 % *(int *)(param_1 + 0xcac) == 0) {
      *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) =
           *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) + -1;
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2d0) = 0;
    }
    iVar8 = iVar8 + -1;
  }
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x2b8) != 2) {
    if (param_4 != 0) {
      uVar6 = mpegInGetNextSample(param_1,param_2,param_4);
      return uVar6;
    }
    return 0;
  }
  *(double *)(*(int *)(param_1 + 0x12e54) + 0xb8) = dVar4;
  iVar8 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(iVar8 + 0xc0) = *(undefined4 *)(iVar8 + 0x298);
  *(undefined4 *)(iVar8 + 0xc4) = *(undefined4 *)(iVar8 + 0x29c);
  return 0;
}


