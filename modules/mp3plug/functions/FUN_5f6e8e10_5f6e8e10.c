/* Module: mp3plug.dll
   Function: FUN_5f6e8e10
   Address: 5f6e8e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e8e10(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_5f7529a4 != 0) && (((param_3 | *(uint *)(param_2 + 0xc)) & 0xf) == 0)) {
    FUN_5f6e8a5c(param_3,param_2);
    return;
  }
  iVar9 = 0;
  *(undefined4 *)(param_4 + 0x138) = 0;
  *(undefined4 *)(param_4 + 0x148) = 0;
  *(undefined4 *)(param_4 + 0x14c) = 0;
  *(undefined4 *)(param_4 + 0x140) = 0;
  *(undefined4 *)(param_4 + 0x144) = 0;
  *(int *)(param_4 + 0x13c) = param_1;
  if (0 < param_1) {
    do {
      iVar10 = iVar9 * 0x20;
      uVar3 = *(uint *)(param_2 + 4 + iVar10);
      iVar1 = param_3 + *(int *)(param_2 + iVar10) * 4;
      iVar4 = *(int *)(param_2 + 0xc + iVar10);
      iVar8 = 0;
      fVar2 = _DAT_5f75d79c;
      if (0 < (int)uVar3) {
        fVar5 = _DAT_5f75d79c;
        if (0 < (int)(uVar3 & 0xfffffffc)) {
          while( true ) {
            fVar6 = *(float *)(iVar4 + 4 + iVar8 * 4) - *(float *)(iVar1 + 4 + iVar8 * 4);
            fVar7 = *(float *)(iVar4 + iVar8 * 4) - *(float *)(iVar1 + iVar8 * 4);
            fVar2 = *(float *)(iVar4 + 0xc + iVar8 * 4) - *(float *)(iVar1 + 0xc + iVar8 * 4);
            fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5;
            fVar6 = *(float *)(iVar4 + 8 + iVar8 * 4) - *(float *)(iVar1 + 8 + iVar8 * 4);
            iVar8 = iVar8 + 4;
            fVar2 = fVar6 * fVar6 + fVar2 * fVar2;
            if ((int)(uVar3 & 0xfffffffc) <= iVar8) break;
            fVar5 = fVar2 + fVar5;
          }
          fVar2 = fVar2 + fVar5;
        }
        if (iVar8 < (int)uVar3) {
          while( true ) {
            fVar5 = *(float *)(iVar4 + 4 + iVar8 * 4) - *(float *)(iVar1 + 4 + iVar8 * 4);
            fVar6 = *(float *)(iVar4 + iVar8 * 4) - *(float *)(iVar1 + iVar8 * 4);
            iVar8 = iVar8 + 2;
            fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
            if ((int)uVar3 <= iVar8) break;
            fVar2 = fVar5 + fVar2;
          }
          fVar2 = fVar5 + fVar2;
        }
      }
      *(float *)(param_4 + iVar9 * 4) = fVar2;
      *(float *)(param_4 + 0x9c + iVar9 * 4) = fVar2 * *(float *)(param_2 + 0x18 + iVar10);
      if (*(float *)(param_2 + 0x14 + iVar10) < *(float *)(param_2 + 0x1c + iVar10)) {
        *(int *)(param_4 + 0x140) = *(int *)(param_4 + 0x140) + 1;
      }
      fVar2 = *(float *)(param_4 + 0x9c + iVar9 * 4);
      *(float *)(param_4 + 0x148) =
           *(float *)(param_4 + 0x9c + iVar9 * 4) + *(float *)(param_4 + 0x148);
      if (*(float *)(param_4 + 0x138) < fVar2) {
        *(undefined4 *)(param_4 + 0x138) = *(undefined4 *)(param_4 + 0x9c + iVar9 * 4);
        fVar2 = *(float *)(param_4 + 0x9c + iVar9 * 4);
      }
      if (_DAT_5f75d7a0 < fVar2) {
        fVar2 = *(float *)(param_4 + 0x9c + iVar9 * 4);
        *(int *)(param_4 + 0x144) = *(int *)(param_4 + 0x144) + 1;
        *(float *)(param_4 + 0x14c) = fVar2 + *(float *)(param_4 + 0x14c);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1);
  }
  if (0 < param_1) {
    *(float *)(param_4 + 0x148) = *(float *)(param_4 + 0x148) / (float)param_1;
  }
  if (0 < *(int *)(param_4 + 0x144)) {
    *(float *)(param_4 + 0x14c) = *(float *)(param_4 + 0x14c) / (float)*(int *)(param_4 + 0x144);
  }
  *(undefined4 *)(param_4 + 0x150) = *(undefined4 *)(param_4 + 0x138);
  return;
}


