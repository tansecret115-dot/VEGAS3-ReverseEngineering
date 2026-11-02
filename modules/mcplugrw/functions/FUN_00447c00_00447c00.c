/* Module: mcplugrw.dll
   Function: FUN_00447c00
   Address: 00447c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447c00(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


