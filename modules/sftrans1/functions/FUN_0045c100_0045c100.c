/* Module: sftrans1.dll
   Function: FUN_0045c100
   Address: 0045c100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045c100(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  param_1[0x17] = param_1[0x17] + 1;
  if (param_2 != 0) {
    local_10 = (int *)param_1[0x27];
    iVar3 = param_1[0x1d];
    bVar4 = local_10 != (int *)0x0;
    local_c = iVar3;
    if (bVar4) {
      (**(code **)(*local_10 + 4))(local_10);
    }
    piVar2 = (int *)&stack0xffffffe0;
    piVar1 = (int *)&stack0xffffffe0;
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
      if (!bVar4) goto LAB_0045c1ed;
    }
    else {
      FUN_00551640();
      if (iVar3 != 0) {
        iVar3 = 0;
        local_8 = local_c;
        do {
          piVar2 = *(int **)(iVar3 + param_1[0x26]);
          *piVar1 = (int)piVar2;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))(piVar2);
          }
          iVar3 = iVar3 + 0x18;
          piVar1 = piVar1 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_8 = 0;
        piVar2 = (int *)&stack0xffffffe0;
        iVar3 = local_c;
      }
    }
    local_8 = (**(code **)(*param_1 + 0x18))(param_1,piVar2,iVar3,&local_10,bVar4,0);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar2 = piVar2 + 1;
    }
  }
LAB_0045c1ed:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return local_8;
}


