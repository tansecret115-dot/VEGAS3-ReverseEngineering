/* Module: encn3260.dll
   Function: FUN_6648af30
   Address: 6648af30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6648af30(void *this,int param_1,short param_2,int param_3,char *param_4,short param_5,
            int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  (**(code **)(**(int **)((int)this + 0x20) + 4))();
  local_10 = *(int *)((int)this + 0xc);
  local_c = (int)this + 8;
  iVar3 = 0;
  if (local_10 != 0) {
    if (local_10 == 0) goto LAB_6648af6d;
    do {
      piVar1 = (int *)FUN_664bab80(local_10);
      iVar3 = *piVar1;
LAB_6648af6d:
      if ((((*(int *)(iVar3 + 0x12) == param_1) && (*(short *)(iVar3 + 0x1a) == param_2)) &&
          ((param_6 == 0 || (param_6 == *(int *)(iVar3 + 0x20))))) &&
         (((this = local_8, param_3 == 0 || (param_4 == (char *)0x0)) ||
          ((iVar2 = _stricmp(param_4,*(char **)(iVar3 + 0xc)), iVar2 == 0 &&
           (this = local_8, param_5 == *(short *)(iVar3 + 0x10))))))) break;
      iVar3 = 0;
      FUN_664bab40(&local_10);
      this = local_8;
    } while (local_10 != 0);
  }
  (**(code **)(**(int **)((int)this + 0x20) + 8))();
  return iVar3;
}


