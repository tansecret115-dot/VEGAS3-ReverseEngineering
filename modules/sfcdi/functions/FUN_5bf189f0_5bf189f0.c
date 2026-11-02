/* Module: sfcdi.dll
   Function: FUN_5bf189f0
   Address: 5bf189f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf189f0(int param_1,uint param_2)

{
  if (param_2 == 0) {
    param_2 = *(uint *)(param_1 + 4);
  }
  else if (*(uint *)(param_1 + 4) <= param_2) {
    param_2 = *(uint *)(param_1 + 4);
  }
  *(uint *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}


