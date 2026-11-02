/* Module: rmto3260.dll
   Function: FUN_66303b90
   Address: 66303b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66303b90(int *param_1,int param_2,uint param_3,int *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  *param_4 = 0;
  *param_5 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  if (param_3 == 0xffffffff) {
    iVar1 = (**(code **)(param_1[1] + 0x18))(param_1 + 1);
    param_3 = iVar1 - param_2;
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_10,&local_18,&local_14);
  uVar5 = param_2 - local_14;
  piVar4 = (int *)0x0;
  if (local_10 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(*(int *)*local_10 + 0x18))((int *)*local_10);
    if (uVar2 < uVar5 + param_3) {
      puVar3 = operator_new(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)FUN_662eeb70(puVar3);
      }
      piVar4 = local_8;
      (**(code **)(*local_8 + 4))(local_8);
      (**(code **)(*piVar4 + 0x14))(piVar4,param_3);
      iVar1 = (**(code **)(*piVar4 + 0x1c))(piVar4);
      local_c = param_3;
      uVar2 = local_18;
      puVar3 = local_10;
      while ((puVar3 != (undefined4 *)0x0 && (local_c != 0))) {
        FUN_66303d00((undefined4 *)((iVar1 + param_3) - local_c),(int *)*puVar3,uVar5,uVar2);
        puVar3 = (undefined4 *)puVar3[2];
        local_c = local_c + (uVar5 - uVar2);
        if ((puVar3 != (undefined4 *)0x0) &&
           (uVar2 = (**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3), local_c < uVar2)) {
          uVar2 = local_c;
        }
        uVar5 = 0;
      }
      (**(code **)(*param_1 + 0x1c))(param_1,local_8,0,param_3,param_2);
      uVar5 = 0;
      piVar4 = local_8;
    }
    else {
      local_8 = (int *)*local_10;
      (**(code **)(*local_8 + 4))(local_8);
      piVar4 = local_8;
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4,param_4,param_5);
    *param_4 = *param_4 + uVar5;
    *param_5 = param_3;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  return 0;
}


