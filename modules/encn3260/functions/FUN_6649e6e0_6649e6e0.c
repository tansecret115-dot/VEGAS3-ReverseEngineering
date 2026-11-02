/* Module: encn3260.dll
   Function: FUN_6649e6e0
   Address: 6649e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6649e6fe) */

int FUN_6649e6e0(int param_1)

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
    piVar1 = (int *)FUN_664bab80(local_c);
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x10) + 0x28))(*(int **)(*piVar1 + 0x10));
    iVar3 = iVar3 + iVar2;
    FUN_664bab40(&local_c);
  }
  return iVar3;
}


