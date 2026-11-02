/* Module: mcmpgdec.dll
   Function: FUN_10008044
   Address: 10008044
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008044(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x668) = 0;
  piVar1 = (int *)(param_1 + 0x66c);
  uVar3 = FUN_10003a04(piVar1,0xc);
  *(uint *)(param_1 + 0x130) = uVar3;
  uVar3 = FUN_10003a04(piVar1,0xc);
  *(uint *)(param_1 + 0x134) = uVar3;
  uVar3 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x138) = uVar3;
  uVar3 = FUN_10003a04(piVar1,4);
  *(uint *)(param_1 + 0x13c) = uVar3;
  uVar3 = FUN_10003a04(piVar1,0x13);
  *(uint *)(param_1 + 0x140) = uVar3 >> 1;
  uVar3 = FUN_10003a04(piVar1,10);
  *(uint *)(param_1 + 0x144) = uVar3;
  uVar3 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x148) = uVar3;
  uVar3 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x55c) = uVar3;
  if (uVar3 == 0) {
    iVar5 = 0;
    do {
      *(uint *)(param_1 + 0x15c + iVar5 * 4) = (uint)(byte)(&DAT_10030f20)[iVar5];
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40);
  }
  else {
    iVar5 = 0;
    do {
      uVar3 = FUN_10003a04(piVar1,8);
      piVar2 = &DAT_10027000 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(*piVar2 * 4 + 0x15c + param_1) = uVar3;
    } while (iVar5 < 0x40);
  }
  uVar3 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x560) = uVar3;
  if (uVar3 == 0) {
    iVar5 = 0x3f;
    puVar4 = (undefined4 *)(param_1 + 0x358);
    do {
      *puVar4 = 0x10;
      puVar4 = puVar4 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    iVar5 = 0;
    do {
      uVar3 = FUN_10003a04(piVar1,8);
      piVar2 = &DAT_10027000 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(*piVar2 * 4 + 0x25c + param_1) = uVar3;
    } while (iVar5 < 0x40);
  }
  iVar5 = 0;
  iVar6 = 0x3f;
  do {
    *(undefined4 *)(param_1 + 0x35c + iVar5) = *(undefined4 *)(param_1 + 0x15c + iVar5);
    *(undefined4 *)(param_1 + 0x45c + iVar5) = *(undefined4 *)(param_1 + 0x25c + iVar5);
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 1;
  *(undefined4 *)(param_1 + 0x60c) = 1;
  *(undefined4 *)(param_1 + 0x5f0) = 3;
  *(undefined4 *)(param_1 + 0x5f8) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(undefined4 *)(param_1 + 0x5b0) = 5;
  if (8 < (int)*(uint *)(param_1 + 0x13c)) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 7;
  }
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(&DAT_10030f60 + *(int *)(param_1 + 0x13c) * 8);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(double *)(param_1 + 0x14c) = (double)*(int *)(param_1 + 0x140) * _DAT_1000803c;
  return;
}


