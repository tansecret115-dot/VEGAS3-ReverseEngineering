/* Module: mcmpgdec.dll
   Function: FUN_100014e0
   Address: 100014e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014e0(void)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  dVar8 = atan(1.0);
  iVar4 = 0;
  iVar2 = 0;
  fVar1 = (float10)_DAT_100014d8;
  do {
    fVar6 = (float10)iVar4;
    iVar4 = iVar4 + 1;
    fVar6 = fVar6 * ((float10)dVar8 + (float10)dVar8) * fVar1;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    *(double *)((int)&DAT_10035000 + iVar2) = (double)fVar6;
    *(double *)((int)&DAT_10035100 + iVar2) = (double)fVar7;
    iVar2 = iVar2 + 8;
  } while (iVar4 < 0x20);
  DAT_10035280 = 0;
  uVar5 = 0;
  iVar2 = 1;
  do {
    uVar3 = 0x10;
    uVar5 = uVar5 ^ 0x10;
    if (uVar5 < 0x10) {
      do {
        uVar3 = (int)uVar3 >> 1;
        uVar5 = uVar5 ^ uVar3;
      } while (uVar5 < uVar3);
    }
    if (iVar2 < (int)uVar5) {
      (&DAT_10035200)[DAT_10035280 * 2] = uVar5;
      (&DAT_10035204)[DAT_10035280 * 2] = iVar2;
      DAT_10035280 = DAT_10035280 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  uVar5 = 0;
  iVar2 = 0;
  do {
    (&DAT_10035290)[iVar2] = uVar5;
    uVar3 = 8;
    uVar5 = uVar5 ^ 8;
    iVar2 = iVar2 + 1;
    if (uVar5 < 8) {
      do {
        uVar3 = (int)uVar3 >> 1;
        uVar5 = uVar5 ^ uVar3;
      } while (uVar5 < uVar3);
    }
  } while (iVar2 < 8);
  return;
}


