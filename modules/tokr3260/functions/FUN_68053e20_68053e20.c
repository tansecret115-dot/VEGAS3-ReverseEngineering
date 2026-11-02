/* Module: tokr3260.dll
   Function: FUN_68053e20
   Address: 68053e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68053e20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    piVar4 = (int *)(param_1 + 0x10);
    iVar5 = iVar1;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x10;
      iVar3 = iVar3 + iVar2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (iVar1 + iVar3 * 3) * 3;
}


