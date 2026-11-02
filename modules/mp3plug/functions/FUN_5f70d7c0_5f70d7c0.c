/* Module: mp3plug.dll
   Function: FUN_5f70d7c0
   Address: 5f70d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl FUN_5f70d7c0(int param_1,uint param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = 0;
  while ((((param_2 < (uint)(&DAT_5f74bc00)[uVar4 * 0x1f] ||
           ((uint)(&DAT_5f74bc04)[uVar4 * 0x1f] <= param_2)) ||
          (param_3 < (float)(&DAT_5f74bc08)[uVar4 * 0x1f])) ||
         ((float)(&DAT_5f74bc0c)[uVar4 * 0x1f] < param_3))) {
    uVar4 = uVar4 + 1;
    if (0x25 < uVar4) {
      return (float *)0x0;
    }
  }
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) {
    pfVar3 = (float *)FUN_5f6d9760(0x34);
    if (pfVar3 == (float *)0x0) {
      return (float *)0x0;
    }
    *pfVar3 = (float)(&DAT_5f74bc14)[uVar4 * 0x1f];
    pfVar3[1] = (float)(&DAT_5f74bc18)[uVar4 * 0x1f];
    pfVar3[2] = (float)(&DAT_5f74bc1c)[uVar4 * 0x1f];
    pfVar3[3] = (float)(&DAT_5f74bc20)[uVar4 * 0x1f];
    pfVar3[4] = (float)(&DAT_5f74bc24)[uVar4 * 0x1f];
    pfVar3[5] = (float)(&DAT_5f74bc28)[uVar4 * 0x1f];
    pfVar3[6] = (float)(&DAT_5f74bc2c)[uVar4 * 0x1f];
    pfVar3[7] = (float)(&DAT_5f74bc30)[uVar4 * 0x1f];
    pfVar3[8] = (float)(&DAT_5f74bc34)[uVar4 * 0x1f];
    pfVar3[9] = (float)(&DAT_5f74bc38)[uVar4 * 0x1f];
    pfVar3[10] = (float)(&DAT_5f74bc3c)[uVar4 * 0x1f];
    pfVar3[0xb] = (float)(&DAT_5f74bc40)[uVar4 * 0x1f];
    pfVar3[0xc] = (float)(&DAT_5f74bc44)[uVar4 * 0x1f];
    if (param_4 == 1.4013e-45) {
      *pfVar3 = (float)(&DAT_5f74bc10)[uVar4 * 0x1f];
      fVar1 = (float)(&DAT_5f74bc8c)[uVar4 * 0x1f] - (float)(&DAT_5f74bc10)[uVar4 * 0x1f];
    }
    else {
      fVar1 = (float)(&DAT_5f74bc90)[uVar4 * 0x1f] - (float)(&DAT_5f74bc14)[uVar4 * 0x1f];
    }
    fVar2 = _DAT_5f763ef4 * param_4;
    fVar1 = *pfVar3 + (float)(param_2 - (&DAT_5f74bc00)[uVar4 * 0x1f]) *
                      (fVar1 / (float)(uint)((&DAT_5f74bc04)[uVar4 * 0x1f] -
                                            (&DAT_5f74bc00)[uVar4 * 0x1f]));
    *pfVar3 = fVar1;
    if (fVar1 <= fVar2) {
      return pfVar3;
    }
    *pfVar3 = fVar2;
    return pfVar3;
  }
  if (param_1 != 2) {
    return (float *)0x0;
  }
  pfVar3 = (float *)FUN_5f6d9760(0x34);
  if (pfVar3 == (float *)0x0) {
    return (float *)0x0;
  }
  *pfVar3 = (float)(&DAT_5f74bc48)[uVar4 * 0x1f];
  pfVar3[1] = (float)(&DAT_5f74bc4c)[uVar4 * 0x1f];
  pfVar3[2] = (float)(&DAT_5f74bc50)[uVar4 * 0x1f];
  pfVar3[3] = (float)(&DAT_5f74bc54)[uVar4 * 0x1f];
  pfVar3[4] = (float)(&DAT_5f74bc58)[uVar4 * 0x1f];
  pfVar3[5] = (float)(&DAT_5f74bc5c)[uVar4 * 0x1f];
  pfVar3[6] = (float)(&DAT_5f74bc60)[uVar4 * 0x1f];
  pfVar3[7] = (float)(&DAT_5f74bc64)[uVar4 * 0x1f];
  pfVar3[8] = (float)(&DAT_5f74bc68)[uVar4 * 0x1f];
  pfVar3[9] = (float)(&DAT_5f74bc6c)[uVar4 * 0x1f];
  pfVar3[10] = (float)(&DAT_5f74bc70)[uVar4 * 0x1f];
  pfVar3[0xb] = (float)(&DAT_5f74bc74)[uVar4 * 0x1f];
  pfVar3[0xc] = (float)(&DAT_5f74bc78)[uVar4 * 0x1f];
  if (param_4 == 1.4013e-45) {
    *pfVar3 = (float)(&DAT_5f74bc10)[uVar4 * 0x1f];
    fVar1 = (float)(&DAT_5f74bc8c)[uVar4 * 0x1f] - (float)(&DAT_5f74bc10)[uVar4 * 0x1f];
  }
  else {
    fVar1 = (float)(&DAT_5f74bcc4)[uVar4 * 0x1f] - (float)(&DAT_5f74bc48)[uVar4 * 0x1f];
  }
  fVar2 = _DAT_5f763efc * param_4;
  fVar1 = *pfVar3 + (float)(param_2 - (&DAT_5f74bc00)[uVar4 * 0x1f]) *
                    (fVar1 / (float)(uint)((&DAT_5f74bc04)[uVar4 * 0x1f] -
                                          (&DAT_5f74bc00)[uVar4 * 0x1f]));
  *pfVar3 = fVar1;
  if (fVar1 <= fVar2) {
    return pfVar3;
  }
  *pfVar3 = fVar2;
  return pfVar3;
}


