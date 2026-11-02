/* Module: vegas30k.dll
   Function: FUN_011a1820
   Address: 011a1820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a1820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = 0;
  uVar5 = 0;
  uVar4 = 0;
  iVar1 = (**(code **)(param_1 + 0x14))
                    (param_1,(-(*(int *)(param_1 + 8) != 0) & 0xeU) + 6,
                     *(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int **)(param_1 + 0x438) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(param_1 + 0x438);
    }
    if (0 < iVar3) {
      do {
        iVar1 = FUN_011b41c0(uVar4,uVar5);
        if (iVar1 < 0) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  else {
    iVar1 = FUN_011b41c0(uVar4,uVar5);
  }
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef | 0x20;
    (**(code **)(param_1 + 0x14))
              (param_1,(-(*(int *)(param_1 + 8) != 0) & 0xeU) + 7,*(undefined4 *)(param_1 + 0x18),
               0xffffffff,0,0,0,0,0,0,0);
  }
  return;
}


