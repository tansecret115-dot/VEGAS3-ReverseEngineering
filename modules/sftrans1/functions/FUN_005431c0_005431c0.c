/* Module: sftrans1.dll
   Function: FUN_005431c0
   Address: 005431c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005431c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  return 1;
}


