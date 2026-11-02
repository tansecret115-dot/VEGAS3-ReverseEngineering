/* Module: rmto3260.dll
   Function: FUN_662fcf90
   Address: 662fcf90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662fcf90(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = -1;
  iVar2 = 0;
  piVar1 = &DAT_66311100;
  do {
    if (param_1 == *piVar1) {
      iVar3 = iVar2;
    }
    if (param_2 == *piVar1) {
      iVar4 = iVar2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6631111c);
  if (iVar3 == -1) {
    return 0;
  }
  if (iVar4 == -1) {
    return 0;
  }
  iVar4 = (iVar3 * 7 + iVar4) * 4;
  iVar3 = *(int *)(iVar4 + 0x66311120);
  iVar4 = *(int *)(iVar4 + 0x663111e8) * param_3;
  return iVar4 / iVar3 + (uint)(iVar4 % iVar3 != 0);
}


