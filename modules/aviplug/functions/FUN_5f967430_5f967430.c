/* Module: aviplug.dll
   Function: FUN_5f967430
   Address: 5f967430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f967430(int param_1)

{
  if ((param_1 != 0) && (*(LPVOID *)(param_1 + 0x4738) != (LPVOID)0x0)) {
    VirtualFree(*(LPVOID *)(param_1 + 0x4738),0,0x8000);
    *(undefined4 *)(param_1 + 0x4738) = 0;
  }
  return;
}


