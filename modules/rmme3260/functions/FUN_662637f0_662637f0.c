/* Module: rmme3260.dll
   Function: FUN_662637f0
   Address: 662637f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662637f0(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined4 local_40;
  int local_3c;
  char *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  byte *local_14;
  byte *local_10;
  undefined4 local_c;
  int *local_8;
  
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  piVar9 = (int *)0x0;
  local_3c = param_1;
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                    (*(undefined4 **)(param_1 + 0x48),&DAT_6626adb8,&local_8);
  if (iVar2 == 0) {
    pcVar3 = s_config_FSMount_66270184;
    local_24 = 0;
    do {
      iVar2 = (**(code **)(*local_8 + 0x78))(local_8,pcVar3,&local_28);
      if (iVar2 != 0) goto LAB_66263ae8;
      iVar2 = (**(code **)(*local_28 + 0x14))(local_28,&local_14,&local_20);
      while (iVar2 == 0) {
        iVar2 = (**(code **)(*local_8 + 0x60))(local_8,local_20);
        if (iVar2 == 1) {
          pcVar3 = strrchr((char *)local_14,0x2e);
          pbVar6 = local_14;
          if (pcVar3 != (char *)0x0) {
            pbVar6 = (byte *)(pcVar3 + 1);
          }
          local_10 = pbVar6;
          iVar2 = (**(code **)(*local_8 + 0x7c))(local_8,local_20,&local_34);
          if (iVar2 == 0) {
            piVar9 = operator_new(0x6c);
            if (piVar9 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              *piVar9 = (int)&PTR_LAB_6626b730;
              piVar9[1] = 0;
              FUN_66252680(piVar9 + 2,10);
              FUN_66252680(piVar9 + 9,10);
              FUN_66252680(piVar9 + 0x10,10);
              piVar9[0x17] = 0;
              piVar9[0x18] = 0;
              piVar9[0x19] = 0;
              piVar9[0x1a] = 0;
              *piVar9 = (int)&PTR_FUN_6626b6f0;
            }
            (**(code **)(*piVar9 + 4))(piVar9);
            puVar4 = operator_new(0x28);
            if (puVar4 == (undefined4 *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = (int *)FUN_662522d0(puVar4);
            }
            (**(code **)(*piVar5 + 4))(piVar5);
            uVar8 = 0xffffffff;
            pbVar6 = local_14;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar1 != 0);
            (**(code **)(*piVar5 + 0x10))(piVar5,local_14,~uVar8);
            (**(code **)(*piVar9 + 0x1c))(piVar9,s_LongName_6627cb38,piVar5);
            (**(code **)(*piVar5 + 8))(piVar5);
            iVar2 = (**(code **)(*local_34 + 0x14))(local_34,&local_38,&local_c);
            pbVar6 = local_10;
            while (local_10 = pbVar6, iVar2 == 0) {
              iVar2 = (**(code **)(*local_8 + 0x60))(local_8,local_c);
              pcVar3 = strrchr(local_38,0x2e);
              pcVar3 = pcVar3 + 1;
              if (iVar2 == 2) {
                iVar2 = (**(code **)(*local_8 + 0x1c))(local_8,local_c,&local_40);
                if (iVar2 == 0) {
                  (**(code **)(*piVar9 + 0xc))(piVar9,pcVar3,local_40);
                }
              }
              else if (iVar2 == 4) {
                iVar2 = (**(code **)(*local_8 + 0x30))(local_8,local_c,&local_30);
                if (iVar2 == 0) {
                  (**(code **)(*piVar9 + 0x1c))(piVar9,pcVar3,local_30);
                  (**(code **)(*local_30 + 8))(local_30);
                }
              }
              else if ((iVar2 == 5) &&
                      (iVar2 = (**(code **)(*local_8 + 0x44))(local_8,local_c,&local_2c), iVar2 == 0
                      )) {
                (**(code **)(*piVar9 + 0x1c))(piVar9,pcVar3,local_2c);
                (**(code **)(*local_2c + 8))(local_2c);
              }
              iVar2 = (**(code **)(*local_34 + 0x18))(local_34,&local_38,&local_c);
              pbVar6 = local_10;
            }
          }
          iVar2 = (**(code **)(*piVar9 + 0x20))(piVar9,s_MountPoint_66270178,&local_1c);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*piVar9 + 0x20))(piVar9,s_ShortName_6627016c,&local_18);
            if (iVar2 == 0) {
              pbVar6 = (byte *)(**(code **)(*local_18 + 0x1c))(local_18);
              local_10 = pbVar6;
            }
            if (local_24 == 0) {
              piVar5 = piVar9;
              pcVar3 = (char *)(**(code **)(*local_1c + 0x1c))(local_1c);
              FUN_66262db0(*(void **)(local_3c + 0x10),pbVar6,pcVar3,(int)piVar5);
            }
            else if (local_24 == 1) {
              piVar5 = piVar9;
              piVar7 = (int *)(**(code **)(*local_1c + 0x1c))(local_1c);
              FUN_66262840(*(void **)(local_3c + 0xc),pbVar6,piVar7,piVar5);
            }
            if (local_18 != (int *)0x0) {
              (**(code **)(*local_18 + 8))(local_18);
              local_18 = (int *)0x0;
            }
            (**(code **)(*local_1c + 8))(local_1c);
          }
          iVar2 = (**(code **)(*local_28 + 0x18))(local_28,&local_14,&local_20);
        }
        else {
          iVar2 = -0x7fffbffb;
        }
      }
      pcVar3 = s_config_DataConvertMount_6627cb20;
      local_24 = local_24 + 1;
    } while (local_24 < 2);
    (**(code **)(*local_28 + 8))(local_28);
LAB_66263ae8:
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


