/* Module: rmme3260.dll
   Function: FUN_662343c0
   Address: 662343c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662343de) */

int FUN_662343c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  local_8 = param_1 + 0x1c;
  local_c = *(int *)(param_1 + 0x20);
  while (local_c != 0) {
    piVar1 = (int *)FUN_66250c10(local_c);
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x10) + 0x28))(*(int **)(*piVar1 + 0x10));
    iVar3 = iVar3 + iVar2;
    FUN_66250bf0(&local_c);
  }
  return iVar3;
}


