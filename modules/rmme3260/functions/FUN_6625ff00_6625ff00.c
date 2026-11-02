/* Module: rmme3260.dll
   Function: FUN_6625ff00
   Address: 6625ff00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6625ff00(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  local_c = *(int *)(param_1 + 4);
  local_8 = param_1;
  if (local_c != 0) {
    while (iVar2 != param_2) {
      FUN_66250bf0(&local_c);
      iVar2 = iVar2 + 1;
      if (local_c == 0) {
        return 0;
      }
    }
    if (local_c != 0) {
      puVar1 = (undefined4 *)FUN_66250c10(local_c);
      return *puVar1;
    }
  }
  return 0;
}


