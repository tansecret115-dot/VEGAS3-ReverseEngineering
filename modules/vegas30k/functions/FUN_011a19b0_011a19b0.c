/* Module: vegas30k.dll
   Function: FUN_011a19b0
   Address: 011a19b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a19b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int **)(param_1 + 0x438) == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = **(int **)(param_1 + 0x438);
    }
    iVar2 = param_1;
    if (0 < param_1) {
      do {
        iVar2 = FUN_011b41e0(param_2,param_3);
        if (iVar2 < 0) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1);
    }
  }
  else {
    iVar2 = FUN_011b41e0(param_2,param_3);
  }
  if (-1 < iVar2) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
    (**(code **)(iVar1 + 0x14))
              (iVar1,(-(*(int *)(iVar1 + 8) != 0) & 0xeU) + 10,*(undefined4 *)(iVar1 + 0x18),
               0xffffffff,0,0,0,0,0,0,0);
  }
  return;
}


