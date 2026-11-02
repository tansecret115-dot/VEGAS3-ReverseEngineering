/* Module: oggplug.dll
   Function: FUN_00433a40
   Address: 00433a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00433a40(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
            float *param_6,undefined4 param_7,float param_8)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_8;
  
  pfVar10 = param_6;
  puVar6 = (undefined4 *)&stack0xffffffe4;
  iVar5 = param_1[0xb];
  pfVar7 = (float *)*param_1;
  FUN_00444a80();
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      *puVar6 = 0xc61c3c00;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 < param_1[0xb]);
  }
  if (*(int *)(param_1[1] + 0x24) == 0) {
    pfVar9 = pfVar7;
    pfVar8 = param_6;
    if (0 < (int)pfVar7) {
      for (; pfVar9 != (float *)0x0; pfVar9 = (float *)((int)pfVar9 + -1)) {
        *pfVar8 = -9999.0;
        pfVar8 = pfVar8 + 1;
      }
    }
  }
  else {
    FUN_00444a80();
    FUN_00434110((int)pfVar7,(uint *)param_1[7],param_5,(int)param_6,-1);
    if (0 < (int)pfVar7) {
      pfVar9 = param_6;
      local_8 = pfVar7;
      do {
        pfVar8 = (float *)((param_5 - (int)param_6) + (int)pfVar9);
        fVar1 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        *(float *)(&stack0xffffffe0 + -(int)param_6 + (int)pfVar9) = *pfVar8 - fVar1;
        local_8 = (float *)((int)local_8 + -1);
      } while (local_8 != (float *)0x0);
    }
    FUN_00432360();
    FUN_004345b0((int)pfVar7,(uint *)param_1[7],(int)&stack0xffffffe4,(int)param_6,
                 *(int *)(param_1[1] + 0x3c));
    if (0 < (int)pfVar7) {
      pfVar9 = (float *)&stack0xffffffe4;
      pfVar8 = pfVar7;
      do {
        pfVar8 = (float *)((int)pfVar8 + -1);
        *pfVar9 = *(float *)((param_5 - (int)&stack0xffffffe4) + (int)pfVar9) - *pfVar9;
        pfVar9 = pfVar9 + 1;
      } while (pfVar8 != (float *)0x0);
    }
    FUN_00432360();
    FUN_00432360();
    iVar5 = 0;
    if (0 < (int)pfVar7) {
      pfVar9 = param_6;
      do {
        iVar5 = iVar5 + 1;
        *pfVar9 = *(float *)(param_1[3] + -4 + iVar5 * 4) * *pfVar9 +
                  *(float *)((int)pfVar9 + (int)(&stack0xffffffe4 + -(int)param_6)) +
                  *(float *)(param_1[4] + -4 + iVar5 * 4);
        pfVar9 = pfVar9 + 1;
      } while (iVar5 < (int)pfVar7);
    }
    FUN_00432360();
  }
  piVar2 = (int *)param_1[1];
  if (*piVar2 != 0) {
    fVar1 = param_8 + (float)piVar2[1];
    if (fVar1 < (float)piVar2[2]) {
      fVar1 = (float)piVar2[2];
    }
    iVar5 = 0;
    if (0 < (int)pfVar7) {
      do {
        fVar3 = fVar1 + *(float *)(param_1[5] + iVar5 * 4);
        if (param_6[iVar5] < fVar3) {
          param_6[iVar5] = fVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)pfVar7);
    }
  }
  FUN_00433cf0(param_1,param_1[2],(int)param_4,(int)param_6,(int)&stack0xffffffe4);
  FUN_00433e90(param_1,param_2,param_3,(float *)&stack0xffffffe4,(int)param_6);
  if ((*(float *)(param_1[1] + 0x28) < _DAT_0044d6f0) &&
     (pfVar9 = param_6, param_6 = pfVar7, 0 < (int)pfVar7)) {
    do {
      if (*(float *)(param_1[1] + 0x28) < *pfVar9) {
        *pfVar9 = *(float *)(param_1[1] + 0x28);
      }
      param_6 = (float *)((int)param_6 + -1);
      pfVar9 = pfVar9 + 1;
    } while (param_6 != (float *)0x0);
  }
  pfVar9 = (float *)0x0;
  if (0 < (int)pfVar7) {
    pfVar8 = pfVar10;
    do {
      if (*pfVar8 <= *(float *)((int)pfVar8 + (param_5 - (int)pfVar10))) break;
      pfVar9 = (float *)((int)pfVar9 + 1);
      pfVar8 = pfVar8 + 1;
    } while ((int)pfVar9 < (int)pfVar7);
  }
  if (pfVar9 == pfVar7) {
    if (0 < (int)pfVar7) {
      for (; pfVar7 != (float *)0x0; pfVar7 = (float *)((int)pfVar7 + -1)) {
        *pfVar10 = -9999.0;
        pfVar10 = pfVar10 + 1;
      }
    }
  }
  else if (0 < (int)pfVar7) {
    iVar5 = param_5 - (int)param_4;
    do {
      if (*(float *)(iVar5 + (int)param_4) <= *param_4) {
        fVar1 = *param_4;
      }
      else {
        fVar1 = *(float *)(iVar5 + (int)param_4);
      }
      *param_4 = fVar1;
      param_4 = param_4 + 1;
      pfVar7 = (float *)((int)pfVar7 + -1);
    } while (pfVar7 != (float *)0x0);
  }
  DAT_0051638c = DAT_0051638c + 1;
  return;
}


