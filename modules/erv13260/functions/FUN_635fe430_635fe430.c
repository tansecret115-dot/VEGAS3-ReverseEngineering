/* Module: erv13260.dll
   Function: FUN_635fe430
   Address: 635fe430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_635fe430(void)

{
  float10 fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  float10 fVar8;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 extraout_ST1_03;
  float10 fVar9;
  int local_14;
  int *local_10;
  undefined8 *local_c;
  uint local_8;
  
  local_8 = 1;
  do {
    local_10 = &DAT_63606718;
    iVar6 = local_8 * 0x600;
    local_c = &DAT_63606818;
    do {
      local_14 = 8;
      do {
        iVar5 = *local_10;
        if ((local_8 & 1) == 0) {
          iVar3 = ftol();
          *(int *)((int)&DAT_63606828 + iVar6 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63606928 + iVar5 * 4) = -iVar3;
          iVar3 = ftol();
          fVar7 = (float10)_DAT_63604358;
          fVar8 = (float10)_DAT_63604380;
          *(int *)(iVar6 + 0x63606a28 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63606b28 + iVar5 * 4) = -iVar3;
          if (extraout_ST1_02 <= fVar7) {
            fVar7 = (float10)_DAT_63604368 - fVar8 / extraout_ST0_00;
          }
          else {
            fVar7 = fVar8 / extraout_ST0_00 - (float10)_DAT_63604368;
          }
          *(float *)(&DAT_63606d28 + iVar5 * 4 + iVar6) = (float)fVar7;
          fVar9 = extraout_ST0_00;
          iVar4 = ftol();
          fVar7 = (float10)_DAT_63604358;
          *(int *)(iVar5 * 4 + 0x63617228 + iVar6) = iVar4;
          *(int *)(iVar6 + 0x63617328 + iVar5 * 4) = -iVar4;
          *(int *)(iVar6 + 0x63617428 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63617528 + iVar5 * 4) = -iVar3;
          fVar8 = extraout_ST1_03;
          if (fVar9 <= fVar7) {
            fVar7 = (extraout_ST0_01 - (float10)_DAT_63604380) / extraout_ST1_03;
            goto LAB_635fe663;
          }
          fVar7 = ((float10)_DAT_63604380 - extraout_ST0_01) / extraout_ST1_03 -
                  (float10)_DAT_63604368;
        }
        else {
          iVar3 = ftol();
          *(int *)((int)&DAT_63606828 + iVar6 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63606928 + iVar5 * 4) = -iVar3;
          iVar3 = ftol();
          fVar7 = (float10)_DAT_63604358;
          *(int *)(iVar6 + 0x63606a28 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63606b28 + iVar5 * 4) = -iVar3;
          dVar2 = _DAT_63604368;
          if (fVar7 < extraout_ST1) {
            dVar2 = _DAT_63604360;
          }
          *(float *)(&DAT_63606d28 + iVar5 * 4 + iVar6) = (float)dVar2;
          iVar3 = ftol();
          *(int *)(iVar5 * 4 + 0x63617228 + iVar6) = iVar3;
          *(int *)(iVar6 + 0x63617328 + iVar5 * 4) = -iVar3;
          fVar9 = extraout_ST1_00;
          iVar3 = ftol();
          fVar1 = (float10)_DAT_63604358;
          *(int *)(iVar6 + 0x63617428 + iVar5 * 4) = iVar3;
          *(int *)(iVar6 + 0x63617528 + iVar5 * 4) = -iVar3;
          fVar7 = extraout_ST0 / extraout_ST1_01;
          fVar8 = extraout_ST1_01;
          if (fVar9 <= fVar1) {
LAB_635fe663:
            fVar7 = fVar7 - (float10)_DAT_63604360;
          }
          else {
            fVar7 = -fVar7 - (float10)_DAT_63604368;
          }
        }
        iVar3 = iVar5 * 4;
        *(float *)(iVar6 + 0x63617728 + iVar3) = (float)fVar7;
        *(float *)(s_Unable_to_load_library_63606c28 + iVar6 + iVar5 * 4) = (float)(fVar9 / fVar8);
        *(float *)(iVar5 * 4 + 0x63617628 + iVar6) = (float)(fVar9 / fVar8);
        if (local_8 == 1) {
          if (fVar9 <= (float10)_DAT_63604358) {
            *(undefined4 *)(&DAT_63606d28 + iVar3) = 0xffffffff;
            (&DAT_63623228)[iVar5] = 1;
          }
          else {
            *(undefined4 *)(&DAT_63606d28 + iVar3) = 1;
            (&DAT_63623228)[iVar5] = 0xffffffff;
          }
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    } while ((int)local_c < 0x63606a18);
    iVar5 = ftol();
    *(int *)(&DAT_63606828 + local_8 * 0xc0) = iVar5;
    *(int *)(iVar6 + 0x63606928) = -iVar5;
    iVar5 = ftol();
    *(int *)(iVar6 + 0x63606a28) = iVar5;
    *(undefined4 *)(&DAT_63606d28 + iVar6) = 0;
    *(int *)(iVar6 + 0x63606b28) = -iVar5;
    local_8 = local_8 + 1;
    *(float *)(s_Unable_to_load_library_63606c28 + iVar6) =
         (float)((float10)DAT_63606818 * (float10)_DAT_63604340 * (float10)_DAT_63604390);
    if (0x1f < (int)local_8) {
      return;
    }
  } while( true );
}


