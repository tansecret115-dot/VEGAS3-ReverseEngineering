/* Module: aviplug.dll
   Function: FUN_5f971740
   Address: 5f971740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f971740(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  double *pdVar5;
  uint unaff_ESI;
  int iVar6;
  undefined4 unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  int local_6c;
  code *local_68;
  code *local_64;
  double *local_60;
  int local_5c;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  double local_20;
  double local_18;
  double local_10;
  
  dVar10 = (double)(ulonglong)unaff_ESI;
  _DAT_5f9f52c8 = &DAT_5f9db278;
  _DAT_5f9f52cc = &DAT_5f9db378;
  _DAT_5f9f52dc = param_1[4] - param_1[5];
  _DAT_5f9f52d8 = (uint)(param_1[7] != 0) << ((char)_DAT_5f9f52dc - 1U & 0x1f);
  _DAT_5f9f52d4 = param_1[1] + *param_1;
  _DAT_5f9f54e0 = &DAT_5f9db478;
  _DAT_5f9f52d0 = (uint)(param_1[3] != 0) << ((char)_DAT_5f9f52d4 - 1U & 0x1f);
  _DAT_5f9f54e4 = &DAT_5f9db578;
  _DAT_5f9f4ab8 = &DAT_5f9db278;
  _DAT_5f9f4abc = &DAT_5f9db378;
  _DAT_5f9f4ec0 = &DAT_5f9db478;
  _DAT_5f9f4ec4 = &DAT_5f9db578;
  local_68 = FUN_5f967e40;
  if (param_1[2] == 0) {
    local_68 = FUN_5f967e80;
  }
  local_64 = FUN_5f967e40;
  if (param_1[6] == 0) {
    local_64 = FUN_5f967e80;
  }
  dVar3 = (double)CONCAT44(local_64,local_68);
  fVar7 = (float10)fcos((float10)_DAT_5f9daa70);
  iVar6 = 0;
  local_60 = (double *)&local_48;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0x3ff00000;
  local_28 = 0;
  local_24 = 0x3fec0000;
  local_6c = 0;
  fVar8 = (float10)fcos((float10)_DAT_5f9daa68);
  fVar9 = (float10)fcos((float10)_DAT_5f9daa40);
  local_40 = (double)(fVar7 / (fVar9 * fVar8 * (float10)_DAT_5f9e0188));
  fVar9 = (float10)fcos((float10)_DAT_5f9daa60);
  local_38 = (double)(fVar7 / (fVar9 + fVar9));
  fVar9 = (float10)fcos((float10)_DAT_5f9daa48);
  local_30 = (double)((float10)_DAT_5f9d7c98 / (fVar9 + fVar9));
  fVar9 = (float10)fcos((float10)_DAT_5f9daa50);
  local_20 = (double)(fVar7 / fVar9);
  local_18 = (double)(fVar7 / fVar8);
  fVar8 = (float10)fcos((float10)_DAT_5f9daa58);
  local_10 = (double)(fVar7 / fVar8);
  _DAT_5f9f54e8 = _DAT_5f9f52d0;
  _DAT_5f9f54ec = _DAT_5f9f52d4;
  _DAT_5f9f54f0 = _DAT_5f9f52d8;
  _DAT_5f9f54f4 = _DAT_5f9f52dc;
  do {
    pdVar5 = (double *)&local_48;
    local_5c = 8;
    do {
      local_64 = (code *)((ulonglong)dVar3 >> 0x20);
      local_68 = SUB84(dVar3,0);
      if (iVar6 == 0) {
        local_50 = _DAT_5f9d7cf8;
      }
      else {
        local_50 = *local_60 * *pdVar5 * _DAT_5f9d7ca0;
      }
      (&DAT_5f9f4cc0)[iVar6] = local_50;
      pcVar1 = (code *)param_1[1];
      uVar4 = (*local_68)((undefined4)local_50,local_50._4_4_);
      (&DAT_5f9f53e0)[iVar6] = uVar4;
      (&DAT_5f9f50c8)[iVar6] = CONCAT44(local_60,local_64);
      pcVar2 = (code *)param_1[1];
      uVar4 = (*SUB84(dVar10,0))(local_64,local_60);
      dVar3 = _DAT_5f9d7c98 / dVar3;
      (&DAT_5f9f55f8)[iVar6] = uVar4;
      (&DAT_5f9f4ac0)[iVar6] = dVar3;
      uVar4 = (*pcVar1)(dVar3,param_1[4]);
      dVar10 = _DAT_5f9d7c98 / (double)CONCAT44(unaff_EDI,pcVar1);
      (&DAT_5f9f52e0)[iVar6] = uVar4;
      (&DAT_5f9f4ec8)[iVar6] = dVar10;
      uVar4 = (*pcVar2)(dVar10,param_1[4]);
      (&DAT_5f9f54f8)[iVar6] = uVar4;
      iVar6 = iVar6 + 1;
      pdVar5 = pdVar5 + 1;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
    local_6c = local_6c + 1;
    local_60 = local_60 + 1;
  } while (local_6c < 8);
  return;
}


