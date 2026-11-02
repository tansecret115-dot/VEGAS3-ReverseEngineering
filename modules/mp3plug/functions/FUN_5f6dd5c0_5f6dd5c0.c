/* Module: mp3plug.dll
   Function: FUN_5f6dd5c0
   Address: 5f6dd5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_5f6dd5c0(float param_1,float param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  
  dVar4 = pow((double)param_2,_DAT_5f75cf78);
  fVar3 = (float10)1.4426950408889634 *
          ((float10)param_1 - (float10)_DAT_5f75cf80) * (float10)_DAT_5f75cf84;
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(-(fVar2 - fVar3));
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  dVar4 = (double)(((float10)_DAT_5f75cf90 + (float10)param_2 +
                   (fVar2 - (float10)_DAT_5f75cf88) * (float10)dVar4) * (float10)_DAT_5f75cf98);
  uStack_54 = (uint)((ulonglong)dVar4 >> 0x20);
  local_58 = SUB84(dVar4,0);
  uVar1 = uStack_54 >> 0x14 & 0x7ff;
  if (uVar1 < 0x3ff) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uStack_54 << 0xb | local_58 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar1 & 0x1f);
    if ((longlong)dVar4 < 0) {
      uVar1 = -uVar1;
    }
  }
  return uVar1;
}


