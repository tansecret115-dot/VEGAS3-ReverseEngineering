/* Module: pncrt.dll
   Function: FUN_78013d50
   Address: 78013d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78013d50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 1;
  if (-1 < param_2) {
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar2 = (iVar3 + param_2) / 2;
      iVar1 = _strcmpi((char *)*param_3,*(char **)(param_1 + iVar2 * 8));
      if (iVar1 == 0) {
        *param_3 = param_1 + 4 + iVar2 * 8;
      }
      else if (iVar1 < 0) {
        param_2 = iVar2 + -1;
      }
      else {
        iVar3 = iVar2 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return;
}


