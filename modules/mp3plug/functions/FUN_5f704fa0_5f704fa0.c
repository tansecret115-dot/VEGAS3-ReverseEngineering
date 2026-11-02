/* Module: mp3plug.dll
   Function: FUN_5f704fa0
   Address: 5f704fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f704fa0(uint param_1,float *param_2,float *param_3,int param_4,int param_5,float *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 == 0) {
    FUN_5f6d4c60(param_2,param_3,param_6,param_1);
  }
  else if (param_5 == 1) {
    iVar2 = 0;
    if (0 < (int)param_1) {
      if (0 < (int)(param_1 & 0xfffffffe)) {
        do {
          param_6[iVar2] =
               param_3[iVar2] * param_2[iVar2] * _DAT_5f7603e8 +
               *(float *)(param_4 + iVar2 * 4) * _DAT_5f7603e4 * _DAT_5f7603e0;
          param_6[iVar2 + 1] =
               param_3[iVar2 + 1] * param_2[iVar2 + 1] * _DAT_5f7603e8 +
               *(float *)(param_4 + 4 + iVar2 * 4) * _DAT_5f7603e4 * _DAT_5f7603e0;
          iVar2 = iVar2 + 2;
        } while (iVar2 < (int)(param_1 & 0xfffffffe));
      }
      for (; iVar2 < (int)param_1; iVar2 = iVar2 + 1) {
        param_6[iVar2] =
             param_3[iVar2] * param_2[iVar2] * _DAT_5f7603e8 +
             *(float *)(param_4 + iVar2 * 4) * _DAT_5f7603e4 * _DAT_5f7603e0;
      }
    }
  }
  else if ((param_5 == 2) && (iVar2 = 0, 0 < (int)param_1)) {
    if (0 < (int)(param_1 & 0xfffffffe)) {
      do {
        param_6[iVar2] = *(float *)(param_4 + iVar2 * 4) * _DAT_5f7603fc;
        param_6[iVar2 + 1] = *(float *)(param_4 + 4 + iVar2 * 4) * _DAT_5f7603fc;
        iVar2 = iVar2 + 2;
      } while (iVar2 < (int)(param_1 & 0xfffffffe));
    }
    if (iVar2 < (int)param_1) {
      while( true ) {
        fVar1 = *(float *)(param_4 + iVar2 * 4) * _DAT_5f7603fc;
        if ((int)param_1 <= iVar2 + 1) break;
        param_6[iVar2] = fVar1;
        iVar2 = iVar2 + 1;
      }
      param_6[iVar2] = fVar1;
    }
  }
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      if (param_2[iVar2] == _DAT_5f7603ec) {
        param_6[iVar2] = 1.0;
      }
      iVar3 = iVar2 + 1;
      if ((int)param_1 <= iVar3) {
        return;
      }
      if (param_2[iVar3] == _DAT_5f7603f4) {
        param_6[iVar3] = 1.0;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < (int)param_1);
  }
  return;
}


