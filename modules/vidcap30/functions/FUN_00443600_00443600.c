/* Module: vidcap30.exe
   Function: FUN_00443600
   Address: 00443600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443600(int param_1)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  if (*(int **)(param_1 + 0x1cc) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x1cc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_00444810(param_1,iVar1,0);
    }
  }
  FUN_0042f5d0(param_1,1);
  return 0;
}


