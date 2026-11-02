/* Module: rv203260.dll
   Function: FUN_638adc40
   Address: 638adc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_638adc40(int param_1,int param_2,undefined4 param_3,float param_4,int param_5,undefined4 param_6
            ,undefined4 param_7,int param_8)

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
  fVar5 = (extraout_ST0 / (float10)*(float *)(&DAT_638b4cd8 + iVar3 * 4)) *
          (float10)*(float *)(param_1 + 0x25);
  if (param_8 != 0) {
    if (200000 < (uint)param_4) {
      fVar6 = (float10)(uint)param_4 * (float10)_DAT_638b3408 - fVar5 * (float10)_DAT_638b340c;
      fVar5 = (float10)_DAT_638b3410;
      *(float *)(param_1 + 0x31) = (float)fVar6;
      *(float *)(param_1 + 0x2d) = (float)(fVar6 * fVar5);
      return;
    }
    if ((uint)param_4 < 0x186a1) {
      if ((uint)param_4 < 0xd6d9) {
        fVar6 = (fVar5 + (float10)(int)param_4) * (float10)_DAT_638b3420;
        fVar5 = (float10)_DAT_638b3410;
        *(float *)(param_1 + 0x31) = (float)fVar6;
        *(float *)(param_1 + 0x2d) = (float)(fVar6 * fVar5);
        return;
      }
      fVar6 = (float10)(uint)param_4 * (float10)_DAT_638b33f8 - fVar5 * (float10)_DAT_638b341c;
      fVar5 = (float10)_DAT_638b3410;
      *(float *)(param_1 + 0x31) = (float)fVar6;
      *(float *)(param_1 + 0x2d) = (float)(fVar6 * fVar5);
      return;
    }
    fVar6 = (float10)(uint)param_4 * (float10)_DAT_638b3414 - fVar5 * (float10)_DAT_638b3418;
    fVar5 = (float10)_DAT_638b3410;
    *(float *)(param_1 + 0x31) = (float)fVar6;
    *(float *)(param_1 + 0x2d) = (float)(fVar6 * fVar5);
    return;
  }
  if ((uint)param_4 < 0x927c1) {
    if ((uint)param_4 < 0x493e1) {
      if ((uint)param_4 < 0x30d41) {
        if ((uint)param_4 < 0x186a1) {
          fVar5 = (float10)(uint)param_4;
        }
        else {
          fVar5 = (fVar5 + (float10)(int)param_4) * (float10)_DAT_638b3420;
        }
        fVar6 = fVar5 * (float10)_DAT_638b3424;
        fVar5 = fVar5 * (float10)_DAT_638b3428;
      }
      else {
        fVar5 = (float10)(uint)param_4 * (float10)_DAT_638b33f8 - fVar5 * (float10)_DAT_638b341c;
        fVar6 = fVar5 * (float10)_DAT_638b3410;
        fVar5 = fVar5 * (float10)_DAT_638b3400;
      }
    }
    else {
      fVar5 = (float10)(uint)param_4 * (float10)_DAT_638b3414 - fVar5 * (float10)_DAT_638b3418;
      fVar6 = fVar5 * (float10)_DAT_638b3410;
      fVar5 = fVar5 * (float10)_DAT_638b3400;
    }
  }
  else {
    fVar5 = (float10)(uint)param_4 * (float10)_DAT_638b3408 - fVar5 * (float10)_DAT_638b340c;
    fVar6 = fVar5 * (float10)_DAT_638b3410;
  }
  param_4 = (float)fVar6;
  fVar1 = _DAT_638b342c;
  if ((uVar4 < 0x9c4) || (fVar1 = _DAT_638b3400, uVar4 < 0x1194)) {
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
      fVar1 = (*(float *)(param_2 + 0x21) / (float)*(uint *)(param_2 + 0xc)) *
              (((float)*(uint *)(param_2 + 0x14) * _DAT_638b33e8) / (float)*(uint *)(param_1 + 0x10)
              );
      if (fVar1 < (float)(uint)(param_5 << 4)) {
        *(float *)(param_1 + 0x2d) = param_4;
        *(float *)(param_1 + 0x31) =
             (float)(fVar5 + (float10)(int)((uint)((int)fVar2 * 1000) / *(uint *)(param_1 + 0x10)));
        return;
      }
      if ((float)(uint)(param_5 << 6) < fVar1) {
        fVar2 = param_4 * _DAT_638b342c;
        *(float *)(param_1 + 0x31) = (float)(fVar5 * (float10)_DAT_638b342c);
        *(float *)(param_1 + 0x2d) = fVar2;
        return;
      }
    }
  }
  *(float *)(param_1 + 0x31) = (float)fVar5;
  *(float *)(param_1 + 0x2d) = param_4;
  return;
}


