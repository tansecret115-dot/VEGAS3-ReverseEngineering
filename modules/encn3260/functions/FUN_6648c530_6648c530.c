/* Module: encn3260.dll
   Function: FUN_6648c530
   Address: 6648c530
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648c530(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x20);
  if (local_8 == 0) {
    return 0;
  }
  do {
    piVar2 = (int *)FUN_664bab80(local_8);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0xc) == param_1) {
      (**(code **)(*(int *)((int)this + 0x1c) + 0xc))(local_8);
      return iVar1;
    }
    FUN_664bab40(&local_8);
  } while (local_8 != 0);
  return 0;
}


