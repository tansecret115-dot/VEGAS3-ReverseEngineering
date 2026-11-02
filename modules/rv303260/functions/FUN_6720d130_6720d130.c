/* Module: rv303260.dll
   Function: FUN_6720d130
   Address: 6720d130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6720d130(int param_1,int param_2,undefined4 param_3,float param_4,int param_5,int param_6,
            undefined4 param_7,int param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = param_4;
  uVar4 = *(uint *)(param_1 + 0x10);
  iVar3 = ftol();
  fVar5 = (extraout_ST0 / (float10)*(float *)(&DAT_67214db0 + iVar3 * 4)) *
          (float10)*(float *)(param_1 + 0x29);
  if (param_8 != 0) {
    if ((uint)param_4 < 0x30d41) {
      if ((uint)param_4 < 0x186a1) {
        if ((uint)param_4 < 0xd6d9) {
          fVar5 = (fVar5 + (float10)(int)param_4) * (float10)_DAT_67213428;
        }
        else {
          fVar5 = (float10)(uint)param_4 * (float10)_DAT_672133e8 - fVar5 * (float10)_DAT_67213424;
        }
      }
      else {
        fVar5 = (float10)(uint)param_4 * (float10)_DAT_6721341c - fVar5 * (float10)_DAT_67213420;
      }
    }
    else {
      fVar5 = (float10)(uint)param_4 * (float10)_DAT_67213410 - fVar5 * (float10)_DAT_67213414;
    }
    if (param_5 == 0) {
      fVar6 = (float10)_DAT_67213418;
      *(float *)(param_1 + 0x35) = (float)fVar5;
      *(float *)(param_1 + 0x31) = (float)(fVar5 * fVar6);
      return;
    }
    *(float *)(param_1 + 0x35) = (float)fVar5;
    *(float *)(param_1 + 0x31) = (float)fVar5;
    return;
  }
  if ((uint)param_4 < 0x927c1) {
    if ((uint)param_4 < 0x493e1) {
      if ((uint)param_4 < 0x30d41) {
        if ((uint)param_4 < 0x186a1) {
          fVar5 = (float10)(uint)param_4;
        }
        else {
          fVar5 = (fVar5 + (float10)(int)param_4) * (float10)_DAT_67213428;
        }
        fVar6 = fVar5 * (float10)_DAT_6721342c;
        fVar5 = fVar5 * (float10)_DAT_67213430;
      }
      else {
        fVar5 = (float10)(uint)param_4 * (float10)_DAT_672133e8 - fVar5 * (float10)_DAT_67213424;
        fVar6 = fVar5 * (float10)_DAT_67213418;
        fVar5 = fVar5 * (float10)_DAT_672133f4;
      }
    }
    else {
      fVar5 = (float10)(uint)param_4 * (float10)_DAT_6721341c - fVar5 * (float10)_DAT_67213420;
      fVar6 = fVar5 * (float10)_DAT_67213418;
      fVar5 = fVar5 * (float10)_DAT_672133f4;
    }
  }
  else {
    fVar5 = (float10)(uint)param_4 * (float10)_DAT_67213410 - fVar5 * (float10)_DAT_67213414;
    fVar6 = fVar5 * (float10)_DAT_67213418;
  }
  param_4 = (float)fVar6;
  fVar1 = _DAT_67213434;
  if ((uVar4 < 0x9c4) || (fVar1 = _DAT_672133f4, uVar4 < 0x1194)) {
    param_4 = param_4 * fVar1;
    fVar5 = fVar5 * (float10)fVar1;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 4);
    if (iVar3 + 0x21U < uVar4) {
      uVar4 = (iVar3 - uVar4) + 0x20;
    }
    else {
      uVar4 = (iVar3 - uVar4) + 0x21;
    }
    if (2000 < uVar4) {
      fVar1 = (*(float *)(param_2 + 0x25) / (float)*(uint *)(param_2 + 0xc)) *
              (((float)*(uint *)(param_2 + 0x14) * _DAT_672133e4) / (float)*(uint *)(param_1 + 0x10)
              );
      if (fVar1 < (float)(uint)(param_6 << 4)) {
        *(float *)(param_1 + 0x31) = param_4;
        *(float *)(param_1 + 0x35) =
             (float)(fVar5 + (float10)(int)((uint)((int)fVar2 * 1000) / *(uint *)(param_1 + 0x10)));
        return;
      }
      if ((float)(uint)(param_6 << 6) < fVar1) {
        fVar2 = param_4 * _DAT_67213434;
        *(float *)(param_1 + 0x35) = (float)(fVar5 * (float10)_DAT_67213434);
        *(float *)(param_1 + 0x31) = fVar2;
        return;
      }
    }
  }
  *(float *)(param_1 + 0x35) = (float)fVar5;
  *(float *)(param_1 + 0x31) = param_4;
  return;
}


