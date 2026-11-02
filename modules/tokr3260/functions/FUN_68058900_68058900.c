/* Module: tokr3260.dll
   Function: FUN_68058900
   Address: 68058900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68058900(size_t param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float *_Memory;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int local_c;
  
  iVar7 = (int)param_1 / 2;
  _Memory = calloc(param_1,4);
  if (_Memory == (float *)0x0) {
    return 0xfff0bdc1;
  }
  iVar3 = FUN_68058730(param_1,param_2,param_3,param_4,param_5,_Memory);
  if (iVar3 == -999999) {
    return 0xfff0bdc1;
  }
  local_c = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  if (0 < local_c) {
    param_1 = param_1 << 2;
    iVar3 = iVar7 * 4;
    pfVar4 = _Memory;
    pfVar5 = _Memory + iVar7;
    do {
      fVar1 = *(float *)((int)_Memory + iVar3 + -4);
      fVar2 = *pfVar4;
      iVar6 = param_1 - 4;
      iVar7 = iVar3 + -4;
      fVar1 = *pfVar4 * *pfVar4 + fVar1 * fVar1;
      param_1 = param_1 - 4;
      iVar3 = iVar3 + -4;
      pfVar4 = pfVar4 + 1;
      *(float *)((param_6 - (int)_Memory) + -4 + (int)pfVar4) = fVar2 / fVar1;
      *(float *)(param_6 + iVar7) = *(float *)((int)_Memory + iVar7) / fVar1;
      fVar1 = *pfVar5 * *pfVar5 +
              *(float *)((int)_Memory + iVar6) * *(float *)((int)_Memory + iVar6);
      *(float *)(param_6 + iVar6) = *(float *)((int)_Memory + iVar6) / fVar1;
      *(float *)((param_6 - (int)_Memory) + -4 + (int)(pfVar5 + 1)) = *pfVar5 / fVar1;
      local_c = local_c + -1;
      pfVar5 = pfVar5 + 1;
    } while (local_c != 0);
  }
  free(_Memory);
  return 0;
}


