/* Module: vegas30.exe
   Function: FUN_00489d10
   Address: 00489d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489d10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if ((iVar1 == 1) || ((2 < iVar1 && (iVar1 < 8)))) {
    FUN_004ea040(*(undefined4 *)(param_1 + 0x130),0);
  }
  return;
}


