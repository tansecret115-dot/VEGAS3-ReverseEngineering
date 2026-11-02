/* Module: encn3260.dll
   Function: FUN_664a2020
   Address: 664a2020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664a2020(void *this,int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar4 = 0;
  local_c = (int)this + 0x38;
  bVar1 = false;
  local_8 = 0;
  if (local_c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x48);
  }
  if (iVar2 == 0) {
    local_8 = 0x80040009;
  }
  else {
    local_10 = *(int *)((int)this + 0x3c);
    if (local_10 != 0) {
      iVar2 = 0;
      if (local_10 == 0) goto LAB_664a206a;
      do {
        piVar3 = (int *)FUN_664bab80(local_10);
        iVar2 = *piVar3;
LAB_664a206a:
        if (iVar2 == param_1) {
          bVar1 = true;
          *param_2 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        FUN_664bab40(&local_10);
      } while (local_10 != 0);
    }
  }
  if (!bVar1) {
    local_8 = 0x80004005;
  }
  return local_8;
}


