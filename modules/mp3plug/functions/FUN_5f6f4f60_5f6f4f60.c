/* Module: mp3plug.dll
   Function: FUN_5f6f4f60
   Address: 5f6f4f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6f4f60(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  undefined1 *in_stack_fffff944;
  int *in_stack_fffff948;
  undefined1 local_69c [784];
  float afStack_38c [2];
  int aiStack_384 [200];
  float local_64;
  float local_60;
  int local_5c;
  int local_54;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  double local_2c;
  double local_24;
  double local_1c;
  int local_14;
  
  if (0 < param_5) {
    local_40 = (int *)(param_5 * 0x31c);
    local_3c = param_2 + 0x2d;
    local_38 = param_2 + 0xa3;
    piVar6 = param_2 + 0x55;
    local_34 = param_2;
    iVar5 = 0;
    piVar4 = param_2;
    local_30 = piVar6;
    do {
      in_stack_fffff944 = local_69c + iVar5;
      in_stack_fffff948 = piVar6;
      FUN_5f70bbc0((int)in_stack_fffff944,(int)piVar6,(int)local_38,param_4,(int)local_3c,
                   piVar4[0x2c],piVar4[0x29]);
      local_3c = local_3c + 0x2e5;
      local_38 = local_38 + 0x2e5;
      param_4 = param_4 + 0x9c;
      iVar5 = iVar5 + 0x31c;
      piVar6 = piVar6 + 0x2e5;
      piVar4 = piVar4 + 0x2e5;
    } while (iVar5 < (int)local_40);
  }
  local_5c = 0;
  local_60 = 0.0;
  local_64 = 0.0;
  if (0 < param_5) {
    local_38 = (int *)(param_5 * 0x31c);
    local_3c = param_2 + 0xa3;
    local_40 = param_2;
    piVar6 = param_2 + 0x55;
    iVar5 = 0;
    piVar4 = param_2;
    do {
      in_stack_fffff944 = local_69c + iVar5;
      in_stack_fffff948 = piVar6;
      FUN_5f70bd40((int)in_stack_fffff944,(int)piVar6,(int)local_3c,piVar4[0x2c]);
      local_64 = *(float *)((int)afStack_38c + iVar5) + local_64;
      local_60 = local_60 + *(float *)((int)afStack_38c + iVar5 + 4);
      local_3c = local_3c + 0x2e5;
      local_5c = *(int *)((int)aiStack_384 + iVar5) + local_5c;
      piVar1 = (int *)((int)afStack_38c + iVar5);
      iVar5 = iVar5 + 0x31c;
      piVar4[0x30d] = *piVar1;
      piVar4 = piVar4 + 0x2e5;
      piVar6 = piVar6 + 0x2e5;
    } while (iVar5 < (int)local_38);
  }
  local_24 = (double)local_64;
  local_30 = (int *)param_6;
  fVar7 = FUN_5f6f4c90(param_6,param_8);
  local_54 = param_7;
  fVar8 = ((float10)param_7 * ((float10)_DAT_5f75e1b4 / (float10)(int)local_30) +
          (float10)_DAT_5f75e1b8) - (float10)_DAT_5f75e1bc;
  if (fVar7 < fVar8) {
    fVar8 = fVar7;
  }
  local_1c = (double)((float10)(int)local_30 * fVar8 * (float10)_DAT_5f75e1c0);
  FUN_5f6f4e50(param_1 + 0x3f8,*(int *)(param_1 + 0x3f4),in_stack_fffff944,in_stack_fffff948,
               *(float *)(param_1 + 0x3f0));
  fVar2 = *(float *)(param_1 + 0x3f8) * (float)local_1c;
  local_2c = (double)fVar2;
  if (fVar2 < (float)local_24) {
    local_14 = param_3;
    FUN_5f6f59a0(param_2,(int)local_69c,param_1 + 0x3fc,param_1 + 0x454,param_5,fVar2);
  }
  iVar5 = 0;
  if (0 < param_5) {
    do {
      fVar2 = _DAT_5f75e1f0;
      if (_DAT_5f75e1c4 != local_64) {
        local_54 = param_5;
        fVar2 = (_DAT_5f75e1c8 - (float)param_5 * _DAT_5f75e1cc) *
                (afStack_38c[iVar5 * 199] / local_64) + _DAT_5f75e1d4;
      }
      *(float *)(param_3 + iVar5 * 4) = fVar2;
      iVar3 = iVar5 + 1;
      if (param_5 <= iVar3) break;
      fVar2 = _DAT_5f75e1ec;
      if (_DAT_5f75e1d8 != local_64) {
        local_54 = param_5;
        fVar2 = (_DAT_5f75e1dc - (float)param_5 * _DAT_5f75e1e0) *
                (afStack_38c[iVar3 * 199] / local_64) + _DAT_5f75e1e8;
      }
      *(float *)(param_3 + iVar3 * 4) = fVar2;
      iVar5 = iVar5 + 2;
    } while (iVar5 < param_5);
  }
  *(float *)(param_1 + 0x3f0) = (float)local_1c;
  return;
}


