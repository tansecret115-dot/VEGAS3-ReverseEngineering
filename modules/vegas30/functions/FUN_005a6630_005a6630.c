/* Module: vegas30.exe
   Function: FUN_005a6630
   Address: 005a6630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6630(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_c0;
  float local_b8 [17];
  float local_74;
  double local_68;
  float local_5c [17];
  float local_18;
  double local_c;
  
  if (param_1 != (float *)0x0) {
    if (_DAT_00610fd8 <= (double)CONCAT44(param_5,param_4)) {
      if (_DAT_006106d0 < (double)CONCAT44(param_5,param_4)) {
        param_4 = 0;
        param_5 = 0x3ff00000;
      }
    }
    else {
      param_4 = 0;
      param_5 = 0;
    }
    if (param_2 == (float *)0x0) {
      for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_1 = *param_3;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
      return;
    }
    if (param_3 == (float *)0x0) {
      for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      return;
    }
    dVar1 = *(double *)(param_2 + 0x14);
    dVar2 = *(double *)(param_3 + 0x14);
    pfVar4 = param_2;
    pfVar3 = param_1;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar3 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
    }
    if (dVar1 == dVar2) {
      iVar5 = 4;
      pfVar4 = param_2;
      do {
        iVar7 = 4;
        pfVar3 = pfVar4;
        do {
          pfVar4 = pfVar3 + 1;
          iVar7 = iVar7 + -1;
          *(float *)((int)param_1 + (-4 - (int)param_2) + (int)pfVar4) =
               (*(float *)(((int)param_3 - (int)param_2) + (int)pfVar3) - *pfVar3) *
               (float)(double)CONCAT44(param_5,param_4) + *pfVar3;
          pfVar3 = pfVar4;
        } while (iVar7 != 0);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = 4;
      pfVar4 = param_2 + 0x10;
      do {
        iVar5 = iVar5 + -1;
        *(float *)((int)pfVar4 + ((int)param_1 - (int)param_2)) =
             (*(float *)((int)pfVar4 + ((int)param_3 - (int)param_2)) - *pfVar4) *
             (float)(double)CONCAT44(param_5,param_4) + *pfVar4;
        pfVar4 = pfVar4 + 1;
      } while (iVar5 != 0);
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      return;
    }
    pfVar4 = local_b8;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar4 = *param_2;
      param_2 = param_2 + 1;
      pfVar4 = pfVar4 + 1;
    }
    fVar8 = (float10)fsin(-(float10)local_68);
    pfVar4 = local_5c;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar4 = *param_3;
      param_3 = param_3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    dVar1 = (double)fVar8;
    fVar8 = (float10)fcos(-(float10)local_68);
    dVar2 = (double)fVar8;
    uStack_d4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c0 = dVar1;
    if (local_68 != local_c) {
      fVar9 = (float10)fsin(-(float10)local_c);
      fVar8 = (float10)fcos(-(float10)local_c);
      local_c0 = (double)fVar9;
    }
    iVar5 = 0;
    do {
      pfVar4 = (float *)((int)local_5c + iVar5);
      local_d8 = SUB84(dVar1,0);
      *(float *)((int)local_b8 + iVar5) = *(float *)((int)local_b8 + iVar5) - local_b8[0x10];
      *(float *)((int)local_b8 + iVar5 + 4) = *(float *)((int)local_b8 + iVar5 + 4) - local_74;
      *pfVar4 = *pfVar4 - local_5c[0x10];
      *(float *)((int)local_5c + iVar5 + 4) = *(float *)((int)local_5c + iVar5 + 4) - local_18;
      FUN_005a6060((float *)((int)local_b8 + iVar5),local_d8,uStack_d4,dVar2);
      FUN_005a6060(pfVar4,(undefined4)local_c0,local_c0._4_4_,(double)fVar8);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 < 0x40);
    fVar8 = (float10)(double)CONCAT44(param_5,param_4);
    iVar5 = 0;
    do {
      iVar6 = 2;
      iVar7 = iVar5;
      do {
        iVar6 = iVar6 + -1;
        *(float *)(iVar7 + (int)param_1) =
             (float)(((float10)*(float *)((int)local_5c + iVar7) -
                     (float10)*(float *)((int)local_b8 + iVar7)) * fVar8 +
                    (float10)*(float *)((int)local_b8 + iVar7));
        iVar7 = iVar7 + 4;
      } while (iVar6 != 0);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 < 0x40);
    iVar5 = 4;
    fVar9 = ((float10)local_c - (float10)local_68) * fVar8 + (float10)local_68;
    *(double *)(param_1 + 0x14) = (double)fVar9;
    param_1[0x10] =
         (float)(((float10)local_5c[0x10] - (float10)local_b8[0x10]) * fVar8 +
                (float10)local_b8[0x10]);
    param_1[0x11] = (float)(((float10)local_18 - (float10)local_74) * fVar8 + (float10)local_74);
    fVar8 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    pfVar4 = param_1;
    do {
      FUN_005a6060(pfVar4,(double)fVar8,(double)fVar9);
      iVar5 = iVar5 + -1;
      *pfVar4 = *pfVar4 + param_1[0x10];
      pfVar4[1] = pfVar4[1] + param_1[0x11];
      pfVar4 = pfVar4 + 4;
    } while (iVar5 != 0);
  }
  return;
}


