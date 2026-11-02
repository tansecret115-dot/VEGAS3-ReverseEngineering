/* Module: vidcap30.exe
   Function: FUN_0052ccd0
   Address: 0052ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ccd0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = param_1;
    puVar1[2] = 1;
  }
  return;
}


