/* Module: encn3260.dll
   Function: FUN_664b8c30
   Address: 664b8c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b8c30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_664b8c70((int *)(param_2 + 4));
  if (((iVar1 != 0) && (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 8))) &&
     (*(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0xc))) {
    return 1;
  }
  return 0;
}


