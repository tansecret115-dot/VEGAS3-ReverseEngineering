/* Module: vegas30k.dll
   Function: FUN_0102ee20
   Address: 0102ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0102ee20(void)

{
  HGLOBAL hMem;
  double *pdVar1;
  double *pdVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int local_4;
  
  hMem = GlobalAlloc(0,0x1f58);
  pdVar1 = GlobalLock(hMem);
  DAT_012099f8 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    return 0x8007000e;
  }
  *(undefined4 *)pdVar1 = 0;
  *(undefined4 *)((int)pdVar1 + 4) = 0x3ff00000;
  local_4 = 0xd;
  pdVar2 = pdVar1;
  do {
    pdVar2 = pdVar2 + 1;
    fVar3 = (float10)local_4;
    local_4 = local_4 + 0xd;
    fVar3 = fVar3 * (float10)_DAT_011dbdc0 * (float10)_DAT_011dbdb8;
    fVar4 = fVar3 * (float10)_DAT_011dbdb0 + (float10)_DAT_011dbdb8;
    fVar5 = (float10)fcos(fVar4);
    fVar6 = (float10)fcos(fVar4 + fVar4);
    fVar4 = (float10)fcos(fVar4 * (float10)_DAT_011dba48);
    fVar7 = (float10)fsin(fVar3);
    *pdVar2 = (double)((fVar7 / fVar3) *
                      ((fVar6 * (float10)_DAT_011dbd98 +
                       ((float10)_DAT_011dbda0 - fVar5 * (float10)_DAT_011dbda8)) -
                      fVar4 * (float10)_DAT_011dbd90));
  } while (local_4 < 13000);
  DAT_012099f4 = pdVar1;
  return 0;
}


