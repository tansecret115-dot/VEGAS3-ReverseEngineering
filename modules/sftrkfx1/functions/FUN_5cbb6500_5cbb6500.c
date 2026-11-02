/* Module: sftrkfx1.dll
   Function: FUN_5cbb6500
   Address: 5cbb6500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cbb6500(int *param_1,float *param_2,int param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  float *pfVar3;
  int iVar4;
  double *pdVar5;
  float10 fVar6;
  int local_1c;
  
  local_1c = 1;
  iVar4 = 1;
  if (*param_1 != 0) {
    pdVar5 = (double *)(param_1 + 0x14);
    do {
      iVar4 = param_1[6];
      if (iVar4 == 1) {
        iVar4 = 0;
        if (0 < *(int *)(pdVar5 + 8)) {
          do {
            if ((*(uint *)((int)pdVar5 + -4) & 0x7ff00000) < 0x3df00000) {
              *(undefined4 *)(pdVar5 + -1) = 0;
              *(undefined4 *)((int)pdVar5 + -4) = 0;
            }
            if ((*(uint *)((int)pdVar5 + 4) & 0x7ff00000) < 0x3df00000) {
              *(undefined4 *)pdVar5 = 0;
              *(undefined4 *)((int)pdVar5 + 4) = 0;
            }
            fVar6 = (float10)pdVar5[-1];
            fVar2 = (float10)*pdVar5;
            for (pfVar3 = param_2; fVar1 = fVar6, pfVar3 < param_2 + param_3 * param_4;
                pfVar3 = pfVar3 + param_4) {
              fVar6 = (float10)*pfVar3 * (float10)pdVar5[7] + fVar1 * (float10)pdVar5[-5];
              *pfVar3 = (float)((float10)*pfVar3 + fVar1 + fVar6);
              fVar2 = fVar1;
            }
            *pdVar5 = (double)fVar2;
            pdVar5[-1] = (double)fVar1;
            if (1 < *(int *)(pdVar5 + 8)) {
              FUN_5cbb5af0((int)(pdVar5 + -5));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(pdVar5 + 8));
        }
      }
      else if (iVar4 == 2) {
        if ((*(uint *)((int)pdVar5 + -4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)(pdVar5 + -1) = 0;
          *(undefined4 *)((int)pdVar5 + -4) = 0;
        }
        if ((*(uint *)((int)pdVar5 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) = 0;
        }
        fVar6 = (float10)pdVar5[-1];
        fVar2 = (float10)*pdVar5;
        for (pfVar3 = param_2; fVar1 = fVar6, pfVar3 < param_2 + param_3 * param_4;
            pfVar3 = pfVar3 + param_4) {
          fVar6 = (float10)(double)fVar2 * (float10)pdVar5[-4] +
                  fVar1 * (float10)pdVar5[-5] + (float10)*pfVar3 * (float10)pdVar5[7];
          *pfVar3 = (float)(((float10)*pfVar3 + fVar6) - (float10)(double)fVar2);
          fVar2 = fVar1;
        }
        *pdVar5 = (double)fVar2;
        pdVar5[-1] = (double)fVar1;
      }
      else if ((iVar4 == 3) && (iVar4 = 0, 0 < *(int *)(pdVar5 + 8))) {
        do {
          if ((*(uint *)((int)pdVar5 + -4) & 0x7ff00000) < 0x3df00000) {
            *(undefined4 *)(pdVar5 + -1) = 0;
            *(undefined4 *)((int)pdVar5 + -4) = 0;
          }
          if ((*(uint *)((int)pdVar5 + 4) & 0x7ff00000) < 0x3df00000) {
            *(undefined4 *)pdVar5 = 0;
            *(undefined4 *)((int)pdVar5 + 4) = 0;
          }
          fVar6 = (float10)pdVar5[-1];
          fVar2 = (float10)*pdVar5;
          for (pfVar3 = param_2; fVar1 = fVar6, pfVar3 < param_2 + param_3 * param_4;
              pfVar3 = pfVar3 + param_4) {
            fVar6 = (float10)*pfVar3 * (float10)pdVar5[7] + fVar1 * (float10)pdVar5[-5];
            *pfVar3 = (float)(((float10)*pfVar3 + fVar6) - fVar1);
            fVar2 = fVar1;
          }
          *pdVar5 = (double)fVar2;
          pdVar5[-1] = (double)fVar1;
          if (1 < *(int *)(pdVar5 + 8)) {
            FUN_5cbb5af0((int)(pdVar5 + -5));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(pdVar5 + 8));
      }
      if ((local_1c != 0) && ((_DAT_5cc04958 < pdVar5[-1] || (_DAT_5cc04958 < *pdVar5)))) {
        local_1c = 0;
      }
      pdVar5 = pdVar5 + 0xe;
      param_1 = param_1 + 1;
      iVar4 = local_1c;
    } while (*param_1 != 0);
  }
  return iVar4;
}


