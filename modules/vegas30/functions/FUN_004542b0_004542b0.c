/* Module: vegas30.exe
   Function: FUN_004542b0
   Address: 004542b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004542b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xbb0);
  iVar2 = ftol();
  iVar2 = iVar2 + -0x15;
  if (iVar2 < 0) {
    return 0;
  }
  iVar1 = iVar1 + -0x15;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}


