/* Module: vegas30.exe
   Function: FUN_004c4f90
   Address: 004c4f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c4f90(int param_1,_GUID *param_2)

{
  int iVar1;
  
  if (param_1 == -1) {
    iVar1 = SfOverlay_GetCompositorIndex(param_2);
    return iVar1 + 0x2166;
  }
  return param_1 + 0x2134;
}


