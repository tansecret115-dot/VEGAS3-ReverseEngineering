/* Module: rmme3260.dll
   Function: FUN_66203ac0
   Address: 66203ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66203ac0(void *this,short param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x14);
  local_8 = (int)this + 0x10;
  uVar3 = 0x40012;
  if (local_c != 0) {
    if (local_c != 0) goto LAB_66203aea;
    iVar4 = 0;
    while( true ) {
      sVar1 = FUN_662182a0(iVar4);
      if (sVar1 == param_1) break;
      FUN_66250bf0(&local_c);
      if (local_c == 0) {
        return 0x40012;
      }
LAB_66203aea:
      piVar2 = (int *)FUN_66250c10(local_c);
      iVar4 = *piVar2;
    }
    uVar3 = 0;
    *param_2 = iVar4;
  }
  return uVar3;
}


