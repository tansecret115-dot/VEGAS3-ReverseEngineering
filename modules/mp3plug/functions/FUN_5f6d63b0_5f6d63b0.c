/* Module: mp3plug.dll
   Function: FUN_5f6d63b0
   Address: 5f6d63b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d63b0(float param_1,float param_2,float *param_3,float *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_3 | (uint)param_4) & 0xf) != 0)) {
    if ((param_5 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      fVar1 = *param_3;
      fVar2 = param_1;
      if ((param_1 <= fVar1) && (fVar2 = fVar1, param_2 < fVar1)) {
        fVar2 = param_2;
      }
      *param_4 = fVar2;
      iVar4 = 1;
    }
    for (; iVar4 < (int)param_5; iVar4 = iVar4 + 2) {
      fVar1 = param_3[iVar4];
      fVar2 = param_1;
      if ((param_1 <= fVar1) && (fVar2 = fVar1, param_2 < fVar1)) {
        fVar2 = param_2;
      }
      fVar1 = param_3[iVar4 + 1];
      fVar3 = param_1;
      if ((param_1 <= fVar1) && (fVar3 = fVar1, param_2 < fVar1)) {
        fVar3 = param_2;
      }
      param_4[iVar4] = fVar2;
      param_4[iVar4 + 1] = fVar3;
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)(param_5 & 0xfffffffc)) {
      iVar4 = 0;
      do {
        auVar5._4_4_ = param_1;
        auVar5._0_4_ = param_1;
        auVar5._8_4_ = param_1;
        auVar5._12_4_ = param_1;
        auVar5 = maxps(*(undefined1 (*) [16])(param_3 + iVar4),auVar5);
        auVar6._4_4_ = param_2;
        auVar6._0_4_ = param_2;
        auVar6._8_4_ = param_2;
        auVar6._12_4_ = param_2;
        auVar6 = minps(auVar5,auVar6);
        *(undefined1 (*) [16])(param_4 + iVar4) = auVar6;
        iVar4 = iVar4 + 4;
      } while (iVar4 < (int)(param_5 & 0xfffffffc));
    }
    for (; iVar4 < (int)param_5; iVar4 = iVar4 + 1) {
      fVar1 = param_3[iVar4];
      fVar2 = param_1;
      if ((param_1 <= fVar1) && (fVar2 = fVar1, param_2 < fVar1)) {
        fVar2 = param_2;
      }
      param_4[iVar4] = fVar2;
    }
  }
  return;
}


