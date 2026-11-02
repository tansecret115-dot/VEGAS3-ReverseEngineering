/* Module: vegas30.exe
   Function: FUN_004dbd30
   Address: 004dbd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dbd30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    return uVar1;
  }
  if ((DAT_0064761c & 0x800) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0) &&
     (*(int *)(param_1 + 0xd50) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


