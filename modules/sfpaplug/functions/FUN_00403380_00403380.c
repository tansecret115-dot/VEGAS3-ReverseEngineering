/* Module: sfpaplug.dll
   Function: FUN_00403380
   Address: 00403380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403380(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x54) = (uint)**(byte **)(param_1 + 0x40);
  return;
}


