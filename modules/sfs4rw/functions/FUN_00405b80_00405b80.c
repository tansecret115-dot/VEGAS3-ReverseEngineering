/* Module: sfs4rw.dll
   Function: FUN_00405b80
   Address: 00405b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405b80(HWND param_1,int param_2,LONG param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1cc) + 1;
  *(int *)(param_2 + 0x1cc) = iVar1;
  *(LONG *)(param_2 + 0x17c + iVar1 * 4) = param_3;
  SetWindowLongA(param_1,0,param_3);
  return;
}


