/* Module: mpegin.dll
   Function: FUN_10001f30
   Address: 10001f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001f30(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  bVar2 = true;
  uVar3 = (**(code **)(param_1 + 0x12e4c))(4800000);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 4) = uVar3;
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x12e54) + 4);
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 1;
    return;
  }
  for (iVar5 = 1200000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x23c) = 1;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_10007d70(param_1,&DAT_10018050);
    FUN_10007d70(param_1,(byte *)s_Searching_for_audio_samples_____10018030);
  }
  iVar5 = *(int *)(param_1 + 0x12e54);
  FUN_10005520((int *)(iVar5 + 0x200),*(uint *)(iVar5 + 0xf8),*(int *)(iVar5 + 0xfc),0);
  *(undefined4 *)(param_1 + 0x4d24) = 0;
  *(undefined4 *)(param_1 + 0x4d28) = 0;
  iVar5 = FUN_10004070(param_1);
  if (iVar5 == 0) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x12e54);
      if (((*(int *)(iVar4 + 0x10c) != 0) || (*(int *)(iVar4 + 0x240) != 0)) ||
         (*(int *)(iVar4 + 0x244) != 0)) break;
      if ((*(int *)(param_1 + 0x4d24) == 0 && *(int *)(param_1 + 0x4d28) == 0) &&
         (_DAT_10016110 < *(double *)(iVar4 + 0xd0))) {
        FUN_1000dfdc(*(double *)(iVar4 + 0xd0));
        lVar8 = __ftol();
        *(longlong *)(param_1 + 0x4d24) = lVar8;
      }
      if (bVar2) {
        bVar2 = false;
        *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0) =
             _DAT_10016108 / (double)*(uint *)(param_1 + 0x8c);
        *(double *)(*(int *)(param_1 + 0x12e54) + 0xe8) =
             (double)*(int *)(param_1 + 0xcb0) * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
      }
      iVar4 = *(int *)(param_1 + 0x12e54);
      iVar1 = *(int *)(iVar4 + 4);
      *(undefined4 *)(iVar1 + iVar5) = *(undefined4 *)(iVar4 + 0xf0);
      *(undefined4 *)(iVar1 + 4 + iVar5) = *(undefined4 *)(iVar4 + 0xf4);
      iVar4 = *(int *)(param_1 + 0x12e54);
      if (*(int *)(iVar4 + 0x22c) == 0) {
        *(undefined4 *)(*(int *)(iVar4 + 4) + 8 + iVar5) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(iVar4 + 4) + 8 + iVar5) = *(undefined4 *)(iVar4 + 0x108);
      }
      iVar5 = iVar5 + 0x10;
      if (iVar5 == 4800000) {
        FUN_10007e90(param_1,(byte *)s_Maximum_sample_frames_exceeded_1001818c);
        return;
      }
      FUN_10002180(param_1);
      uVar6 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0xcb0);
      *(uint *)(param_1 + 0x84) = uVar6;
      if ((*(int *)(param_1 + 0x14) == 0) && (uVar6 % 250000 == 0)) {
        FUN_10007d70(param_1,(byte *)s__8d_samples_found_100181ac);
      }
      iVar4 = FUN_10004070(param_1);
    } while (iVar4 == 0);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x23c) = 0;
  return;
}


