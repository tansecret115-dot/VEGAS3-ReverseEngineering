/* Module: stl2plg.dll
   Function: FUN_00457470
   Address: 00457470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457470(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x52) = *param_3;
    *(undefined4 *)(param_2 + 0x56) = param_3[1];
    *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


