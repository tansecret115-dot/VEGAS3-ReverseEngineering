/* Module: mpgaout.dll
   Function: FUN_100080d0
   Address: 100080d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100080d0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  
  dVar11 = pow(_DAT_100080a0,_DAT_10008098);
  if (*(int *)(param_1 + 4) == 1) {
    fVar7 = (float10)_DAT_100080a8;
    iVar5 = 0;
    iVar3 = 0;
    do {
      cVar1 = (char)iVar5;
      iVar5 = iVar5 + 1;
      fVar10 = fVar7 / (float10)((1 << (9U - cVar1 & 0x1f)) >> 1);
      fVar8 = (float10)fsin(fVar10);
      fVar10 = (float10)fcos(fVar10);
      *(double *)(param_1 + 0x382f0 + iVar3) = (double)fVar10;
      *(double *)(param_1 + 0x38340 + iVar3) = (double)-fVar8;
      iVar3 = iVar3 + 8;
    } while (iVar5 < 9);
    iVar3 = 0;
    do {
      iVar4 = 0;
      uVar6 = 0;
      iVar5 = iVar3 * 4;
      do {
        bVar2 = (byte)iVar4;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 | (iVar3 >> (bVar2 & 0x1f) & 1U) << (8 - bVar2 & 0x1f);
      } while (iVar4 < 9);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar5 + param_1 + 0x372f0) = uVar6;
    } while (iVar3 < 0x200);
    iVar3 = 0;
    fVar7 = (float10)_DAT_100080b0;
    fVar8 = (float10)_DAT_10008098;
    fVar10 = (float10)_DAT_100080b8;
    do {
      fVar9 = (float10)fcos((float10)iVar3 * fVar7);
      *(double *)(param_1 + 0x38390 + iVar3 * 8) =
           (double)(((float10)1 - fVar9) * fVar8 * (float10)dVar11 * fVar10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x200);
    iVar5 = 0x27f;
    FUN_1000a610(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 0x905c));
    FUN_1000a6cc(param_1,(undefined4 *)(param_1 + 0x44d90),*(int *)(param_1 + 4),
                 *(int *)(param_1 + 0x905c));
    FUN_1000a780(param_1,param_1 + 0x41d90,*(int *)(param_1 + 0x44d90));
    iVar3 = 0;
    do {
      *(undefined4 *)(param_1 + 0x3f190 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3f194 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3c590 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3c594 + iVar3) = 0;
      iVar3 = iVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    fVar7 = (float10)_DAT_100080a8;
    iVar5 = 0;
    iVar3 = 0;
    do {
      cVar1 = (char)iVar5;
      iVar5 = iVar5 + 1;
      fVar10 = fVar7 / (float10)((1 << (10U - cVar1 & 0x1f)) >> 1);
      fVar8 = (float10)fsin(fVar10);
      fVar10 = (float10)fcos(fVar10);
      *(double *)(param_1 + 0x382f0 + iVar3) = (double)fVar10;
      *(double *)(param_1 + 0x38340 + iVar3) = (double)-fVar8;
      iVar3 = iVar3 + 8;
    } while (iVar5 < 10);
    iVar3 = 0;
    do {
      iVar4 = 0;
      uVar6 = 0;
      iVar5 = iVar3 * 4;
      do {
        bVar2 = (byte)iVar4;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 | (iVar3 >> (bVar2 & 0x1f) & 1U) << (9 - bVar2 & 0x1f);
      } while (iVar4 < 10);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar5 + param_1 + 0x372f0) = uVar6;
    } while (iVar3 < 0x400);
    iVar3 = 0;
    fVar7 = (float10)_DAT_100080c0;
    fVar8 = (float10)_DAT_10008098;
    fVar10 = (float10)_DAT_100080c8;
    do {
      fVar9 = (float10)fcos((float10)iVar3 * fVar7);
      *(double *)(param_1 + 0x38390 + iVar3 * 8) =
           (double)(((float10)1 - fVar9) * fVar8 * (float10)dVar11 * fVar10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x400);
    iVar5 = 0x57f;
    FUN_1000a610(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 0x905c));
    FUN_1000a6cc(param_1,(undefined4 *)(param_1 + 0x44d90),*(int *)(param_1 + 4),
                 *(int *)(param_1 + 0x905c));
    FUN_1000a780(param_1,param_1 + 0x41d90,*(int *)(param_1 + 0x44d90));
    iVar3 = 0;
    do {
      *(undefined4 *)(param_1 + 0x3f190 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3f194 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3c590 + iVar3) = 0;
      *(undefined4 *)(param_1 + 0x3c594 + iVar3) = 0;
      iVar3 = iVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 0x44d94) = 0x100;
  *(undefined4 *)(param_1 + 0x44d98) = 0x100;
  return;
}


