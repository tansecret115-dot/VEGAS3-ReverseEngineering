/* Module: vegas30.exe
   Function: FUN_0042e540
   Address: 0042e540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e540(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(DAT_00647630 + 0xbc8) != 0) {
    iVar1 = FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8));
    if (iVar1 != 0) {
      if (*(int *)(DAT_00647630 + 0xbc8) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8));
      }
      if (0 < *piVar2) {
        piVar2 = (int *)FUN_005b87b0(DAT_0064b138);
        iVar1 = FUN_004ca930(DAT_00647630);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        if ((-1 < iVar1) && (iVar1 <= iVar3 + -1)) {
          return *(undefined4 *)(piVar2[2] + iVar1 * 4);
        }
        return 0;
      }
    }
  }
  return 0;
}


