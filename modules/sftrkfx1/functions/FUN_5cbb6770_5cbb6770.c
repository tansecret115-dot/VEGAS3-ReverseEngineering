/* Module: sftrkfx1.dll
   Function: FUN_5cbb6770
   Address: 5cbb6770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cbb6770(int *param_1,float *param_2,uint param_3)

{
  int *piVar1;
  float *pfVar2;
  double *pdVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 1;
  local_10 = 0;
  iVar4 = 1;
  if (*param_1 != 0) {
    pdVar3 = (double *)(param_1 + 0x12);
    piVar1 = param_1;
    do {
      if ((*(uint *)((int)pdVar3 + 4) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)pdVar3 = 0;
        *(undefined4 *)((int)pdVar3 + 4) = 0;
      }
      if ((*(uint *)((int)pdVar3 + 0xc) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar3 + 1) = 0;
        *(undefined4 *)((int)pdVar3 + 0xc) = 0;
      }
      if ((*(uint *)((int)pdVar3 + 0x1ec) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar3 + 0x3d) = 0;
        *(undefined4 *)((int)pdVar3 + 0x1ec) = 0;
      }
      if ((*(uint *)((int)pdVar3 + 500) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar3 + 0x3e) = 0;
        *(undefined4 *)((int)pdVar3 + 500) = 0;
      }
      iVar4 = piVar1[6];
      if (iVar4 == 1) {
        local_8 = 0;
        if (0 < *(int *)(pdVar3 + 9)) {
          do {
            fVar10 = (float10)*pdVar3;
            fVar5 = (float10)pdVar3[0x3d];
            for (pfVar2 = param_2; pfVar2 < param_2 + param_3 * 2; pfVar2 = pfVar2 + 2) {
              fVar6 = (float10)*pfVar2 + fVar10;
              fVar7 = (float10)pfVar2[1] + fVar5;
              fVar10 = fVar10 * (float10)pdVar3[-4] + (float10)*pfVar2 * (float10)pdVar3[8];
              fVar5 = fVar5 * (float10)pdVar3[0x39] + (float10)pfVar2[1] * (float10)pdVar3[0x45];
              pfVar2[1] = (float)(fVar7 + fVar5);
              *pfVar2 = (float)(fVar6 + fVar10);
            }
            pdVar3[0x3d] = (double)fVar5;
            *pdVar3 = (double)fVar10;
            if (1 < *(int *)(pdVar3 + 9)) {
              FUN_5cbb5af0((int)(pdVar3 + -4));
              FUN_5cbb5af0((int)(pdVar3 + 0x39));
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)(pdVar3 + 9));
        }
      }
      else if (iVar4 == 2) {
        pfVar2 = param_2;
        if ((param_3 & 1) != 0) {
          pfVar2 = param_2 + 2;
          fVar10 = (float10)*pdVar3 * (float10)pdVar3[-4] +
                   (float10)pdVar3[-3] * (float10)pdVar3[1] + (float10)*param_2 * (float10)pdVar3[8]
          ;
          *param_2 = (float)(((float10)*param_2 + fVar10) - (float10)pdVar3[1]);
          *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
          *pdVar3 = (double)fVar10;
          *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
          fVar10 = (float10)pdVar3[0x39] * (float10)pdVar3[0x3d] +
                   (float10)pdVar3[0x3a] * (float10)pdVar3[0x3e] +
                   (float10)param_2[1] * (float10)pdVar3[0x45];
          param_2[1] = (float)(((float10)param_2[1] + fVar10) - (float10)pdVar3[0x3e]);
          *(undefined4 *)(pdVar3 + 0x3e) = *(undefined4 *)(pdVar3 + 0x3d);
          pdVar3[0x3d] = (double)fVar10;
          *(undefined4 *)((int)pdVar3 + 500) = *(undefined4 *)((int)pdVar3 + 0x1ec);
        }
        fVar10 = (float10)*pdVar3;
        fVar5 = (float10)pdVar3[1];
        fVar6 = (float10)pdVar3[0x3d];
        fVar7 = (float10)pdVar3[0x3e];
        for (; pfVar2 < param_2 + param_3 * 2; pfVar2 = pfVar2 + 4) {
          fVar8 = (float10)*pfVar2 - fVar5;
          fVar9 = (float10)pfVar2[1] - fVar7;
          fVar5 = (float10)*pfVar2 * (float10)pdVar3[8] +
                  fVar10 * (float10)pdVar3[-4] + fVar5 * (float10)pdVar3[-3];
          fVar7 = (float10)pfVar2[1] * (float10)pdVar3[0x45] +
                  fVar6 * (float10)pdVar3[0x39] + fVar7 * (float10)pdVar3[0x3a];
          pfVar2[1] = (float)(fVar9 + fVar7);
          *pfVar2 = (float)(fVar8 + fVar5);
          fVar8 = (float10)pfVar2[2] - fVar10;
          fVar9 = (float10)pfVar2[3] - fVar6;
          fVar10 = (float10)pfVar2[2] * (float10)pdVar3[8] +
                   fVar5 * (float10)pdVar3[-4] + fVar10 * (float10)pdVar3[-3];
          fVar6 = (float10)pfVar2[3] * (float10)pdVar3[0x45] +
                  fVar7 * (float10)pdVar3[0x39] + fVar6 * (float10)pdVar3[0x3a];
          pfVar2[3] = (float)(fVar9 + fVar6);
          pfVar2[2] = (float)(fVar8 + fVar10);
        }
        pdVar3[0x3d] = (double)fVar6;
        pdVar3[0x3e] = (double)fVar7;
        *pdVar3 = (double)fVar10;
        pdVar3[1] = (double)fVar5;
      }
      else if ((iVar4 == 3) && (iVar4 = 0, 0 < *(int *)(pdVar3 + 9))) {
        do {
          FUN_5cbb7200(param_2,param_3,(int)param_1,local_10);
          if (1 < *(int *)(pdVar3 + 9)) {
            FUN_5cbb5af0((int)(pdVar3 + -4));
            FUN_5cbb5af0((int)(pdVar3 + 0x39));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(pdVar3 + 9));
      }
      if ((local_c != 0) &&
         ((((_DAT_5cc04958 < *pdVar3 || (_DAT_5cc04958 < pdVar3[1])) ||
           (_DAT_5cc04958 < pdVar3[0x3d])) || (_DAT_5cc04958 < pdVar3[0x3e])))) {
        local_c = 0;
      }
      piVar1 = piVar1 + 1;
      local_10 = local_10 + 1;
      pdVar3 = pdVar3 + 0xe;
      iVar4 = local_c;
    } while (*piVar1 != 0);
  }
  return iVar4;
}


