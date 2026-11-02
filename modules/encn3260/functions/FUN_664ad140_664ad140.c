/* Module: encn3260.dll
   Function: FUN_664ad140
   Address: 664ad140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664ad180) */

undefined4 __cdecl FUN_664ad140(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  undefined *local_8;
  
  pcVar3 = FUN_664d1ce0(param_1,':');
  if (pcVar3 != (char *)0x0) {
    param_1 = pcVar3 + 1;
  }
  uVar7 = 0;
  iVar6 = 0;
  local_8 = &DAT_664f0818;
  local_c = DAT_664f081c;
  while (local_c != 0) {
    piVar4 = (int *)FUN_664bab80(local_c);
    iVar1 = *piVar4;
    _MaxCount = *(size_t *)(*(char **)(iVar1 + 4) + -8);
    if (((0 < (int)_MaxCount) &&
        (iVar5 = strncmp(*(char **)(iVar1 + 4),param_1,_MaxCount), iVar5 == 0)) &&
       (uVar2 = *(uint *)(*(int *)(iVar1 + 4) + -8), uVar7 <= uVar2)) {
      iVar6 = iVar1;
      uVar7 = uVar2;
    }
    FUN_664bab40(&local_c);
  }
  if (iVar6 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar6 + 0x28);
}


