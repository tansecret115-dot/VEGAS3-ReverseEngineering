/* Module: mp3plug.dll
   Function: FUN_5f6e6500
   Address: 5f6e6500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6e6500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar2 < iVar1) {
    iVar2 = (iVar2 + *(int *)(param_1 + 0xc)) - iVar1;
  }
  else {
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}


