/* Module: mp3plug.dll
   Function: FUN_5f713d20
   Address: 5f713d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f713d20(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + param_1[2]) == '\0') {
        return iVar2 + 1;
      }
      if (iVar1 <= iVar2 + 1) {
        return 0;
      }
      if (*(char *)(iVar2 + 1 + param_1[2]) == '\0') {
        return iVar2 + 2;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < iVar1);
  }
  return 0;
}


