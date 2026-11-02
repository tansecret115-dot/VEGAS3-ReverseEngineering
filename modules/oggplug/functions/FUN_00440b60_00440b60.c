/* Module: oggplug.dll
   Function: FUN_00440b60
   Address: 00440b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00440b60(float *param_1,int param_2,int param_3)

{
  float fVar1;
  double *pdVar2;
  undefined1 *puVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  pdVar2 = (double *)&stack0xffffffe8;
  puVar3 = &stack0xffffffe8;
  iVar4 = param_2 + 1;
  FUN_00444a80();
  if (-1 < param_2) {
    do {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      *pdVar2 = (double)fVar1;
      pdVar2 = pdVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  do {
    if (param_2 < 1) {
      return 0;
    }
    fVar5 = (float10)_DAT_0044c570;
    do {
      fVar6 = (float10)*(double *)(puVar3 + param_2 * 8);
      fVar7 = (float10)_DAT_0044c570;
      fVar8 = (float10)_DAT_0044c570;
      if (0 < param_2) {
        pdVar2 = (double *)(puVar3 + param_2 * 8 + -8);
        iVar4 = param_2;
        do {
          iVar4 = iVar4 + -1;
          fVar8 = fVar8 * fVar5 + fVar7;
          fVar7 = fVar7 * fVar5 + fVar6;
          fVar6 = fVar6 * fVar5 + (float10)*pdVar2;
          pdVar2 = pdVar2 + -1;
        } while (iVar4 != 0);
      }
      fVar8 = ((float10)(param_2 + -1) * fVar7 * fVar7 - (float10)param_2 * fVar8 * fVar6) *
              (float10)(param_2 + -1);
      if (fVar8 < (float10)_DAT_0044c570) {
        return 0xffffffff;
      }
      fVar8 = SQRT(fVar8);
      if (fVar7 <= (float10)_DAT_0044c570) {
        fVar8 = fVar7 - fVar8;
        if ((float10)_DAT_0044d810 <= fVar8) {
          fVar8 = (float10)_DAT_0044d810;
        }
      }
      else {
        fVar8 = fVar8 + fVar7;
        if (fVar8 < (float10)_DAT_0044d818) {
          fVar8 = (float10)_DAT_0044d818;
        }
      }
      fVar8 = ((float10)param_2 * fVar6) / fVar8;
      fVar5 = fVar5 - fVar8;
      if (fVar8 < (float10)_DAT_0044c570) {
        fVar8 = fVar8 * (float10)_DAT_0044d808;
      }
    } while ((float10)_DAT_0044d800 <= ABS(fVar8 / fVar5));
    *(float *)(param_3 + -4 + param_2 * 4) = (float)fVar5;
    if (0 < param_2) {
      pdVar2 = (double *)(puVar3 + param_2 * 8 + -8);
      iVar4 = param_2;
      do {
        iVar4 = iVar4 + -1;
        *pdVar2 = (double)(fVar5 * (float10)pdVar2[1] + (float10)*pdVar2);
        pdVar2 = pdVar2 + -1;
      } while (iVar4 != 0);
    }
    puVar3 = puVar3 + 8;
    param_2 = param_2 + -1;
  } while( true );
}


