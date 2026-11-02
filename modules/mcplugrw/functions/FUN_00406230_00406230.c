/* Module: mcplugrw.dll
   Function: FUN_00406230
   Address: 00406230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406230(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (((DAT_004a8134 != (int *)0x0) && (iVar1 = *DAT_004a8134, iVar1 != 0)) &&
     (iVar4 = 0, 0 < iVar1)) {
    piVar3 = (int *)DAT_004a8134[2];
    do {
      iVar2 = *piVar3;
      if ((param_1 == *(int *)(iVar2 + 0x20c)) && (param_2 == *(int *)(iVar2 + 0x210))) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


