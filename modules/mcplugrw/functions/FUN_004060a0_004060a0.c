/* Module: mcplugrw.dll
   Function: FUN_004060a0
   Address: 004060a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004060a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((DAT_004a8134 != (int *)0x0) && (iVar1 = *DAT_004a8134, iVar1 != 0)) &&
     (iVar3 = 0, 0 < iVar1)) {
    piVar2 = (int *)DAT_004a8134[2];
    do {
      if ((param_1 == *(int *)(*piVar2 + 0x20c)) && (param_2 == *(int *)(*piVar2 + 0x210))) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


