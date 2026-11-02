/* Module: rmbe3260.dll
   Function: FUN_6601d8a0
   Address: 6601d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601d8a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_c;
  int *local_8;
  
  iVar1 = param_1;
  bVar5 = false;
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (*(int **)(param_1 + 0x120) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x120) + 0x18))();
      if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
    }
    piVar4 = (int *)(param_1 + 0x98);
    param_1 = 0;
    if ((*piVar4 != 0) &&
       (iVar2 = (**(code **)(**(int **)(iVar1 + 0x74) + 0x30))(*(int **)(iVar1 + 0x74)), iVar2 < 0))
    {
      param_1 = iVar2;
    }
    if ((*(int *)(iVar1 + 0x9c) != 0) &&
       (iVar2 = (**(code **)(**(int **)(iVar1 + 0x78) + 0x30))(*(int **)(iVar1 + 0x78)), iVar2 < 0))
    {
      param_1 = iVar2;
    }
    if ((*(int *)(iVar1 + 0xa0) != 0) &&
       (iVar2 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0x30))(*(int **)(iVar1 + 0x7c)), iVar2 < 0))
    {
      param_1 = iVar2;
    }
    if ((*(int *)(iVar1 + 0xa4) != 0) &&
       (iVar2 = (**(code **)(**(int **)(iVar1 + 0x80) + 0x30))(*(int **)(iVar1 + 0x80)), iVar2 < 0))
    {
      param_1 = iVar2;
    }
    if ((*(int *)(iVar1 + 0xa8) != 0) &&
       (iVar2 = (**(code **)(**(int **)(iVar1 + 0x84) + 0x30))(*(int **)(iVar1 + 0x84)), iVar2 < 0))
    {
      param_1 = iVar2;
    }
    iVar2 = iVar1 + -0x10;
    iVar3 = (**(code **)(*(int *)(iVar1 + -0x10) + 0x3c))(iVar2);
    if (iVar3 < 0) {
      param_1 = iVar3;
    }
    if (*(int *)(iVar1 + 0xb4) != 0) {
      local_8 = (int *)0x0;
      local_c = 0;
      iVar3 = (**(code **)**(undefined4 **)(iVar1 + 0x1c6))
                        (*(undefined4 **)(iVar1 + 0x1c6),&DAT_66064f88,&local_8);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(**(int **)(iVar1 + 0x1c6) + 0x10))
                          (*(int **)(iVar1 + 0x1c6),s_List_Broadcast_6606db88,&local_c);
        bVar5 = -1 < iVar3;
        if (bVar5) {
          (**(code **)(*local_8 + 0x10))(local_8,s_List_Broadcast_6606db88);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
      if (((*(int *)(iVar1 + 300) == 0) && (*(int *)(iVar1 + 0x1ce) != 1)) && (-1 < param_1)) {
        if (*(int *)(iVar1 + 0xb0) == 0) {
          param_1 = FUN_6601edc0(iVar2);
        }
        else {
          param_1 = FUN_6601e5b0(iVar2);
        }
      }
      if (bVar5) {
        (**(code **)(**(int **)(iVar1 + 0x1c6) + 0xc))
                  (*(int **)(iVar1 + 0x1c6),s_List_Broadcast_6606db88,local_c);
      }
    }
    if ((((*(int *)(iVar1 + 300) != 0) || (*(int *)(iVar1 + 0x128) == 0)) ||
        (*(int *)(iVar1 + 0x1ce) == 1)) && (*(int *)(iVar1 + 0x124) != 0)) {
      piVar4 = FUN_6604fb50(0);
      (**(code **)(*piVar4 + 0x44))(*(undefined4 *)(iVar1 + 0xd4));
      if (piVar4 != (int *)0x0) {
        (**(code **)*piVar4)(1);
      }
    }
    FUN_6601dab0(iVar2);
    if ((-1 < param_1) && (param_1 == 0x40012)) {
      param_1 = 0;
    }
    return param_1;
  }
  return -0x7ffbfda8;
}


