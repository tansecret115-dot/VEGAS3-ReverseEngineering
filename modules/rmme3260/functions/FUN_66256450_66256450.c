/* Module: rmme3260.dll
   Function: FUN_66256450
   Address: 66256450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66256450(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_2;
  local_c = (int *)0x0;
  iVar3 = (**(code **)*param_2)(param_2,&DAT_6626b038,&local_c);
  uVar1 = param_3;
  if ((iVar3 != 0) && (local_c == (int *)0x0)) {
    uVar6 = param_4 - param_3;
    iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2);
    puVar7 = (undefined4 *)(iVar3 + uVar1);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_1 = *puVar7;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    return;
  }
  local_8 = (int *)0x0;
  param_2 = (int *)0x0;
  local_10 = 0;
  (**(code **)(*local_c + 0xc))(local_c,&local_8);
  (**(code **)(*local_8 + 0xc))(local_8);
  iVar3 = (**(code **)(*local_8 + 0x10))(local_8,1,&param_2,0);
  uVar1 = 0;
  uVar5 = param_3;
  while ((iVar3 == 0 && (param_4 != 0))) {
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar6 = uVar1 + uVar4;
    if (uVar5 <= uVar6) {
      uVar6 = param_4;
      if (uVar4 <= param_4) {
        uVar6 = uVar4;
      }
      FUN_66256450((undefined4 *)(local_10 + (int)param_1),param_2,uVar5 - uVar1,uVar6);
      local_10 = local_10 + uVar4;
      param_4 = param_4 - uVar4;
      uVar5 = 0;
      uVar6 = 0;
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    iVar3 = (**(code **)(*local_8 + 0x10))(local_8,1,&param_2,0);
    uVar1 = uVar6;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return;
}


