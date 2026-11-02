/* Module: mp3plug.dll
   Function: FUN_5f6f5400
   Address: 5f6f5400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6f5400(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,float param_7)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined1 local_694 [784];
  float afStack_384 [2];
  int aiStack_37c [200];
  float local_5c;
  float local_58;
  int local_54;
  int local_4c;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  double local_24;
  double local_1c;
  
  if (0 < param_5) {
    local_38 = param_5 * 0x31c;
    local_34 = param_2 + 0x2d;
    local_30 = param_2 + 0xa3;
    piVar6 = param_2 + 0x55;
    local_2c = param_2;
    iVar5 = 0;
    piVar4 = param_2;
    do {
      FUN_5f70bbc0((int)(local_694 + iVar5),(int)piVar6,(int)local_30,param_4,(int)local_34,
                   piVar4[0x2c],piVar4[0x29]);
      local_34 = local_34 + 0x2e5;
      param_4 = param_4 + 0x9c;
      iVar5 = iVar5 + 0x31c;
      piVar6 = piVar6 + 0x2e5;
      local_30 = local_30 + 0x2e5;
      piVar4 = piVar4 + 0x2e5;
    } while (iVar5 < local_38);
  }
  local_54 = 0;
  local_58 = 0.0;
  local_5c = 0.0;
  if (0 < param_5) {
    local_30 = (int *)(param_5 * 0x31c);
    local_34 = param_2 + 0xa3;
    piVar4 = param_2 + 0x55;
    iVar5 = 0;
    piVar6 = param_2;
    do {
      FUN_5f70bd40((int)(local_694 + iVar5),(int)piVar4,(int)local_34,piVar6[0x2c]);
      local_5c = *(float *)((int)afStack_384 + iVar5) + local_5c;
      local_58 = local_58 + *(float *)((int)afStack_384 + iVar5 + 4);
      local_54 = *(int *)((int)aiStack_37c + iVar5) + local_54;
      piVar1 = (int *)((int)afStack_384 + iVar5);
      iVar5 = iVar5 + 0x31c;
      piVar6[0x30d] = *piVar1;
      local_34 = local_34 + 0x2e5;
      piVar6 = piVar6 + 0x2e5;
      piVar4 = piVar4 + 0x2e5;
    } while (iVar5 < (int)local_30);
  }
  local_1c = (double)local_5c;
  fVar7 = (float10)log2((float10)local_5c / (float10)param_7 + (float10)_DAT_5f75e200);
  fVar7 = (float10)0.6931471805599453 * fVar7 * (float10)param_7;
  local_4c = param_6;
  if ((float10)_DAT_5f75e208 * (float10)param_6 * (float10)_DAT_5f75e204 <= fVar7) {
    local_24 = (double)((float10)param_6 * (float10)_DAT_5f75e204 * (float10)_DAT_5f75e23c);
  }
  else {
    local_24 = (double)fVar7;
  }
  if (local_24 < (double)local_5c) {
    FUN_5f6f59a0(param_2,(int)local_694,param_1 + 0x3fc,param_1 + 0x454,param_5,(float)local_24);
  }
  iVar5 = 0;
  if (0 < param_5) {
    do {
      fVar2 = _DAT_5f75e238;
      if (_DAT_5f75e20c != local_5c) {
        local_4c = param_5;
        fVar2 = (_DAT_5f75e210 - (float)param_5 * _DAT_5f75e214) *
                (afStack_384[iVar5 * 199] / local_5c) + _DAT_5f75e21c;
      }
      *(float *)(param_3 + iVar5 * 4) = fVar2;
      iVar3 = iVar5 + 1;
      if (param_5 <= iVar3) {
        return;
      }
      fVar2 = _DAT_5f75e234;
      if (_DAT_5f75e220 != local_5c) {
        local_4c = param_5;
        fVar2 = (_DAT_5f75e224 - (float)param_5 * _DAT_5f75e228) *
                (afStack_384[iVar3 * 199] / local_5c) + _DAT_5f75e230;
      }
      *(float *)(param_3 + iVar3 * 4) = fVar2;
      iVar5 = iVar5 + 2;
    } while (iVar5 < param_5);
  }
  return;
}


