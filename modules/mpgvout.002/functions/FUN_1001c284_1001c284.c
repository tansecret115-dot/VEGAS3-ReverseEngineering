/* Module: mpgvout.002
   Function: FUN_1001c284
   Address: 1001c284
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001c284(int param_1)

{
  uint uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = *(undefined4 *)(param_1 + 0x5bc);
  local_18 = *(undefined4 *)(param_1 + 0x5b8);
  local_14 = *(undefined4 *)(param_1 + 0x584);
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x100,&local_1c);
  *(uint *)(param_1 + 0x5e4) = (*(int **)(param_1 + 0x24))[0xe] - 0x20U >> 3;
  FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5b8),10);
  FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5bc),3);
  if (*(int *)(param_1 + 0x340) == 0) {
    uVar1 = *(uint *)(param_1 + 0x5c0);
  }
  else {
    uVar1 = 0xffff;
  }
  FUN_100117cc(*(int **)(param_1 + 0x24),uVar1,0x10);
  if (*(int *)(param_1 + 0x5bc) - 2U < 2) {
    FUN_100117cc(*(int **)(param_1 + 0x24),0,1);
    if (*(int *)(param_1 + 0x28) < 2) {
      uVar1 = *(uint *)(param_1 + 0x598);
    }
    else {
      uVar1 = 7;
    }
    FUN_100117cc(*(int **)(param_1 + 0x24),uVar1,3);
  }
  if (*(int *)(param_1 + 0x5bc) == 3) {
    FUN_100117cc(*(int **)(param_1 + 0x24),0,1);
    if (*(int *)(param_1 + 0x28) < 2) {
      uVar1 = *(uint *)(param_1 + 0x5a0);
    }
    else {
      uVar1 = 7;
    }
    FUN_100117cc(*(int **)(param_1 + 0x24),uVar1,3);
  }
  FUN_100117cc(*(int **)(param_1 + 0x24),0,1);
  if (1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b5,0);
    FUN_100117cc(*(int **)(param_1 + 0x24),8,4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x598),4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x59c),4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5a0),4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5a4),4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2c8),2);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x590),2);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x590) == 3) {
      uVar1 = *(uint *)(param_1 + 0x588);
    }
    FUN_100117cc(*(int **)(param_1 + 0x24),uVar1,1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5c4),1);
    FUN_100117cc(*(int **)(param_1 + 0x24),0,1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5c8),1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5cc),1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x5d0),1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x584),1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = *(uint *)(param_1 + 0x58c);
    }
    else {
      uVar1 = 0;
    }
    FUN_100117cc(*(int **)(param_1 + 0x24),uVar1,1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x58c),1);
    FUN_100117cc(*(int **)(param_1 + 0x24),0,1);
  }
  return;
}


