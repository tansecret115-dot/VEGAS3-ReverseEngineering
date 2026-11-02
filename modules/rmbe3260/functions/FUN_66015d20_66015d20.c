/* Module: rmbe3260.dll
   Function: FUN_66015d20
   Address: 66015d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66015d20(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int local_38 [11];
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar4 = 0;
  local_8 = 0;
  FUN_660367e0(local_38);
  if ((param_1[0x22] == 0) && (param_1[0x24] == 0)) {
    iVar4 = -0x7fffbffb;
  }
  else {
    FUN_66036bb0(local_38,(char *)param_1[0x15],0xffffffff);
    FUN_66036c50(local_38,(char *)param_1[0x18],0xffffffff);
    FUN_66036cf0(local_38,(char *)param_1[0x1b],0xffffffff);
    FUN_66036d90(local_38,(char *)param_1[0x1e],0xffffffff);
    if (*(void **)((int)param_1 + 0x9e) != (void *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x9e));
      *(undefined4 *)((int)param_1 + 0x9e) = 0;
      *(undefined4 *)((int)param_1 + 0xa2) = 0;
    }
    uVar1 = FUN_66036890((int)local_38);
    *(uint *)((int)param_1 + 0xa2) = uVar1;
    puVar2 = operator_new(uVar1);
    *(undefined1 **)((int)param_1 + 0x9e) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      iVar4 = -0x7ff8fff2;
    }
    else {
      FUN_660368c0(local_38,puVar2,*(uint *)((int)param_1 + 0xa2));
      if ((int *)param_1[0x22] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x22] + 0x1c))
                  (*(undefined4 *)((int)param_1 + 0xa2),*(undefined4 *)((int)param_1 + 0x9e));
      }
      if ((int *)param_1[0x24] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x24] + 0x1c))
                  (*(undefined4 *)((int)param_1 + 0xa2),*(undefined4 *)((int)param_1 + 0x9e));
      }
      (**(code **)(*param_1 + 0x54))();
      if ((int *)param_1[0x22] != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)param_1[0x22] + 0x20))();
      }
      iVar3 = local_8;
      if ((int *)param_1[0x24] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x24] + 0x20))();
      }
      if (-1 < iVar4) {
        if (iVar3 < 0) {
          if (-1 < iVar4) {
            iVar4 = iVar3;
          }
        }
        else {
          param_1[0x2b] = 1;
          iVar4 = local_c;
        }
      }
    }
  }
  FUN_66036860(local_38);
  return iVar4;
}


