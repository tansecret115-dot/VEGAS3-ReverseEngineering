/* Module: vidcap30.exe
   Function: FUN_0042ed50
   Address: 0042ed50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ed50(int param_1,double param_2)

{
  FUN_0042f4b0(param_1,1);
  if (_DAT_00589f10 != param_2) {
    *(double *)((*(int *)(param_1 + 0x518) + 0x11) * 0x40 + param_1) = param_2;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


