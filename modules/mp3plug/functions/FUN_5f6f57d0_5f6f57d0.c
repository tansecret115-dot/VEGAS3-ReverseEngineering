/* Module: mp3plug.dll
   Function: FUN_5f6f57d0
   Address: 5f6f57d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6f57d0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  
  fVar2 = _DAT_5f75e244 * param_2;
  fVar1 = param_2 * _DAT_5f75e240;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0x3f800000;
  *(float *)(param_1 + 0x3a8) = fVar1;
  *(float *)(param_1 + 0x3ac) = fVar2;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 1000) = 0xbcf5c28f;
  *(undefined4 *)(param_1 + 0x3c8) = 0xbcf5c28f;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3c0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3d0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3dc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3e0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3b8) = 0xbd4ccccd;
  *(undefined4 *)(param_1 + 0x3d8) = 0xbd4ccccd;
  *(undefined4 *)(param_1 + 0x3cc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3b4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x3c4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x3d4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x3bc) = 0x3e99999a;
  dVar4 = pow(_DAT_5f75e290,(double)(_DAT_5f75e298 * (float)-param_3));
  fVar2 = _DAT_5f75e29c;
  if (47999 < param_3) {
    fVar2 = _DAT_5f75e2a0;
  }
  iVar3 = -0x16;
  do {
    fVar1 = *(float *)(iVar3 * 4 + 0x5f74193c);
    if (fVar1 <= (float)dVar4) {
      fVar1 = (float)dVar4;
    }
    *(float *)(param_1 + 0x454 + iVar3 * 4) = fVar1;
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    *(float *)(param_1 + 0x454 + iVar3 * 4) = fVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0);
  dVar4 = pow(_DAT_5f75e2a8,(double)(_DAT_5f75e2b0 * (float)-param_3));
  iVar3 = -0x34;
  do {
    fVar2 = *(float *)((int)&DAT_5f7418e4 + iVar3);
    if (*(float *)((int)&DAT_5f7418e4 + iVar3) <= (float)dVar4) {
      fVar2 = (float)dVar4;
    }
    *(float *)(param_1 + 0x454) = fVar2;
    *(float *)(param_1 + 0x458) = fVar2;
    *(float *)(param_1 + 0x45c) = fVar2;
    param_1 = param_1 + 0xc;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0);
  return;
}


