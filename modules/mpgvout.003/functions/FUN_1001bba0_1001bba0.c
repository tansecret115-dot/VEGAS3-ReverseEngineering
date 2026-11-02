/* Module: mpgvout.003
   Function: FUN_1001bba0
   Address: 1001bba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001bba0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = *(undefined4 *)(param_1 + 0x28);
  local_28 = *(undefined4 *)(param_1 + 100);
  local_24 = *(undefined4 *)(param_1 + 0x498);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  local_1c = *(undefined4 *)(param_1 + 0x2c);
  local_18 = *(undefined4 *)(param_1 + 0x7c);
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b3,&local_2c);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x368) & 0xfff,0xc);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x36c) & 0xfff,0xc);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x60),4);
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = *(uint *)(param_1 + 100);
  }
  else {
    uVar2 = 4;
  }
  FUN_10011464(*(int **)(param_1 + 0x24),uVar2,4);
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = *(uint *)(param_1 + 0x498);
  }
  else {
    if (*(int *)(param_1 + 0x28) < 2) {
      uVar5 = 0x12;
      uVar2 = 0x3ffff;
      goto LAB_1001bcde;
    }
    uVar2 = *(uint *)(param_1 + 0x78);
  }
  uVar5 = 0x12;
  dVar4 = ceil((double)uVar2 / _DAT_1001bb98);
  uVar2 = (int)ROUND(dVar4) & 0x3ffff;
LAB_1001bcde:
  FUN_10011464(*(int **)(param_1 + 0x24),uVar2,uVar5);
  FUN_10011464(*(int **)(param_1 + 0x24),1,1);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x7c) & 0x3ff,10);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x30),1);
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x1a4),1);
  if (*(int *)(param_1 + 0x1a4) != 0) {
    iVar3 = 0;
    do {
      piVar1 = &DAT_1001c2a8 + iVar3;
      iVar3 = iVar3 + 1;
      FUN_10011464(*(int **)(param_1 + 0x24),(int)*(short *)(*piVar1 * 2 + param_1 + 0x1ac),8);
    } while (iVar3 < 0x40);
  }
  FUN_10011464(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x1a8),1);
  if (*(int *)(param_1 + 0x1a8) != 0) {
    iVar3 = 0;
    do {
      piVar1 = &DAT_1001c2a8 + iVar3;
      iVar3 = iVar3 + 1;
      FUN_10011464(*(int **)(param_1 + 0x24),(int)*(short *)(*piVar1 * 2 + param_1 + 0x22c),8);
    } while (iVar3 < 0x40);
  }
  if (1 < *(int *)(param_1 + 0x28)) {
    FUN_1001b930(param_1);
    FUN_1001bab0(param_1);
  }
  *(byte *)(param_1 + 0x5ec) = *(byte *)(param_1 + 0x5ec) | 1;
  return;
}


