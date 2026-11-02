/* Module: stl2plg.dll
   Function: FUN_00457a10
   Address: 00457a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457a10(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x39) = *param_3;
    *(undefined2 *)(param_2 + 0x3d) = *(undefined2 *)(param_3 + 1);
    *(undefined1 *)(param_2 + 0x3f) = *(undefined1 *)((int)param_3 + 6);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}


