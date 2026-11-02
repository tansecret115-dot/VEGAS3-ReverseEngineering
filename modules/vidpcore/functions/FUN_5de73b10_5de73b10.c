/* Module: vidpcore.dll
   Function: FUN_5de73b10
   Address: 5de73b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de73b10(int param_1)

{
  undefined1 uVar1;
  int iStack00000008;
  
  iStack00000008 = 0;
  do {
    uVar1 = ftol();
    *(undefined1 *)(iStack00000008 + param_1) = uVar1;
    iStack00000008 = iStack00000008 + 1;
  } while (iStack00000008 < 0x100);
  return;
}


