/* Module: encn3260.dll
   Function: FUN_66496b90
   Address: 66496b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66496b90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  return;
}


