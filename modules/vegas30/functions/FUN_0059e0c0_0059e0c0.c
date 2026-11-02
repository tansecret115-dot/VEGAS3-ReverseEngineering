/* Module: vegas30.exe
   Function: FUN_0059e0c0
   Address: 0059e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0059e0c0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)*DAT_0065ad10;
  }
  else {
    puVar1 = (undefined4 *)DAT_0065ad10[1];
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar1;
}


