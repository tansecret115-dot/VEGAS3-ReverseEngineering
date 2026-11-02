/* Module: rmto3260.dll
   Function: FUN_662d3510
   Address: 662d3510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d3510(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 local_28 [4];
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 local_1e;
  undefined1 local_1c [4];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  short local_c;
  undefined4 local_8;
  
  iVar1 = *param_2;
  iVar3 = 0;
  pvVar4 = (void *)0x0;
  local_c = *(short *)(iVar1 + 10);
  if (*(int *)((int)param_2 + 0x16) == 0) {
    iVar3 = -0x7ffbfffc;
  }
  iVar2 = param_1;
  if ((-1 < iVar3) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))(*(int **)(param_1 + 0x38),&param_2),
     iVar2 = param_1, -1 < iVar3)) {
    pvVar4 = operator_new((uint)param_2);
    if (pvVar4 == (void *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    iVar2 = param_1;
    if ((-1 < iVar3) &&
       (iVar3 = (**(code **)(*param_3 + 8))(param_3,*(undefined4 *)(iVar1 + 0x24)), iVar2 = param_1,
       -1 < iVar3)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x50))
                        (*(int **)(param_1 + 0x38),
                         CONCAT22((short)((uint)&local_8 >> 0x10),*(undefined2 *)(param_1 + 0x58)),
                         &local_8);
    }
  }
  if (-1 < iVar3) {
    iVar3 = (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))
                      (*(int **)(iVar2 + 0x38),local_8,0,&param_1);
    while (-1 < iVar3) {
      iVar3 = (**(code **)(**(int **)(iVar2 + 0x38) + 0x28))
                        (*(int **)(iVar2 + 0x38),local_28,pvVar4,param_2,&local_10);
      if (-1 < iVar3) {
        param_1 = CONCAT22(uStack_22,local_24);
      }
      if (iVar3 == -0x7ffbfc36) {
        iVar3 = 0;
        break;
      }
      if ((short)param_1 == local_c) {
        if (iVar3 < 0) break;
        local_18 = 0;
        local_16 = 0;
        local_14 = local_1e;
        iVar3 = (**(code **)(*param_3 + 0x10))(param_3,local_1c,pvVar4,local_10);
      }
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return iVar3;
}


