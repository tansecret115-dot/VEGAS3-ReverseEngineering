/* Module: rmbe3260.dll
   Function: FUN_66059a90
   Address: 66059a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66059a90(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = -1;
  iVar2 = 0;
  piVar1 = &DAT_66074b70;
  do {
    if (param_1 == *piVar1) {
      iVar3 = iVar2;
    }
    if (param_2 == *piVar1) {
      iVar4 = iVar2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x66074b8c);
  if (iVar3 == -1) {
    return 0;
  }
  if (iVar4 == -1) {
    return 0;
  }
  iVar4 = (iVar3 * 7 + iVar4) * 4;
  iVar3 = *(int *)(iVar4 + 0x66074b90);
  iVar4 = *(int *)(iVar4 + 0x66074c58) * param_3;
  return iVar4 / iVar3 + (uint)(iVar4 % iVar3 != 0);
}


