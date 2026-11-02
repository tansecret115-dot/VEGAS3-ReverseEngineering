/* Module: sfpaplug.dll
   Function: FUN_00416300
   Address: 00416300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416300(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x13c);
  }
  return uVar1;
}


