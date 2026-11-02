/* Module: rv203260.dll
   Function: FUN_638ad330
   Address: 638ad330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_638ad330(uint param_1,int param_2,int param_3,FILE *param_4)

{
  float fVar1;
  float fVar2;
  FILE *_File;
  size_t sVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  float local_c;
  int local_8;
  
  _File = param_4;
  local_8 = 0;
  local_c = 0.0;
  local_10 = 0;
  local_14 = 0;
  if ((param_4 == (FILE *)0x0) || (param_2 == 0)) {
    return 0;
  }
  rewind(param_4);
  while ((((sVar3 = fread(&local_1c,4,1,_File), sVar3 != 0 &&
           (sVar3 = fread((void *)((int)&param_4 + 3),1,1,_File), sVar3 != 0)) &&
          (sVar3 = fread(&local_30,4,1,_File), sVar3 != 0)) &&
         ((sVar3 = fread(&local_2c,1,1,_File), sVar3 != 0 &&
          (sVar3 = fread(&local_20,1,1,_File), sVar3 != 0))))) {
    local_8 = local_8 + 1;
    uStack_34 = local_1c;
    if (local_14 == 0) {
      local_18 = local_1c;
      local_14 = 1;
    }
    uStack_24 = local_2c;
    if (param_4._3_1_ == '\x01') {
      uStack_24 = local_20;
    }
    uStack_24 = uStack_24 & 0xff;
    local_c = local_c + (float)uStack_24;
    local_10 = local_10 + local_30;
  }
  local_28 = local_8;
  uStack_24 = 0;
  if (uStack_34 + 0x21 < local_18) {
    uVar7 = (uStack_34 - local_18) + 0x20;
  }
  else {
    uVar7 = (uStack_34 - local_18) + 0x21;
  }
  iVar4 = ftol();
  fVar2 = (float)local_10 * _DAT_638b33e8;
  fVar1 = *(float *)(&DAT_638b4cd8 + iVar4 * 4);
  iVar4 = 2;
  pfVar6 = (float *)&DAT_638b4ce0;
  do {
    iVar5 = ftol();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if ((float)(&DAT_638b4d60)[iVar5] * *pfVar6 * *(float *)(&DAT_638b4d88 + param_3 * 4) <
        ((float)param_1 * fVar1) / (fVar2 / (float)uVar7)) {
      return iVar4;
    }
    if (pfVar6 == (float *)&DAT_638b4d54) {
      return iVar4;
    }
    pfVar6 = pfVar6 + 1;
    iVar4 = iVar4 + 1;
  } while (pfVar6 < &DAT_638b4d58);
  return iVar4;
}


