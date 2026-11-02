/* Module: encn3260.dll
   Function: FUN_6648d090
   Address: 6648d090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6648d090(void *this,ushort param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_664bbdc0(*(void **)((int)this + 8),(uint)param_1,&local_8);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  pvVar2 = operator_new(0x2a);
  if (pvVar2 == (void *)0x0) {
    local_8 = (void *)0x0;
  }
  else {
    local_8 = (void *)FUN_6648cec0(pvVar2,param_2);
  }
  *(ushort *)((int)local_8 + 0x10) = param_1;
  piVar3 = FUN_664bbe00(*(void **)((int)this + 8),(uint)param_1);
  *piVar3 = (int)local_8;
  if (param_5 != 0) {
    iVar1 = param_7;
    if (param_7 != -1) goto LAB_6648d115;
    if (param_5 != 0) {
      param_7 = 15000;
      iVar1 = 15000;
      goto LAB_6648d115;
    }
  }
  param_7 = 15000;
  iVar1 = 2000;
LAB_6648d115:
  if (param_3 == 0) {
    pvVar2 = operator_new(0x212);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_66494900(pvVar2,*(int *)((int)this + 4),param_1,iVar1,param_7,1000,param_6);
    }
    *(int **)((int)local_8 + 0x16) = piVar3;
    *(undefined4 *)((int)local_8 + 0x1e) = 0;
  }
  return 0;
}


