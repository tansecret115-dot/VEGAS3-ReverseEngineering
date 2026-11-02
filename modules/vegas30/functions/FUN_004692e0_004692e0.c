/* Module: vegas30.exe
   Function: FUN_004692e0
   Address: 004692e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004692e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xcd0);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    _SfList_DeleteList_16(piVar1,0,0xffffffff,0);
    FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
    FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


