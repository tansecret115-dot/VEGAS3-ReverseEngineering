/* Module: vegas30k.dll
   Function: FUN_01129280
   Address: 01129280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01129280(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_0115e7f0(param_1);
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)param_1 + 0x11),-1);
}


