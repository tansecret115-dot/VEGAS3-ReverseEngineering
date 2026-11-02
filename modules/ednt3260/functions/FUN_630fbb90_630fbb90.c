/* Module: ednt3260.dll
   Function: FUN_630fbb90
   Address: 630fbb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630fbb90(short *param_1,short *param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  sVar2 = *param_1;
  param_1 = (short *)(int)param_5;
  if (0 < (int)param_1) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      sVar2 = sVar1 - sVar2;
      *psVar3 = sVar2;
      if (sVar2 < -2) {
        FUN_630f92d0();
      }
      if (2 < *psVar3) {
        FUN_630f92d0();
      }
      psVar3 = psVar3 + param_3;
      param_1 = (short *)((int)param_1 + -1);
      sVar2 = sVar1;
    } while (param_1 != (short *)0x0);
  }
  iVar4 = (int)param_5;
  if (0 < iVar4) {
    psVar3 = param_2;
    do {
      *psVar3 = *psVar3 + 2;
      psVar3 = psVar3 + param_3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0 < param_5) {
    iVar4 = (int)param_3;
    local_10 = iVar4 * 2;
    param_1 = param_2 + iVar4 * 2;
    _param_3 = param_2;
    _param_5 = ((int)param_5 + 2U) / 3;
    psVar3 = param_2;
    param_2 = param_2 + iVar4;
    local_c = iVar4;
    do {
      sVar2 = *_param_3 * 0x19;
      if (local_c < param_4) {
        sVar2 = sVar2 + *param_2 * 5;
      }
      if (local_10 < param_4) {
        sVar2 = sVar2 + *param_1;
      }
      if (0x7c < sVar2) {
        FUN_630f92d0();
      }
      *psVar3 = sVar2;
      _param_3 = _param_3 + iVar4 * 3;
      param_2 = param_2 + iVar4 * 3;
      param_1 = param_1 + iVar4 * 3;
      psVar3 = psVar3 + 1;
      local_c = local_c + iVar4 * 3;
      local_10 = local_10 + iVar4 * 3;
      _param_5 = _param_5 - 1;
    } while (_param_5 != 0);
  }
  return;
}


