/* Module: vidcap30.exe
   Function: FUN_00415ec0
   Address: 00415ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00415ec0(undefined4 param_1,int param_2)

{
  int *_Memory;
  int iVar1;
  
  _Memory = calloc(1,0x130);
  if (_Memory != (int *)0x0) {
    iVar1 = _SfCreateDialogParam_20(DAT_005ba2a0,499,param_1,FUN_00416150,_Memory);
    if (iVar1 != 0) {
      if (param_2 < 1) {
        param_2 = 1;
      }
      *_Memory = param_2;
      *(double *)(_Memory + 4) = _DAT_00587ad0 / (double)param_2;
      return iVar1;
    }
    free(_Memory);
  }
  return 0;
}


