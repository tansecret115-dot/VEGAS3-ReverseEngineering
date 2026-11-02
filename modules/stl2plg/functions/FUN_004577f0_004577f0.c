/* Module: stl2plg.dll
   Function: FUN_004577f0
   Address: 004577f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004577f0(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x10) = param_3;
    *(undefined2 *)(param_2 + 0x14) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  }
  return;
}


