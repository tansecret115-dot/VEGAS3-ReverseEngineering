/* Module: sdpp3260.dll
   Function: FUN_10001710
   Address: 10001710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10001710(int param_1,ushort param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *this;
  undefined1 local_3c [20];
  int local_28 [3];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 *local_10;
  char *local_c;
  int *local_8;
  
  FUN_100029c0(local_3c,*(undefined4 *)(param_1 + 0xc));
  local_14 = 0;
  if (param_2 != 0) {
    do {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        local_10 = (undefined4 *)0x0;
      }
      else {
        local_10 = FUN_10005b50(puVar2);
      }
      this = local_10;
      local_c = (char *)0x0;
      local_8 = (int *)0x0;
      puVar2 = (undefined4 *)(param_3 + (local_14 & 0xffff) * 4);
      piVar8 = *(int **)(param_3 + (local_14 & 0xffff) * 4);
      if (piVar8 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar8 + 0x14))(piVar8,&local_c,&local_18);
        while (iVar3 == 0) {
          pvVar4 = operator_new(0x10);
          if (pvVar4 == (void *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = FUN_10006e60(pvVar4,local_c,local_18);
          }
          FUN_10005bc0(this,puVar5);
          iVar3 = (**(code **)(*(int *)*puVar2 + 0x18))((int *)*puVar2,&local_c,&local_18);
        }
        iVar3 = (**(code **)(*(int *)*puVar2 + 0x24))((int *)*puVar2,&local_c,&local_8);
        while (iVar3 == 0) {
          pvVar4 = operator_new(0x10);
          if (pvVar4 == (void *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = FUN_10006ed0(pvVar4,local_c,local_8);
          }
          FUN_10005bc0(this,puVar5);
          (**(code **)(*local_8 + 8))(local_8);
          iVar3 = (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,&local_c,&local_8);
        }
        iVar3 = (**(code **)(*(int *)*puVar2 + 0x34))((int *)*puVar2,&local_c,&local_8);
        if (iVar3 == 0) {
          local_1c = param_1 + -4;
          do {
            uVar6 = (**(code **)(*local_8 + 0x18))(local_8);
            piVar8 = local_8;
            pcVar7 = (char *)(**(code **)(*local_8 + 0x1c))(local_8,uVar6);
            pcVar7 = (char *)FUN_100012f0(pcVar7,(uint)piVar8);
            pvVar4 = operator_new(0x18);
            if (pvVar4 == (void *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar5 = FUN_10006fd0(pvVar4,local_c,pcVar7);
            }
            FUN_10005bc0(this,puVar5);
            (**(code **)(*local_8 + 8))(local_8);
            iVar3 = (**(code **)(*(int *)*puVar2 + 0x38))((int *)*puVar2,&local_c,&local_8);
            operator_delete(pcVar7);
            this = local_10;
          } while (iVar3 == 0);
        }
      }
      uVar1 = local_14;
      if ((short)local_14 == 0) {
        FUN_10005890(local_3c,this);
      }
      else if ((short)local_14 == 1) {
        FUN_100058a0(local_3c,this);
      }
      else {
        FUN_10005870(local_3c,this);
      }
      local_14 = uVar1 + 1;
    } while ((ushort)local_14 < param_2);
  }
  piVar8 = (int *)0x0;
  FUN_100043e0(local_3c,local_28);
  puVar2 = operator_new(0x28);
  if (puVar2 != (undefined4 *)0x0) {
    piVar8 = (int *)FUN_10005ca0(puVar2);
  }
  (**(code **)(*piVar8 + 4))(piVar8);
  (**(code **)(*piVar8 + 0x10))(piVar8,local_28[0],*(int *)(local_28[0] + -8) + 1);
  *param_4 = piVar8;
  FUN_10006700(local_28);
  FUN_10002a10((int)local_3c);
  return 0;
}


