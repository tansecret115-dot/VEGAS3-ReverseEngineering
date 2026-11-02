/* Module: mp3plug.dll
   Function: FUN_5f6e5ec0
   Address: 5f6e5ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6e5ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = param_2 + iVar1;
  *(int *)(param_1 + 8) = iVar2;
  while (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 8) = iVar2;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 <= iVar2) {
    do {
      iVar2 = iVar2 - iVar3;
      iVar3 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 8) = iVar2;
    } while (iVar3 <= iVar2);
  }
  return iVar1;
}


