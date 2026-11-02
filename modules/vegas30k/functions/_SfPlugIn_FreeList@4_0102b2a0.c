/* Module: vegas30k.dll
   Function: _SfPlugIn_FreeList@4
   Address: 0102b2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfPlugIn_FreeList_4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    free(param_1);
    param_1 = puVar1;
  }
  return;
}


