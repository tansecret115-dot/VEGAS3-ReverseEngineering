/* Module: mpgaout.dll
   Function: FUN_10003140
   Address: 10003140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003140(int param_1)

{
  float10 fVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  
  if (DAT_1001e310 == 0) {
    DAT_1001e310 = 1;
    iVar5 = 0;
    dVar9 = atan(1.0);
    fVar1 = (float10)_DAT_10003130;
    do {
      fVar8 = (float10)fcos((float10)iVar5 * ((float10)dVar9 + (float10)dVar9) * fVar1);
      (&DAT_10020b00)[iVar5] = (double)fVar8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    DAT_10020c80 = 0;
    uVar6 = 0;
    iVar5 = 1;
    do {
      uVar2 = 0x10;
      uVar6 = uVar6 ^ 0x10;
      if (uVar6 < 0x10) {
        do {
          uVar2 = (int)uVar2 >> 1;
          uVar6 = uVar6 ^ uVar2;
        } while (uVar6 < uVar2);
      }
      if (iVar5 < (int)uVar6) {
        (&DAT_10020c00)[DAT_10020c80 * 2] = uVar6;
        (&DAT_10020c04)[DAT_10020c80 * 2] = iVar5;
        DAT_10020c80 = DAT_10020c80 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1f);
    uVar6 = 0;
    iVar5 = 0;
    do {
      (&DAT_10020c90)[iVar5] = uVar6;
      uVar2 = 8;
      uVar6 = uVar6 ^ 8;
      iVar5 = iVar5 + 1;
      if (uVar6 < 8) {
        do {
          uVar2 = (int)uVar2 >> 1;
          uVar6 = uVar6 ^ uVar2;
        } while (uVar6 < uVar2);
      }
    } while (iVar5 < 8);
    iVar5 = 0;
    iVar7 = 0x3f;
    do {
      *(double *)((int)&DAT_1001f900 + iVar5) = 1.0 / *(double *)((int)&DAT_1000c100 + iVar5);
      dVar9 = _DAT_10003138;
      iVar5 = iVar5 + 8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uVar6 = 0;
    do {
      (&DAT_1001fb00)[uVar6] = *(double *)(&DAT_1001cf00 + (0x1ff - (uVar6 & 0x1ff)) * 8) * dVar9;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x200);
  }
  *(undefined4 *)(param_1 + 0xc550) = 0x20;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0xc554) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc554) = 0x10;
  }
  *(undefined4 *)(param_1 + 0xc558) = 0;
  *(undefined4 *)(param_1 + 0xc55c) = 0;
  *(undefined4 *)(param_1 + 0xc56c) = 0;
  *(undefined4 *)(param_1 + 0xc570) = 0;
  iVar5 = 0;
  do {
    iVar7 = iVar5 + 1;
    iVar4 = 0x1ff;
    puVar3 = &DAT_1001f4fe + iVar5 * 0x200;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar5 = iVar7;
  } while (iVar7 < 2);
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined **)(param_1 + 0xc564) = &DAT_1001dfc0;
    *(undefined **)(param_1 + 0xc568) = &DAT_1001e060;
    *(undefined **)(param_1 + 0xc560) = &DAT_1001df20;
  }
  else {
    *(undefined **)(param_1 + 0xc564) = &DAT_1001e1a0;
    *(undefined **)(param_1 + 0xc568) = &DAT_1001e240;
    *(undefined **)(param_1 + 0xc560) = &DAT_1001e100;
  }
  return;
}


