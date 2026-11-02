/* Module: vegas30.exe
   Function: FUN_005d97c0
   Address: 005d97c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d97c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x218) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x218);
  }
  return uVar1;
}


