/* Module: sfs4rw.dll
   Function: FUN_00405bb0
   Address: 00405bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405bb0(HWND param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1cc) + -1;
  *(int *)(param_2 + 0x1cc) = iVar1;
  SetWindowLongA(param_1,0,*(LONG *)(param_2 + 0x17c + iVar1 * 4));
  return;
}


