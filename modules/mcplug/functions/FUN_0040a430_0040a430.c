/* Module: mcplug.dll
   Function: FUN_0040a430
   Address: 0040a430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040a430(int param_1)

{
  undefined4 *_Memory;
  
  _Memory = *(undefined4 **)(param_1 + 0x34);
  fclose((FILE *)*_Memory);
  free((void *)_Memory[1]);
  free(_Memory);
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


