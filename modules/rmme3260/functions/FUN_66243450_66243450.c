/* Module: rmme3260.dll
   Function: FUN_66243450
   Address: 66243450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66243450(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  (**(code **)(*param_1 + 4))(param_1);
  puVar1 = (undefined4 *)param_1[10];
  if (puVar1 == (undefined4 *)0x0) goto LAB_66243553;
  iVar3 = (**(code **)*puVar1)(puVar1,&DAT_6626a968,param_1 + 4);
  if (iVar3 == 0) {
    iVar3 = (*(code *)**(undefined4 **)param_1[10])
                      ((undefined4 *)param_1[10],&DAT_6626a998,&local_8);
    if (iVar3 == 0) {
      if (local_8 != (int *)0x0) {
        iVar3 = (**(code **)(*local_8 + 0x10))(local_8,&local_c);
        if ((iVar3 == 0) && (local_c != (int *)0x0)) {
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          piVar2 = (int *)param_1[6];
          piVar4 = param_1 + 6;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar4 = 0;
          }
          FUN_66264690(local_c,piVar4);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          (**(code **)(*(int *)*piVar4 + 0x1c))((int *)*piVar4,param_1[0xb]);
          if (param_1 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = param_1 + 1;
          }
          iVar3 = (**(code **)(*(int *)param_1[4] + 0xc))((int *)param_1[4],piVar4);
          if (iVar3 == 0) goto LAB_66243553;
          goto LAB_6624354c;
        }
        goto LAB_6624352f;
      }
    }
    else {
LAB_6624352f:
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  }
LAB_6624354c:
  local_10 = 0x80004005;
LAB_66243553:
  piVar4 = (int *)param_1[4];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[4] = 0;
  }
  piVar4 = (int *)param_1[10];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    param_1[10] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return local_10;
}


