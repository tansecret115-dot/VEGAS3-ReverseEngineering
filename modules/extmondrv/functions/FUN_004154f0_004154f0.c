/* Module: extmondrv.dll
   Function: FUN_004154f0
   Address: 004154f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004154f0(uint param_1,int param_2,uchar *param_3)

{
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    wsprintfA((LPSTR)param_3,"%d");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      FUN_004220d0(param_3,(BYTE *)"$.2fKB");
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_004220d0(param_3,(BYTE *)"$.2fMB");
      return;
    }
  }
  FUN_004220d0(param_3,(BYTE *)"$.2fGB");
  return;
}


