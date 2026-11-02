/* Module: erv13260.dll
   Function: FUN_635f5dd0
   Address: 635f5dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_635f5dd0(int param_1,undefined4 param_2,float param_3,int param_4,undefined4 *param_5,
            int *param_6)

{
  float10 fVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 extraout_ST0;
  LARGE_INTEGER local_3c;
  LARGE_INTEGER local_34;
  LARGE_INTEGER local_2c;
  uint local_24;
  int iStack_20;
  int local_1c;
  int *local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_6;
  local_18 = *(int **)(param_4 + 0x14);
  local_c = *(int *)(param_4 + 0x1c);
  if ((*(int *)((int)param_6 + 0x56) != 0) || (local_8 = 0, *(int *)((int)param_6 + 0x52) != 0)) {
    local_8 = 1;
  }
  piVar4 = *(int **)(param_4 + 4);
  puVar7 = param_5;
  for (iVar6 = 0x83; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  *(undefined4 *)((int)param_6 + 0x67) = 0;
  *(undefined4 *)((int)param_6 + 99) = 0;
  local_10 = param_6[5];
  *(float *)((int)param_6 + 0x1cd3) = param_3;
  param_6 = piVar4;
  piVar4 = malloc(0xc);
  iStack_20 = 0;
  local_24 = *(uint *)(param_4 + 0xc);
  param_3 = (float)local_24 * _DAT_636041a0;
  local_14 = (float)local_10;
  iVar6 = ftol();
  fVar1 = (float10)_DAT_63604144;
  piVar3[0x73e] = iVar6;
  iStack_20 = *(int *)((int)piVar3 + 0x1d73) + *(int *)(param_4 + 0xc);
  *(int *)((int)piVar3 + 0x1d73) = iStack_20;
  if ((extraout_ST0 == fVar1) && (*(int *)((int)piVar3 + 0x1d6f) == 0)) {
    *param_5 = 1;
    free(piVar4);
    return 0;
  }
  local_1c = *(int *)((int)piVar3 + 0x1d6b);
  if (local_1c != 0) {
    iVar6 = iStack_20;
    if (*(int *)((int)piVar3 + 0x1d6f) != 0) {
      iVar6 = local_1c;
    }
    param_3 = (float)iVar6 * _DAT_636041a0;
    iVar6 = ftol();
    piVar3[0x73e] = iVar6;
  }
  if ((*(int *)(param_4 + 4) == 0) && (*(int *)((int)piVar3 + 0x1d6f) != 1)) {
    if (*(int *)(param_4 + 8) != 0) {
      *(undefined4 *)((int)piVar3 + 99) = 1;
      goto LAB_635f5f15;
    }
    *(undefined4 *)((int)piVar3 + 0x1d67) = 1;
  }
  else {
LAB_635f5f15:
    *(undefined4 *)((int)piVar3 + 0x1d67) = 0;
  }
  QueryPerformanceCounter(&local_34);
  *(float *)((int)piVar3 + 0x1d77) = param_3 + *(float *)((int)piVar3 + 0x1d77);
  piVar3[0x725] = piVar3[0x725] + *(int *)(param_4 + 0xc);
  if (*(int *)((int)piVar3 + 0x1d6f) == 1) {
    param_6 = (int *)0x1;
  }
  puVar7 = (undefined4 *)((int)piVar3 + 0x1ccb);
  *(undefined1 *)((int)piVar3 + 0x62) = 1;
  uVar5 = *puVar7;
  *puVar7 = *(undefined4 *)((int)piVar3 + 0x1ccf);
  *(undefined4 *)((int)piVar3 + 0x1ccf) = uVar5;
  FUN_635f7bf0(param_1,piVar4,piVar3[3]);
  *(int *)((int)piVar3 + 0x23af) = *(int *)((int)piVar3 + 0x23af) + 1;
  *(int *)((int)piVar3 + 0x23b7) = *(int *)((int)piVar3 + 0x23b7) + 1;
  if (*(int *)(param_4 + 8) == 0) {
    if (*(int *)((int)piVar3 + 0x1d8f) == 0) {
      if (local_8 == 0) {
        if ((uint)piVar3[0x723] < (uint)piVar3[0x725]) {
          param_6 = (int *)0x1;
          *(undefined4 *)((int)piVar3 + 0x67) = 1;
        }
        else {
          *(undefined4 *)((int)piVar3 + 0x67) = 0;
        }
        if (param_6 == (int *)0x0) {
          iVar6 = FUN_635fbbd0(piVar4,*(uint *)((int)piVar3 + 0x1cc7),
                               *(int **)((int)piVar3 + 0x1ccf),*(byte *)(piVar3 + 0x754),
                               (uint)*(byte *)((int)piVar3 + 0x1d53),0,local_18,(int *)*puVar7,
                               (int *)&param_6,(byte *)(param_5 + 3),
                               (undefined4 *)((int)param_5 + 0xd),piVar3);
          if (iVar6 == 0) {
            *(undefined4 *)((int)piVar3 + 0x1d67) = 1;
          }
          else {
            *(undefined1 *)((int)piVar3 + 0x62) = 1;
            FUN_635fdd50(piVar4,puVar7,*(undefined4 *)((int)piVar3 + 0x1cc7),
                         (undefined4 *)((int)piVar3 + 0x1ccf),(int)piVar3);
            *param_5 = 1;
            param_5[2] = 0;
            *(undefined4 *)((int)piVar3 + 99) = 1;
            param_6 = (int *)0x0;
            *(undefined4 *)((int)piVar3 + 0x1d67) = 0;
            *(int *)((int)piVar3 + 0x5e) = *(int *)((int)piVar3 + 0x5e) + 1;
          }
        }
        if (param_6 == (int *)0x0) goto LAB_635f62e3;
        *(undefined1 *)((int)piVar3 + 0x62) = 0;
        iVar6 = FUN_635fc650(piVar4,*(byte *)((int)piVar3 + 0x1d53),(int *)*puVar7,
                             (byte *)(param_5 + 3),(uint *)((int)param_5 + 0xd),piVar3,
                             *(uint **)(param_4 + 0x20),&local_c);
        if (iVar6 == 0) {
          piVar3[0x725] = 0;
          *(undefined4 *)((int)piVar3 + 0x1d67) = 1;
        }
        else {
          *(undefined1 *)((int)piVar3 + 0x62) = 1;
          FUN_635fdd50(piVar4,puVar7,*(undefined4 *)((int)piVar3 + 0x1cc7),
                       (undefined4 *)((int)piVar3 + 0x1ccf),(int)piVar3);
          param_5[2] = 0;
          *param_5 = 1;
          *(undefined4 *)((int)piVar3 + 99) = 1;
          param_6 = (int *)0x0;
          *(undefined4 *)((int)piVar3 + 0x1d67) = 0;
        }
      }
      else {
        *(undefined1 *)((int)piVar3 + 0x62) = 0;
        bVar2 = false;
        if (*(int *)((int)piVar3 + 0x56) == 0) {
LAB_635f60a7:
          if (*(int *)((int)piVar3 + 0x52) != 0) {
            if (*(int *)((int)piVar3 + 0x1d73) <= *(int *)((int)piVar3 + 0x1d6b)) {
              iVar6 = *(int *)((int)piVar3 + 0x1d6f);
              goto joined_r0x635f60c2;
            }
            goto LAB_635f60c4;
          }
        }
        else {
          if (*(int *)((int)piVar3 + 0x31) == 0) {
            if (*(int *)((int)piVar3 + 0x56) == 0) goto LAB_635f60a7;
            iVar6 = ftol();
            if (*(int *)((int)piVar3 + 0x1d6b) - iVar6 < *(int *)((int)piVar3 + 0x1d73))
            goto LAB_635f60c4;
            iVar6 = *(int *)((int)piVar3 + 0x1d6f);
joined_r0x635f60c2:
            if (iVar6 == 0) goto LAB_635f60cb;
          }
LAB_635f60c4:
          bVar2 = true;
        }
LAB_635f60cb:
        if (!bVar2) {
          *(undefined1 *)((int)piVar3 + 0x62) = 1;
          FUN_635fdd50(piVar4,puVar7,*(undefined4 *)((int)piVar3 + 0x1cc7),
                       (undefined4 *)((int)piVar3 + 0x1ccf),(int)piVar3);
          param_5[2] = 0;
          *param_5 = 1;
          *(undefined4 *)((int)piVar3 + 99) = 1;
          param_6 = (int *)0x0;
          *(undefined4 *)((int)piVar3 + 0x1d67) = 0;
          goto LAB_635f62e3;
        }
        iVar6 = FUN_635f77e0(piVar4,(int *)*puVar7,(byte *)(param_5 + 3),
                             (uint *)((int)param_5 + 0xd),piVar3[0x73e],piVar3,
                             *(uint **)(param_4 + 0x20),&local_c);
        param_6 = (int *)0x1;
        if (iVar6 == 0) {
          piVar3[0x725] = 0;
        }
        else {
          *(undefined1 *)((int)piVar3 + 0x62) = 1;
          FUN_635fdd50(piVar4,puVar7,*(undefined4 *)((int)piVar3 + 0x1cc7),
                       (undefined4 *)((int)piVar3 + 0x1ccf),(int)piVar3);
          param_5[2] = 0;
          *param_5 = 1;
          *(undefined4 *)((int)piVar3 + 99) = 1;
          param_6 = (int *)0x0;
          *(undefined4 *)((int)piVar3 + 0x1d67) = 0;
        }
      }
    }
    else if (param_6 == (int *)0x0) {
      FUN_635fbbd0(piVar4,*(uint *)((int)piVar3 + 0x1cc7),*(int **)((int)piVar3 + 0x1ccf),
                   *(byte *)(piVar3 + 0x754),
                   CONCAT31((int3)((uint)*puVar7 >> 8),*(undefined1 *)((int)piVar3 + 0x1d53)),0,
                   local_18,(int *)*puVar7,(int *)&param_6,(byte *)(param_5 + 3),
                   (undefined4 *)((int)param_5 + 0xd),piVar3);
    }
    else {
      *(undefined1 *)((int)piVar3 + 0x62) = 0;
      FUN_635fc650(piVar4,*(byte *)((int)piVar3 + 0x1d53),(int *)*puVar7,(byte *)(param_5 + 3),
                   (uint *)((int)param_5 + 0xd),piVar3,*(uint **)(param_4 + 0x20),&local_c);
    }
  }
  else {
    *(undefined1 *)((int)piVar3 + 0x62) = 1;
    FUN_635fdd50(piVar4,puVar7,*(undefined4 *)((int)piVar3 + 0x1cc7),
                 (undefined4 *)((int)piVar3 + 0x1ccf),(int)piVar3);
    param_6 = (int *)0x0;
    param_5[2] = 0;
    *param_5 = 1;
  }
  *(int *)((int)piVar3 + 0x5e) = *(int *)((int)piVar3 + 0x5e) + 1;
LAB_635f62e3:
  param_5[2] = param_6;
  if ((*(int *)(param_4 + 0x10) != 0) ||
     (((piVar3[0x724] != 0 && (local_8 != 0)) && (*(char *)(param_5 + 3) != '\0')))) {
    FUN_635fe320((byte *)(param_5 + 3),(int *)((int)param_5 + 0xd),*(uint *)((int)piVar3 + 0x1d63),
                 (int *)((int)piVar3 + 0x1cd3));
  }
  param_5[1] = *(undefined4 *)((int)piVar3 + 0x1cd7);
  *(undefined4 *)((int)piVar3 + 0x1cd7) = 0;
  FUN_635fb5e0((int *)piVar3[0x74d]);
  FUN_635fb510((int *)piVar3[0x74e],(int *)piVar3[0x74d]);
  if (((local_8 == 0) && (*(int *)((int)piVar3 + 0x1d83) == 0)) &&
     ((*(int *)((int)piVar3 + 0x1d8f) == 0 &&
      ((*(int *)((int)piVar3 + 0x1d55) == 0 && (*(int *)((int)piVar3 + 0x1d6f) == 0)))))) {
    FUN_635f6f80(*(uint *)(piVar3[0x74d] + 0x20),(byte *)(piVar3 + 0x754),
                 (byte *)((int)piVar3 + 0x1d53),param_3,piVar3[7],param_5[2],*(byte *)(param_5 + 3),
                 (int)piVar3);
  }
  else if ((*(int *)((int)piVar3 + 0x52) == 0) &&
          ((local_8 == 0 || (*(int *)((int)piVar3 + 0x31) != 0)))) {
    *(undefined4 *)((int)piVar3 + 0x1d6b) = *(undefined4 *)((int)piVar3 + 0x4a);
  }
  QueryPerformanceCounter(&local_2c);
  QueryPerformanceFrequency(&local_3c);
  local_24 = local_3c.s.LowPart;
  iStack_20 = 0;
  uVar5 = ftol();
  if (*(int *)((int)piVar3 + 99) == 0) {
    if (*(int *)((int)piVar3 + 0x1d67) == 1) {
      *(undefined4 *)((int)piVar3 + 0x1d7b) = uVar5;
    }
    *(undefined4 *)((int)piVar3 + 0x1d73) = 0;
  }
  else {
    *(undefined4 *)((int)piVar3 + 99) = 0;
  }
  *(undefined4 *)((int)piVar3 + 0x42) = uVar5;
  if (*(int *)((int)piVar3 + 0x1d8b) != 0) {
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_tot__d__intr__d__seek__d_636062c0);
  }
  if (*(int *)((int)piVar3 + 0x1d6f) != 0) {
    *(undefined4 *)((int)piVar3 + 0x1d6f) = 0;
    piVar3[7] = piVar3[7] + *(int *)((int)piVar3 + 0x1cd7) * -8;
  }
  if ((piVar3[0x73c] != 0) && (*(int *)((int)piVar3 + 99) == 0)) {
    FUN_635fdd80((int *)*puVar7,piVar3);
  }
  if (*(int *)((int)piVar3 + 0x1d87) != 0) {
    FUN_635f7c20((undefined4 *)*puVar7,(int)piVar3);
  }
  if (*(int *)((int)piVar3 + 0x1d8b) != 0) {
    FUN_635fb890(piVar4,(int *)*puVar7,(float *)piVar3[0x750],(int)piVar3);
    FUN_635fb5b0((float *)piVar3[0x751],(float *)piVar3[0x750]);
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Results_for_P_frame__636062a8);
    FUN_635f68a0((float *)piVar3[0x750],1,*(FILE **)((int)piVar3 + 0x23bf));
    FUN_635f6770((int *)piVar3[0x74d],1,1,*(FILE **)((int)piVar3 + 0x23bf));
  }
  free(piVar4);
  *(int *)((int)piVar3 + 0x5a) = *(int *)((int)piVar3 + 0x5a) + 1;
  if (*(int *)((int)piVar3 + 0x1d8b) != 0) {
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s______TOTAL______63606294);
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_for__d_images_63606284);
  }
  if ((*(int *)((int)piVar3 + 0x23af) != 0) && (*(int *)((int)piVar3 + 0x1d8b) != 0)) {
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s________________63606274);
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_SNR_for__d_P_frames__6360625c);
    FUN_635f68a0((float *)piVar3[0x751],*(int *)((int)piVar3 + 0x23b7),
                 *(FILE **)((int)piVar3 + 0x23bf));
    FUN_635f6770((int *)piVar3[0x74d],*(int *)((int)piVar3 + 0x23b7),*(int *)((int)piVar3 + 0x23af),
                 *(FILE **)((int)piVar3 + 0x23bf));
    local_24 = *(uint *)((int)piVar3 + 0x23b7);
    iStack_20 = 0;
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Mean_quantizer_____2f_63606240,
            (double)(*(float *)(piVar3[0x751] + 0xc) / (float)local_24));
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Encoded_frames____3d___3d__63606220,
            *(int *)((int)piVar3 + 0x23af) + 1,*(int *)((int)piVar3 + 0x23af));
    if (local_10 != 0) {
      fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Target_bit_rate_____2f_kbit_sec_636061fc,
              (double)local_10 * _DAT_636041b8);
    }
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Obtained_bit_rate____2f____2f__k_636061d0,
            ((double)(*(int *)(piVar3[0x74f] + 0x20) + *(int *)(piVar3[0x74e] + 0x20)) *
            _DAT_636041b8) / (double)*(float *)((int)piVar3 + 0x1d77),
            (double)(((float)*(int *)(piVar3[0x74e] + 0x20) / *(float *)((int)piVar3 + 0x1d77)) *
                    (float)_DAT_636041b8));
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s_Latency____2f_sec__636061bc,
            (double)((float)(int)((piVar3[0x740] < 1) - 1 & piVar3[0x740]) / local_14));
    fprintf(*(FILE **)((int)piVar3 + 0x23bf),s__________________________________6360618c);
  }
  return 0;
}


