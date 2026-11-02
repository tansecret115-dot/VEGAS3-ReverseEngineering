/* Module: rmme3260.dll
   Function: FUN_662174f0
   Address: 662174f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __thiscall FUN_662174f0(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = *(int *)(*(int *)((int)this + 0xe0) + 4);
  piVar2 = (int *)FUN_66250bf0(&local_8);
  iVar1 = *piVar2;
  while (iVar1 != 0) {
    FUN_66250b60(param_2,iVar1);
    piVar2 = (int *)FUN_66250bf0(&local_8);
    iVar1 = *piVar2;
  }
  return *(undefined2 *)((int)this + 0x6e);
}


