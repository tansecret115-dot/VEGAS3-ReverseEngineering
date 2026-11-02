/* Module: oggplug.dll
   Function: FUN_004408f0
   Address: 004408f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004408f0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  size_t sVar6;
  size_t _NumOfElements;
  size_t _NumOfElements_00;
  float10 fVar7;
  size_t local_14;
  float *local_10;
  
  _NumOfElements = param_3 + 1 >> 1;
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  _NumOfElements_00 = param_3 >> 1;
  *(undefined4 *)(&stack0xffffffdc + _NumOfElements * 4) = 0x3f800000;
  if (0 < (int)_NumOfElements) {
    pfVar3 = param_1 + param_3 + -1;
    pfVar4 = param_1;
    local_14 = _NumOfElements;
    local_10 = (float *)(&stack0xffffffd8 + _NumOfElements * 4);
    do {
      fVar1 = *pfVar3;
      fVar2 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + -1;
      *local_10 = fVar1 + fVar2;
      local_14 = local_14 - 1;
      local_10 = local_10 + -1;
    } while (local_14 != 0);
  }
  *(undefined4 *)(&stack0xffffffdc + _NumOfElements_00 * 4) = 0x3f800000;
  if (0 < (int)_NumOfElements_00) {
    pfVar3 = param_1 + param_3 + -1;
    pfVar4 = (float *)(&stack0xffffffd8 + _NumOfElements_00 * 4);
    sVar6 = _NumOfElements_00;
    do {
      fVar1 = *param_1;
      fVar2 = *pfVar3;
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + -1;
      sVar6 = sVar6 - 1;
      *pfVar4 = fVar1 - fVar2;
      pfVar4 = pfVar4 + -1;
    } while (sVar6 != 0);
  }
  if ((int)_NumOfElements_00 < (int)_NumOfElements) {
    if (1 < (int)_NumOfElements_00) {
      iVar5 = _NumOfElements_00 - 1;
      pfVar3 = (float *)(&stack0xffffffd4 + _NumOfElements_00 * 4);
      do {
        iVar5 = iVar5 + -1;
        *pfVar3 = pfVar3[2] + *pfVar3;
        pfVar3 = pfVar3 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (0 < (int)_NumOfElements) {
      pfVar3 = (float *)(&stack0xffffffd8 + _NumOfElements * 4);
      sVar6 = _NumOfElements;
      do {
        sVar6 = sVar6 - 1;
        *pfVar3 = *pfVar3 - pfVar3[1];
        pfVar3 = pfVar3 + -1;
      } while (sVar6 != 0);
    }
    if (0 < (int)_NumOfElements_00) {
      pfVar3 = (float *)(&stack0xffffffd8 + _NumOfElements_00 * 4);
      sVar6 = _NumOfElements_00;
      do {
        sVar6 = sVar6 - 1;
        *pfVar3 = pfVar3[1] + *pfVar3;
        pfVar3 = pfVar3 + -1;
      } while (sVar6 != 0);
    }
  }
  FUN_00440af0((float *)&stack0xffffffdc,_NumOfElements);
  FUN_00440af0((float *)&stack0xffffffdc,_NumOfElements_00);
  iVar5 = FUN_00440b60((float *)&stack0xffffffdc,_NumOfElements,(int)&stack0xffffffdc);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_00440b60((float *)&stack0xffffffdc,_NumOfElements_00,(int)&stack0xffffffdc),
     iVar5 == 0)) {
    FUN_00440cf0((int)&stack0xffffffdc,_NumOfElements,(float *)&stack0xffffffdc);
    FUN_00440cf0((int)&stack0xffffffdc,_NumOfElements_00,(float *)&stack0xffffffdc);
    qsort(&stack0xffffffdc,_NumOfElements,4,(_PtFuncCompare *)&LAB_00440b40);
    qsort(&stack0xffffffdc,_NumOfElements_00,4,(_PtFuncCompare *)&LAB_00440b40);
    if (0 < (int)_NumOfElements) {
      param_1 = param_2;
      do {
        fVar7 = (float10)_CIacos();
        *param_1 = (float)fVar7;
        param_1 = param_1 + 2;
        _NumOfElements = _NumOfElements - 1;
      } while (_NumOfElements != 0);
    }
    if (0 < (int)_NumOfElements_00) {
      pfVar3 = param_2 + 1;
      do {
        fVar7 = (float10)_CIacos();
        *pfVar3 = (float)fVar7;
        pfVar3 = pfVar3 + 2;
        _NumOfElements_00 = _NumOfElements_00 - 1;
      } while (_NumOfElements_00 != 0);
    }
    return 0;
  }
  return 0xffffffff;
}


