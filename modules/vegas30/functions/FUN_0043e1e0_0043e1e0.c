/* Module: vegas30.exe
   Function: FUN_0043e1e0
   Address: 0043e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043e1e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_005b89b0(DAT_0064b138);
  iVar2 = 0;
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    piVar1 = (int *)piVar1[2];
    do {
      if ((*(byte **)(*piVar1 + 0x28) == (byte *)0x0) || ((**(byte **)(*piVar1 + 0x28) & 1) == 0)) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}


