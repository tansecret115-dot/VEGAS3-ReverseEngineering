/* Module: encn3260.dll
   Function: FUN_664bd670
   Address: 664bd670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664bd670(void *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x20);
  if (local_8 == 0) {
    return 0;
  }
  do {
    piVar2 = (int *)FUN_664bab40(&local_8);
    iVar1 = *piVar2;
    iVar3 = _stricmp(*(char **)(iVar1 + 4),param_1);
    if (iVar3 == 0) {
      return iVar1;
    }
  } while (local_8 != 0);
  return 0;
}


