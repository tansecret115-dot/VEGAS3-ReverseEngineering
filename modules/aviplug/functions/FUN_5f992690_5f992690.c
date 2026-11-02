/* Module: aviplug.dll
   Function: FUN_5f992690
   Address: 5f992690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f992690(void)

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
  DAT_5f9f5c44 = pdVar1;
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
    fVar3 = fVar3 * (float10)_DAT_5f9ec340 * (float10)_DAT_5f9ec338;
    fVar4 = fVar3 * (float10)_DAT_5f9ec330 + (float10)_DAT_5f9ec338;
    fVar5 = (float10)fcos(fVar4);
    fVar6 = (float10)fcos(fVar4 + fVar4);
    fVar4 = (float10)fcos(fVar4 * (float10)_DAT_5f9ec310);
    fVar7 = (float10)fsin(fVar3);
    *pdVar2 = (double)((fVar7 / fVar3) *
                      ((fVar6 * (float10)_DAT_5f9ec318 +
                       ((float10)_DAT_5f9ec320 - fVar5 * (float10)_DAT_5f9ec328)) -
                      fVar4 * (float10)_DAT_5f9ec308));
  } while (local_4 < 13000);
  DAT_5f9f5c40 = pdVar1;
  return 0;
}


