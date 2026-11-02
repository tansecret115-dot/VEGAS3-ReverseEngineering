/* Module: mp3plug.dll
   Function: FUN_5f6f7450
   Address: 5f6f7450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_5f6f7450(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float local_34;
  
  iVar8 = 0;
  iVar6 = param_2;
  if (0 < *(int *)(param_3 + 0xc)) {
    do {
      local_34 = -0.0;
      iVar6 = *(int *)(param_3 + 0x10 + iVar8 * 4);
      fVar1 = _DAT_5f75e360;
      fVar2 = _DAT_5f75e364;
      if (iVar6 < *(int *)(param_3 + 0x14 + iVar8 * 4)) {
        do {
          fVar4 = *(float *)(param_3 + 0x284 + iVar6 * 4);
          fVar3 = ABS(fVar4);
          if (*(int *)(param_3 + 0x284 + iVar6 * 4) == 0) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = (float)((0xbd - ((uint)fVar3 >> 0x18)) * 0x800000 +
                           *(int *)(&DAT_5f741e70 + (((uint)fVar4 & 0xffffff) >> 0x13) * 4));
          }
          fVar7 = *(float *)(param_3 + 0x288 + iVar6 * 4);
          fVar5 = ABS(fVar7);
          if (*(int *)(param_3 + 0x288 + iVar6 * 4) == 0) {
            fVar7 = 0.0;
          }
          else {
            fVar7 = (float)((0xbd - ((uint)fVar5 >> 0x18)) * 0x800000 +
                           *(int *)(&DAT_5f741e70 + (((uint)fVar7 & 0xffffff) >> 0x13) * 4));
          }
          if ((int)local_34 < (int)fVar3) {
            local_34 = fVar3;
          }
          if ((int)local_34 < (int)fVar5) {
            local_34 = fVar5;
          }
          fVar4 = fVar4 * (_DAT_5f75e368 - fVar4 * fVar4 * fVar3) * _DAT_5f75e36c;
          iVar6 = iVar6 + 2;
          fVar2 = fVar3 * fVar4 * (_DAT_5f75e378 - fVar4 * fVar4 * fVar3) * _DAT_5f75e37c + fVar2;
          fVar4 = (_DAT_5f75e370 - fVar7 * fVar7 * fVar5) * fVar7 * _DAT_5f75e374;
          fVar1 = fVar5 * (_DAT_5f75e380 - fVar4 * fVar4 * fVar5) * fVar4 * _DAT_5f75e384 + fVar1;
        } while (iVar6 < *(int *)(param_3 + 0x14 + iVar8 * 4));
      }
      *(float *)(param_1 + iVar8 * 4) = fVar2 + _DAT_5f75e388 + fVar1;
      *(float *)(param_2 + iVar8 * 4) = local_34;
      iVar6 = *(int *)(param_3 + 0xc);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return iVar6;
}


