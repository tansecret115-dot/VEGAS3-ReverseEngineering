/* Module: vegas30k.dll
   Function: FUN_011b4900
   Address: 011b4900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b4900(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  (**(code **)(param_1 + 0x14))(param_1,1,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


