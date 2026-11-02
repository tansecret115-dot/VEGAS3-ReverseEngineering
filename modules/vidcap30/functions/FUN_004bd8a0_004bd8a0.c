/* Module: vidcap30.exe
   Function: FUN_004bd8a0
   Address: 004bd8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004bd8a0(void)

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
  DAT_005c22f0 = pdVar1;
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
    fVar3 = fVar3 * (float10)_DAT_0058a5f8 * (float10)_DAT_0059a168;
    fVar4 = fVar3 * (float10)_DAT_0059a160 + (float10)_DAT_0059a168;
    fVar5 = (float10)fcos(fVar4);
    fVar6 = (float10)fcos(fVar4 + fVar4);
    fVar4 = (float10)fcos(fVar4 * (float10)_DAT_0059a140);
    fVar7 = (float10)fsin(fVar3);
    *pdVar2 = (double)((fVar7 / fVar3) *
                      ((fVar6 * (float10)_DAT_0059a148 +
                       ((float10)_DAT_0059a150 - fVar5 * (float10)_DAT_0059a158)) -
                      fVar4 * (float10)_DAT_0059a138));
  } while (local_4 < 13000);
  DAT_005c22ec = pdVar1;
  return 0;
}


