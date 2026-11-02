/* Module: encn3260.dll
   Function: FUN_664ae7c0
   Address: 664ae7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664ae7c0(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (void *)((int)this + 0x21);
  iVar2 = -(uint)(*(int *)((int)this + 0x2d) != 0);
  local_c = (int *)0x0;
  local_8 = 0;
  local_14 = iVar2;
  if (iVar2 != 0) {
    FUN_664c4010(local_10,&local_14,&local_8,(int *)&local_c);
  }
  iVar1 = *param_2;
  iVar3 = local_14;
  piVar5 = local_c;
  while ((iVar1 == 0 && (iVar2 != 0))) {
    if (*piVar5 == param_1) {
      *param_2 = (int)piVar5;
    }
    iVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_664c4010(local_10,&local_14,&local_8,(int *)&local_c);
      iVar4 = local_14;
      piVar5 = local_c;
    }
    iVar1 = *param_2;
    iVar2 = iVar3;
    iVar3 = iVar4;
  }
  return;
}


