/* Module: mp3rw.dll
   Function: FUN_0044c5a0
   Address: 0044c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0044c5a0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_00475a10(2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044c600(puVar1);
  }
  return puVar1;
}


