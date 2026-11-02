/* Module: mp3plug.dll
   Function: FUN_5f6fd4f0
   Address: 5f6fd4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6fd4f0(uint param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = 0;
  dVar5 = (double)_DAT_5f75e6b0;
  if (0 < (int)param_1) {
    fVar3 = _DAT_5f75e6b4;
    if (0 < (int)(param_1 & 0xfffffffe)) {
      do {
        dVar5 = dVar5 + (double)*(float *)(param_3 + iVar4 * 4) +
                (double)*(float *)(param_3 + 4 + iVar4 * 4);
        fVar3 = fVar3 + *(float *)(param_4 + iVar4 * 4) + *(float *)(param_4 + 4 + iVar4 * 4);
        iVar4 = iVar4 + 2;
      } while (iVar4 < (int)(param_1 & 0xfffffffe));
    }
    for (; iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
      dVar5 = dVar5 + (double)*(float *)(param_3 + iVar4 * 4);
      iVar1 = iVar4 * 4;
      fVar3 = fVar3 + *(float *)(param_4 + iVar1);
    }
    if (_DAT_5f75e6b8 < fVar3) {
      dVar5 = pow((dVar5 / (double)fVar3) / (double)*(float *)(param_2 + 0x224),
                  (double)*(float *)(param_2 + 0x228));
      bVar2 = _DAT_5f75e6c4 < (float)dVar5 * *param_5;
      *param_5 = (float)dVar5 * *param_5;
      if (bVar2) {
        *param_5 = 1.0;
      }
    }
  }
  return;
}


