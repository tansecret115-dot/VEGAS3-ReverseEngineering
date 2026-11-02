/* Module: vegas30.exe
   Function: FUN_00453000
   Address: 00453000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453000(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((((uVar1 & 0x10) == 0) &&
      (*(uint *)(param_1 + 0x18) = uVar1 & 0xffffffdf | 0x10, (uVar1 & 1) == 0)) &&
     (*(int *)(param_1 + 0xb24) == 0)) {
    FUN_00452ea0(param_1);
  }
  return;
}


