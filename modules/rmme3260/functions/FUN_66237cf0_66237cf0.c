/* Module: rmme3260.dll
   Function: FUN_66237cf0
   Address: 66237cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66237cf0(void *this,int param_1,int *param_2)

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
      if (local_10 == 0) goto LAB_66237d3a;
      do {
        piVar3 = (int *)FUN_66250c10(local_10);
        iVar2 = *piVar3;
LAB_66237d3a:
        if (iVar2 == param_1) {
          bVar1 = true;
          *param_2 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        FUN_66250bf0(&local_10);
      } while (local_10 != 0);
    }
  }
  if (!bVar1) {
    local_8 = 0x80004005;
  }
  return local_8;
}


