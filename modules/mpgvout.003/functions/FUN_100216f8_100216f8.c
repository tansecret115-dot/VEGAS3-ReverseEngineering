/* Module: mpgvout.003
   Function: FUN_100216f8
   Address: 100216f8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_100216f8(int param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,int param_7)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint local_10c [67];
  
  piVar1 = *(int **)(param_1 + 0x24);
  puVar6 = local_10c;
  for (; 0x21 < param_2; param_2 = param_2 + -0x21) {
    *puVar6 = 8;
    puVar6[1] = 0xb;
    puVar6 = puVar6 + 2;
  }
  *puVar6 = *(uint *)(&DAT_10033918 + param_2 * 8);
  puVar6[1] = *(uint *)(&DAT_1003391c + param_2 * 8);
  puVar6[2] = *(uint *)(param_3 * 8 + *(int *)(param_1 + 0x5bc) * 0x100 + 0x10033940);
  puVar6[3] = *(uint *)(param_3 * 8 + *(int *)(param_1 + 0x5bc) * 0x100 + 0x10033944);
  puVar2 = puVar6 + 4;
  if (((param_3 & 0xc) != 0) && (*(int *)(param_1 + 0x5c4) == 0)) {
    *puVar2 = (int)*(char *)(param_4 + 2);
    puVar6[5] = 2;
    puVar2 = puVar6 + 6;
  }
  if (((*(int *)(param_1 + 0x590) == 3) && (param_6 != 0)) && (*(int *)(param_1 + 0x5c4) == 0)) {
    *puVar2 = (int)*(char *)(param_4 + 3);
    puVar2[1] = 1;
    puVar2 = puVar2 + 2;
  }
  if ((param_3 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x5c8) == 0) {
      uVar5 = param_5 >> 1;
    }
    else {
      uVar5 = *(uint *)(&DAT_10033740 + param_5 * 4);
    }
    *puVar2 = uVar5;
    puVar2[1] = 5;
    puVar2 = puVar2 + 2;
  }
  if ((param_3 & 8) != 0) {
    puVar2 = FUN_10020588(param_1,param_4,param_7,0,*(int *)(param_1 + 0x598),
                          *(int *)(param_1 + 0x59c),puVar2);
  }
  if ((param_3 & 4) != 0) {
    puVar2 = FUN_10020588(param_1,param_4,param_7,1,*(int *)(param_1 + 0x5a0),
                          *(int *)(param_1 + 0x5a4),puVar2);
  }
  puVar6 = puVar2;
  if ((param_3 & 2) != 0) {
    uVar5 = *(int *)(param_1 + 0x54c) - 6;
    iVar3 = ((int)param_6 >> ((byte)uVar5 & 0x1f) & 0x3fU) * 8;
    *puVar2 = *(uint *)(&DAT_10033d40 + iVar3);
    puVar2[1] = *(uint *)(&DAT_10033d44 + iVar3);
    puVar6 = puVar2 + 2;
    if (*(int *)(param_1 + 0x9c) != 1) {
      *puVar6 = param_6;
      puVar2[3] = uVar5;
      puVar6 = puVar2 + 4;
    }
  }
  puVar6[1] = 0;
  puVar8 = (undefined1 *)(piVar1[10] + *piVar1);
  uVar7 = 8 - piVar1[0xb];
  uVar5 = piVar1[9];
  puVar6 = local_10c;
  do {
    uVar7 = uVar7 + puVar6[1];
    uVar5 = uVar5 << ((byte)puVar6[1] & 0x1f) | *puVar6;
    while (7 < (int)uVar7) {
      uVar7 = uVar7 - 8;
      *puVar8 = (char)(uVar5 >> ((byte)uVar7 & 0x1f));
      puVar8 = puVar8 + 1;
    }
    puVar2 = puVar6 + 3;
    puVar6 = puVar6 + 2;
  } while (*puVar2 != 0);
  piVar1[9] = uVar5 & 0xff;
  iVar3 = piVar1[10];
  piVar1[10] = (int)puVar8 - *piVar1;
  uVar4 = (uVar7 - 8) + ((int)puVar8 - (*piVar1 + iVar3)) * 8 + piVar1[0xb];
  puVar6 = (uint *)(piVar1 + 0xe);
  uVar5 = *puVar6;
  *puVar6 = *puVar6 + uVar4;
  piVar1[0xf] = piVar1[0xf] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar5,uVar4);
  piVar1[0xb] = 8 - (uVar7 & 7);
  return;
}


