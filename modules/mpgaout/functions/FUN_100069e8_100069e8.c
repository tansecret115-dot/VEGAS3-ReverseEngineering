/* Module: mpgaout.dll
   Function: FUN_100069e8
   Address: 100069e8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100069e8(uint param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  
  dVar8 = atan(1.0);
  iVar4 = 0;
  fVar2 = (float10)_DAT_100069e0;
  do {
    fVar7 = (float10)fcos((float10)iVar4 * (((float10)dVar8 * fVar2) / (float10)(int)param_1));
    (&DAT_10020cb0)[iVar4] = (double)fVar7;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  uVar5 = 0;
  DAT_100224b0 = 0;
  if (1 < (int)(param_1 - 1)) {
    iVar4 = 1;
    iVar6 = 0;
    do {
      iVar1 = iVar4 + 1;
      uVar3 = param_1;
      do {
        uVar3 = (int)uVar3 >> 1;
        uVar5 = uVar5 ^ uVar3;
      } while ((int)uVar5 < (int)uVar3);
      DAT_100224b0 = iVar6;
      if (iVar4 < (int)uVar5) {
        (&DAT_100214b0)[iVar6 * 2] = uVar5;
        DAT_100224b0 = iVar6 + 1;
        (&DAT_100214b4)[iVar6 * 2] = iVar4;
      }
      iVar4 = iVar1;
      iVar6 = DAT_100224b0;
    } while (iVar1 < (int)(param_1 - 1));
  }
  return;
}


