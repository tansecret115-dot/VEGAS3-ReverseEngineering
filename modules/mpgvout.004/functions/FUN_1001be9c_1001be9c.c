/* Module: mpgvout.004
   Function: FUN_1001be9c
   Address: 1001be9c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001be9c(int param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b5,0);
  FUN_100118c0(*(int **)(param_1 + 0x24),1,4);
  FUN_100118c0(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x90) << 4 | *(uint *)(param_1 + 0x94),8
              );
  FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x98),1);
  FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x9c),2);
  FUN_100118c0(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x368) >> 0xc,2);
  FUN_100118c0(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x36c) >> 0xc,2);
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = *(uint *)(param_1 + 0x498);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x78);
  }
  uVar3 = 0xc;
  dVar2 = ceil((double)uVar1 / _DAT_1001be94);
  FUN_100118c0(*(int **)(param_1 + 0x24),(int)ROUND(dVar2) >> 0x12,uVar3);
  FUN_100118c0(*(int **)(param_1 + 0x24),1,1);
  FUN_100118c0(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x7c) >> 10,8);
  FUN_100118c0(*(int **)(param_1 + 0x24),0,1);
  FUN_100118c0(*(int **)(param_1 + 0x24),0,2);
  FUN_100118c0(*(int **)(param_1 + 0x24),0,5);
  return;
}


