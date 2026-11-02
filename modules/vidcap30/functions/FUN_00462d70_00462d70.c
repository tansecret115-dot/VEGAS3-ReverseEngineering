/* Module: vidcap30.exe
   Function: FUN_00462d70
   Address: 00462d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00462d70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005bba30;
  *param_1 = 0;
  if (0 < DAT_005b6568) {
    do {
      if ((&DAT_005b6470)[*param_1 * 0x20] == iVar1) {
        return 1;
      }
      iVar2 = *param_1 + 1;
      *param_1 = iVar2;
    } while (iVar2 < DAT_005b6568);
  }
  return 0;
}


