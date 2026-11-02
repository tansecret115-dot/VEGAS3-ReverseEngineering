/* Module: espr3260.dll
   Function: FUN_632f8160
   Address: 632f8160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f8160(void *this,int param_1,float *param_2,int *param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  float local_8;
  
  iVar9 = *(int *)((int)this + 4);
  pfVar8 = (float *)(iVar9 + -0x28);
  pfVar4 = (float *)(iVar9 + -0x50);
  *(float **)((int)this + 4) = pfVar4;
  local_8 = 1.26117e-44;
  do {
    fVar11 = (float10)_CIacos();
    *pfVar8 = (float)(fVar11 * (float10)_DAT_632fa5b8);
    pfVar8 = pfVar8 + 1;
    local_8 = (float)((int)local_8 + -1);
  } while (local_8 != 0.0);
  local_8 = 3.4028235e+38;
  pfVar8 = (float *)(iVar9 + -0x24);
  iVar7 = 8;
  do {
    if (*pfVar8 - pfVar8[-1] < local_8) {
      local_8 = *pfVar8 - pfVar8[-1];
    }
    pfVar8 = pfVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((float)_DAT_632fa5c8 <= local_8) {
    *param_4 = 0;
  }
  else {
    *param_4 = 1;
  }
  pfVar8 = (float *)&DAT_632fb658;
  pfVar5 = (float *)((int)this + 0x7d4);
  *(float *)(iVar9 + -4) = *(float *)(param_1 + 0x24) * _DAT_632fa5d0;
  do {
    fVar2 = *pfVar5;
    pfVar1 = (float *)(iVar9 + -0x632fb680 + (int)pfVar8);
    fVar3 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar5 = pfVar5 + 1;
    *(float *)(iVar9 + -0x632fb6ac + (int)pfVar8) = (*pfVar1 - fVar3) - fVar2 * _DAT_632fa5d4;
  } while ((int)pfVar8 < 0x632fb680);
  piVar10 = (int *)0x0;
  local_8 = 3.4028235e+38;
  pfVar8 = (float *)&DAT_632fb680;
  piVar6 = param_3;
  if (0 < DAT_632fb640) {
    do {
      fVar2 = *(float *)(iVar9 + -0x4c) - pfVar8[1];
      fVar2 = fVar2 * fVar2 + (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8);
      pfVar8 = pfVar8 + 2;
      if (fVar2 < local_8) {
        piVar6 = piVar10;
        local_8 = fVar2;
      }
      piVar10 = (int *)((int)piVar10 + 1);
    } while ((int)piVar10 < DAT_632fb640);
  }
  piVar10 = (int *)0x0;
  local_8 = 3.4028235e+38;
  *param_3 = (int)piVar6;
  *pfVar4 = (float)(&DAT_632fb680)[(int)piVar6 * 2];
  *(undefined4 *)(iVar9 + -0x4c) = (&DAT_632fb684)[(int)piVar6 * 2];
  pfVar8 = (float *)&DAT_632fb880;
  if (0 < DAT_632fb644) {
    do {
      fVar2 = *(float *)(iVar9 + -0x48) - *pfVar8;
      fVar3 = *(float *)(iVar9 + -0x44) - pfVar8[1];
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      pfVar8 = pfVar8 + 2;
      if (fVar2 < local_8) {
        piVar6 = piVar10;
        local_8 = fVar2;
      }
      piVar10 = (int *)((int)piVar10 + 1);
    } while ((int)piVar10 < DAT_632fb644);
  }
  piVar10 = (int *)0x0;
  local_8 = 3.4028235e+38;
  param_3[1] = (int)piVar6;
  *(undefined4 *)(iVar9 + -0x48) = (&DAT_632fb880)[(int)piVar6 * 2];
  *(undefined4 *)(iVar9 + -0x44) = (&DAT_632fb884)[(int)piVar6 * 2];
  pfVar8 = (float *)&DAT_632fbc80;
  if (0 < DAT_632fb648) {
    do {
      fVar2 = *(float *)(iVar9 + -0x40) - *pfVar8;
      fVar3 = *(float *)(iVar9 + -0x3c) - pfVar8[1];
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      pfVar8 = pfVar8 + 2;
      if (fVar2 < local_8) {
        piVar6 = piVar10;
        local_8 = fVar2;
      }
      piVar10 = (int *)((int)piVar10 + 1);
    } while ((int)piVar10 < DAT_632fb648);
  }
  piVar10 = (int *)0x0;
  local_8 = 3.4028235e+38;
  param_3[2] = (int)piVar6;
  *(undefined4 *)(iVar9 + -0x40) = (&DAT_632fbc80)[(int)piVar6 * 2];
  *(undefined4 *)(iVar9 + -0x3c) = (&DAT_632fbc84)[(int)piVar6 * 2];
  pfVar8 = (float *)&DAT_632fc080;
  if (0 < DAT_632fb64c) {
    do {
      fVar2 = *(float *)(iVar9 + -0x38) - *pfVar8;
      fVar3 = *(float *)(iVar9 + -0x34) - pfVar8[1];
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      pfVar8 = pfVar8 + 2;
      if (fVar2 < local_8) {
        piVar6 = piVar10;
        local_8 = fVar2;
      }
      piVar10 = (int *)((int)piVar10 + 1);
    } while ((int)piVar10 < DAT_632fb64c);
  }
  piVar10 = (int *)0x0;
  local_8 = 3.4028235e+38;
  param_3[3] = (int)piVar6;
  *(undefined4 *)(iVar9 + -0x38) = (&DAT_632fc080)[(int)piVar6 * 2];
  *(undefined4 *)(iVar9 + -0x34) = (&DAT_632fc084)[(int)piVar6 * 2];
  pfVar8 = (float *)&DAT_632fc480;
  if (0 < DAT_632fb650) {
    do {
      fVar2 = *(float *)(iVar9 + -0x30) - *pfVar8;
      fVar3 = *(float *)(iVar9 + -0x2c) - pfVar8[1];
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      pfVar8 = pfVar8 + 2;
      if (fVar2 < local_8) {
        piVar6 = piVar10;
        local_8 = fVar2;
      }
      piVar10 = (int *)((int)piVar10 + 1);
    } while ((int)piVar10 < DAT_632fb650);
  }
  param_3[4] = (int)piVar6;
  *(undefined4 *)(iVar9 + -0x30) = (&DAT_632fc480)[(int)piVar6 * 2];
  *(undefined4 *)(iVar9 + -0x2c) = (&DAT_632fc484)[(int)piVar6 * 2];
  pfVar8 = (float *)((int)this + 0x7d4);
  iVar9 = 10;
  pfVar5 = param_2;
  do {
    fVar2 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    iVar9 = iVar9 + -1;
    *pfVar5 = *(float *)(((int)pfVar4 - (int)param_2) + (int)pfVar5) +
              (*(float *)(((int)&DAT_632fb658 - (int)param_2) + (int)pfVar5) - fVar2 * _DAT_632fa5d8
              );
    pfVar5 = pfVar5 + 1;
  } while (iVar9 != 0);
  FUN_632f8900(param_2,50.0,10,650.0);
  pfVar8 = (float *)((int)this + 0x7d4);
  iVar9 = 10;
  do {
    fVar2 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *pfVar8 = fVar2;
    pfVar8 = pfVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = 9;
  pfVar4 = param_2;
  do {
    iVar9 = iVar9 + -1;
    fVar11 = (float10)fcos((float10)*pfVar4 * (float10)_DAT_632fa5e0);
    *pfVar4 = (float)fVar11;
    pfVar4 = pfVar4 + 1;
  } while (iVar9 != 0);
  param_2[9] = param_2[9] * _DAT_632fa5e8;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x50;
  return;
}


