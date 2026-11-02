/* Module: vegas30.exe
   Function: FUN_004e0210
   Address: 004e0210
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004e0210(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 != 0) && (1 < *(int *)(param_1 + 0xd94))) && (*(int *)(param_1 + 0xd88) != 0)) &&
     (((*(int *)(param_1 + 0xd8c) != 0 &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xd88) + 0x69c), iVar1 != 0)) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0xd8c) + 0x69c), iVar2 != 0)))) {
    iVar3 = *(int *)(param_1 + 0xd98);
    if ((*(int *)(iVar1 + 0x2c) * 3 >> 3) + *(int *)(iVar1 + 0x1c) < param_3) {
      *(uint *)(param_1 + 0xd98) =
           (param_3 <
           (*(int *)(iVar2 + 0x1c) - (*(int *)(iVar2 + 0x2c) * 3 >> 3)) + *(int *)(iVar2 + 0x2c)) -
           1 & 2;
    }
    else {
      *(undefined4 *)(param_1 + 0xd98) = 1;
    }
    if (iVar3 != *(int *)(param_1 + 0xd98)) {
      FUN_004df2c0(param_1);
    }
    return iVar3 != *(int *)(param_1 + 0xd98);
  }
  return false;
}


