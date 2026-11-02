/* Module: vidcap30.exe
   Function: FUN_004419e0
   Address: 004419e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004419e0(int param_1)

{
  int *piVar1;
  
  if (DAT_005bba94 == 0) {
    piVar1 = *(int **)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1c68);
    if (param_1 < *piVar1) {
      _SfList_DeleteList_16(piVar1,param_1,1,0);
    }
    DAT_005ba50c = DAT_005ba50c | 0x200;
  }
  return;
}


