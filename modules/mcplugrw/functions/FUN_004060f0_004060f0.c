/* Module: mcplugrw.dll
   Function: FUN_004060f0
   Address: 004060f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004060f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((DAT_004a8134 != (int *)0x0) && (iVar1 = *DAT_004a8134, iVar1 != 0)) &&
     (iVar2 = 0, 0 < iVar1)) {
    piVar3 = (int *)DAT_004a8134[2];
    do {
      if (param_1 == *(int *)(*piVar3 + 0x20c)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return -1;
}


