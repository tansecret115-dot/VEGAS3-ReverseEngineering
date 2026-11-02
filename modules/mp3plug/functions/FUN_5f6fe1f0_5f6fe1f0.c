/* Module: mp3plug.dll
   Function: FUN_5f6fe1f0
   Address: 5f6fe1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6fe1f0(int param_1,int param_2,float param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  uint local_50;
  uint uStack_4c;
  
  iVar1 = FUN_5f6fe790(param_2,param_4,(int)(param_5 + 0x5d),param_5 + 0x5b);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_5f6fe750(param_5[0x5b],param_5 + 0x5d,param_5,param_5 + 2);
  if (param_4 == 2) {
    iVar1 = 0xc0;
  }
  else {
    iVar1 = 0x240;
  }
  dVar5 = (double)((float)iVar1 * ((_DAT_5f75e790 * param_3) / (float)param_2));
  uStack_4c = (uint)((ulonglong)dVar5 >> 0x20);
  local_50 = SUB84(dVar5,0);
  uVar4 = uStack_4c >> 0x14 & 0x7ff;
  if (uVar4 < 0x3ff) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uStack_4c << 0xb | local_50 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar4 & 0x1f);
    if ((longlong)dVar5 < 0) {
      uVar4 = -uVar4;
    }
  }
  param_5[0x1f6] = uVar4;
  if (param_2 < 32000) {
    if (param_2 < 16000) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  param_5[0x86] = iVar1;
  param_5[0x1f7] = 0x447a0000;
  if (param_4 == 2) {
    param_5[0x1f7] = (int)((float)param_5[0x1f7] * _DAT_5f75e79c);
  }
  iVar1 = *param_5;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      if (((param_5[0x1f6] <= param_5[iVar2 + 2]) || (iVar3 = iVar2 + 1, iVar1 <= iVar3)) ||
         (param_5[0x1f6] <= param_5[iVar2 + 3])) break;
      iVar2 = iVar2 + 2;
      iVar3 = iVar2;
    } while (iVar2 < iVar1);
  }
  iVar1 = 0;
  param_5[1] = iVar3;
  if (0 < param_5[0x5b]) {
    do {
      if (param_5[0x1f6] <= param_5[iVar1 + 0x5d]) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_5[0x5b]);
  }
  param_5[0x5c] = iVar1;
  if (param_1 < 0x17701) {
    param_5[0x8b] = 1;
  }
  else {
    param_5[0x8b] = 0;
  }
  dVar5 = pow(_DAT_5f75e7a0,_DAT_5f75e7a8);
  param_5[0x8d] = 7;
  param_5[0x8c] = (int)(float)dVar5;
  if (param_1 < 160000) {
    param_5[0x87] = 1;
  }
  else {
    param_5[0x87] = 0;
  }
  dVar5 = _DAT_5f75e7b0;
  param_5[0x88] = 0;
  dVar5 = pow(dVar5,_DAT_5f75e7b8);
  param_5[0x89] = (int)(float)dVar5;
  param_5[0x8a] = 0x3dcccccd;
  if (param_4 == 2) {
    iVar1 = 3;
  }
  else {
    iVar1 = 1;
  }
  param_5[0x85] = iVar1;
  dVar5 = _DAT_5f75e7d0;
  param_5[0x19b] = 0x41e80000;
  param_5[0x8e] = param_5[1];
  param_5[0x19a] = 0x41000000;
  param_5[0x8f] = 0;
  dVar5 = pow(dVar5,_DAT_5f75e7d8);
  param_5[500] = 0x40400000;
  param_5[0x1f8] = (int)(float)dVar5;
  param_5[0x1f5] = 0x3a83126f;
  return 0;
}


