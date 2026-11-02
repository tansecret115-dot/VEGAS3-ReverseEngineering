/* Module: vidcap30.exe
   Function: FUN_0052d020
   Address: 0052d020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052d020(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_005535c0(param_1);
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)param_1 + 0x11),-1);
}


