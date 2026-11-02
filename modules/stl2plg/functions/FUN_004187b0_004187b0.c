/* Module: stl2plg.dll
   Function: FUN_004187b0
   Address: 004187b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004187b0(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_0044f470((int)param_1);
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)param_1 + 0x11),-1);
}


