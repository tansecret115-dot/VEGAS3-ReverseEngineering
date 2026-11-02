/* Module: vegas30.exe
   Function: FUN_00590680
   Address: 00590680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590680(int param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,double param_7,double param_8)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint _NewValue;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_6 == 1) {
    if (0 < param_3) {
      do {
        iVar1 = (int)ROUND(param_8);
        fVar4 = (float10)param_8 - (float10)iVar1;
        if (fVar4 == (float10)_DAT_00610fd8) {
          *param_2 = *(float *)(param_1 + iVar1 * 4);
        }
        else {
          fVar5 = fVar4 * fVar4;
          fVar6 = fVar5 * fVar4;
          *param_2 = (float)((float10)*(float *)(param_1 + iVar1 * 4) *
                             (float10)(double)((((float10)_DAT_006129c8 -
                                                fVar5 * (float10)_DAT_006129a8) +
                                               fVar6 * (float10)_DAT_00610f30) *
                                              (float10)_DAT_006128c0) +
                            (float10)*(float *)(param_1 + -4 + iVar1 * 4) *
                            (float10)(double)(((fVar5 * (float10)_DAT_00610f30 +
                                               ((float10)_DAT_006106d0 -
                                               fVar4 * (float10)_DAT_00610f30)) - fVar6) *
                                             (float10)_DAT_006128c0) +
                            (float10)*(float *)(param_1 + 4 + iVar1 * 4) *
                            (((fVar5 + fVar4) * (float10)_DAT_00610f30 + (float10)_DAT_006106d0) -
                            fVar6 * (float10)_DAT_00610f30) * (float10)_DAT_006128c0 +
                            (float10)*(float *)(param_1 + 8 + iVar1 * 4) *
                            (float10)(double)fVar6 * (float10)_DAT_006128c0);
        }
        param_8 = param_7 + param_8;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      _controlfp(_NewValue,0xffffffff);
      return;
    }
  }
  else if ((param_6 == 2) && (0 < param_3)) {
    do {
      iVar1 = (int)ROUND(param_8);
      fVar4 = (float10)param_8 - (float10)iVar1;
      if (fVar4 == (float10)_DAT_00610fd8) {
        *param_2 = *(float *)(param_1 + iVar1 * 8);
        param_2[1] = *(float *)(param_1 + 4 + iVar1 * 8);
      }
      else {
        fVar5 = fVar4 * fVar4;
        fVar6 = fVar5 * fVar4;
        dVar2 = (double)(((fVar5 * (float10)_DAT_00610f30 +
                          ((float10)_DAT_006106d0 - fVar4 * (float10)_DAT_00610f30)) - fVar6) *
                        (float10)_DAT_006128c0);
        dVar3 = (double)((((float10)_DAT_006129c8 - fVar5 * (float10)_DAT_006129a8) +
                         fVar6 * (float10)_DAT_00610f30) * (float10)_DAT_006128c0);
        fVar5 = (((fVar5 + fVar4) * (float10)_DAT_00610f30 + (float10)_DAT_006106d0) -
                fVar6 * (float10)_DAT_00610f30) * (float10)_DAT_006128c0;
        fVar4 = (float10)_DAT_006128c0;
        *param_2 = (float)((float10)*(float *)(param_1 + iVar1 * 8) * (float10)dVar3 +
                          (float10)*(float *)(param_1 + -8 + iVar1 * 8) * (float10)dVar2 +
                          (float10)*(float *)(param_1 + 8 + iVar1 * 8) * fVar5 +
                          (float10)*(float *)(param_1 + 0x10 + iVar1 * 8) *
                          (float10)(double)fVar6 * fVar4);
        param_2[1] = (float)((float10)*(float *)(param_1 + -4 + iVar1 * 8) * (float10)dVar2 +
                            (float10)*(float *)(param_1 + 4 + iVar1 * 8) * (float10)dVar3 +
                            (float10)*(float *)(param_1 + 0xc + iVar1 * 8) * fVar5 +
                            (float10)*(float *)(param_1 + 0x14 + iVar1 * 8) *
                            (float10)(double)fVar6 * fVar4);
      }
      param_8 = param_7 + param_8;
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  _controlfp(_NewValue,0xffffffff);
  return;
}


