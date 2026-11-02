/* Module: rmto3260.dll
   Function: FUN_662d1320
   Address: 662d1320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d1320(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 local_18 [5];
  
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    iVar2 = -0x7ffbfff9;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
      if (-1 < iVar2) {
        if (param_1[7] != 0) {
          iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
        }
        if (-1 < iVar2) {
          if (param_1[8] != 0) {
            iVar2 = (**(code **)(*param_1 + 0x34))(param_1);
          }
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
            if (-1 < iVar2) {
              iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
              if (-1 < iVar2) {
                iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x24))();
              }
            }
          }
        }
      }
    }
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((iVar2 != 0) && (*(int *)((int)param_1 + 0x6e) != 0)) {
    FUN_662f30d0(local_18);
    bVar1 = FUN_662f5740(param_1[6]);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_662f38d0(local_18,(char *)param_1[6]);
    }
    FUN_662f30f0(local_18);
  }
  return iVar2;
}


