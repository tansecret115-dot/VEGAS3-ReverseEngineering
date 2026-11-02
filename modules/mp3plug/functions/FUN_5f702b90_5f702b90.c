/* Module: mp3plug.dll
   Function: FUN_5f702b90
   Address: 5f702b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f702b90(float param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_58;
  uint uStack_54;
  int local_4c;
  
  fVar4 = (_DAT_5f76007c * param_1) / (float)**(int **)(param_2 + 0x20);
  fVar5 = (_DAT_5f76007c * param_1) / (float)**(int **)(param_3 + 0x20);
  iVar7 = FUN_5f70dc20(**(float **)(param_2 + 0x24),param_1,(*(int **)(param_2 + 0x20))[1],
                       *(int *)(param_2 + 0x20) + 100);
  iVar8 = *(int *)(param_2 + 0x20);
  pfVar3 = *(float **)(param_2 + 0x24);
  if (_DAT_5f760078 < ABS(((float)*(int *)(iVar8 + 100 + iVar7 * 4) * fVar4 - *pfVar3) / *pfVar3)) {
    iVar8 = FUN_5f70dcf0(*pfVar3,param_1,*(int *)(iVar8 + 4),*(int *)(param_2 + 0x20) + 100);
    if (ABS(((float)*(int *)(*(int *)(param_2 + 0x20) + 100 + iVar8 * 4) * fVar4 -
            **(float **)(param_2 + 0x24)) / **(float **)(param_2 + 0x24)) <= _DAT_5f760074) {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(param_2 + 0x20) + 100 + iVar8 * 4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar8 + 100 + iVar7 * 4);
  }
  iVar7 = FUN_5f70dc20(**(float **)(param_3 + 0x24),param_1,*(int *)(*(int *)(param_3 + 0x20) + 4),
                       *(int *)(param_3 + 0x20) + 100);
  iVar8 = *(int *)(param_3 + 0x20);
  pfVar3 = *(float **)(param_3 + 0x24);
  if (_DAT_5f760078 < ABS(((float)*(int *)(iVar8 + 100 + iVar7 * 4) * fVar5 - *pfVar3) / *pfVar3)) {
    iVar8 = FUN_5f70dcf0(*pfVar3,param_1,*(int *)(iVar8 + 4),*(int *)(param_3 + 0x20) + 100);
    pfVar3 = *(float **)(param_3 + 0x24);
    fVar1 = *pfVar3;
    if (ABS(((float)*(int *)(*(int *)(param_3 + 0x20) + 100 + iVar8 * 4) * fVar5 - *pfVar3) /
            *pfVar3) <= _DAT_5f760074) {
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(*(int *)(param_3 + 0x20) + 100 + iVar8 * 4);
      fVar1 = **(float **)(param_3 + 0x24);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(iVar8 + 100 + iVar7 * 4);
    fVar1 = **(float **)(param_3 + 0x24);
  }
  if (fVar1 == **(float **)(param_2 + 0x24)) {
    local_4c = FUN_5f70dc20((float)*(int *)(param_2 + 0x10) * fVar4,param_1,
                            *(int *)(*(int *)(param_3 + 0x20) + 4),*(int *)(param_3 + 0x20) + 100);
    fVar1 = ABS(((float)*(int *)(*(int *)(param_3 + 0x20) + 100 + local_4c * 4) * fVar5 -
                **(float **)(param_3 + 0x24)) / **(float **)(param_3 + 0x24));
    if (_DAT_5f760078 <= fVar1) {
      local_4c = FUN_5f70dcf0((float)*(int *)(param_2 + 0x10) * fVar4,param_1,
                              *(int *)(*(int *)(param_3 + 0x20) + 4),*(int *)(param_3 + 0x20) + 100)
      ;
      fVar1 = ABS(((float)*(int *)(*(int *)(param_3 + 0x20) + 100 + local_4c * 4) * fVar5 -
                  **(float **)(param_3 + 0x24)) / **(float **)(param_3 + 0x24));
    }
    iVar7 = FUN_5f70dc20((float)*(int *)(param_3 + 0x10) * fVar5,param_1,
                         *(int *)(*(int *)(param_2 + 0x20) + 4),*(int *)(param_2 + 0x20) + 100);
    iVar8 = *(int *)(param_2 + 0x20);
    uVar9 = *(undefined4 *)(iVar8 + 100 + iVar7 * 4);
    fVar6 = ABS(((float)*(int *)(iVar8 + 100 + iVar7 * 4) * fVar4 - **(float **)(param_2 + 0x24)) /
                **(float **)(param_2 + 0x24));
    if (_DAT_5f760078 <= fVar6) {
      iVar8 = FUN_5f70dcf0((float)*(int *)(param_3 + 0x10) * fVar5,param_1,*(int *)(iVar8 + 4),
                           *(int *)(param_2 + 0x20) + 100);
      uVar9 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 100 + iVar8 * 4);
      fVar6 = ABS(((float)*(int *)(*(int *)(param_2 + 0x20) + 100 + iVar8 * 4) * fVar4 -
                  **(float **)(param_2 + 0x24)) / **(float **)(param_2 + 0x24));
    }
    if (fVar6 < fVar1) {
      if (fVar6 <= _DAT_5f760074) {
        *(undefined4 *)(param_2 + 0x10) = uVar9;
        return;
      }
      *(int *)(param_2 + 0x10) = *(int *)(param_3 + 0x10) * 3;
      return;
    }
    if (_DAT_5f760074 < fVar1) {
      dVar2 = (double)((float)(*(int *)(param_2 + 0x10) / 3) + _DAT_5f7600a0);
      uStack_54 = (uint)((ulonglong)dVar2 >> 0x20);
      local_58 = SUB84(dVar2,0);
      uVar10 = uStack_54 >> 0x14 & 0x7ff;
      if (uVar10 < 0x3ff) {
        uVar10 = 0;
      }
      else {
        uVar10 = (uStack_54 << 0xb | local_58 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar10 & 0x1f)
        ;
        if ((longlong)dVar2 < 0) {
          uVar10 = -uVar10;
        }
      }
      *(uint *)(param_3 + 0x10) = uVar10;
      return;
    }
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(*(int *)(param_3 + 0x20) + 100 + local_4c * 4)
    ;
  }
  return;
}


