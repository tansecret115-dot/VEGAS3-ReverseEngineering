/* Module: sfs4rw.dll
   Function: FUN_0044c520
   Address: 0044c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0044c520(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_00475990(2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044c580(puVar1);
  }
  return puVar1;
}


