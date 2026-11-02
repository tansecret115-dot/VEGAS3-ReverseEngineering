/* Module: rmme3260.dll
   Function: FUN_66242aa0
   Address: 66242aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66242aa0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_38;
  char *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  char *local_20;
  undefined4 local_1c;
  int *local_18;
  char *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  if (DAT_6627d058 == 0) {
    DAT_6627d058 = 1;
    local_18 = (int *)0x0;
    local_10 = (int *)0x0;
    piVar4 = (int *)0x0;
    iVar1 = (**(code **)*param_1)(param_1,&DAT_6626adb8,&local_8);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*local_8 + 0x78))(local_8,s_config_FSMount_66270184,&local_24);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*local_24 + 0x14))(local_24,&local_20,&local_1c);
        while (iVar1 == 0) {
          iVar1 = (**(code **)(*local_8 + 0x60))(local_8,local_1c);
          if (iVar1 == 1) {
            local_14 = strrchr(local_20,0x2e);
            if (local_14 == (char *)0x0) {
              local_14 = local_20;
            }
            else {
              local_14 = local_14 + 1;
            }
            iVar1 = (**(code **)(*local_8 + 0x7c))(local_8,local_1c,&local_30);
            if (iVar1 == 0) {
              piVar4 = operator_new(0x6c);
              if (piVar4 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              else {
                *piVar4 = (int)&PTR_LAB_6626b730;
                piVar4[1] = 0;
                FUN_66252680(piVar4 + 2,10);
                FUN_66252680(piVar4 + 9,10);
                FUN_66252680(piVar4 + 0x10,10);
                piVar4[0x17] = 0;
                piVar4[0x18] = 0;
                piVar4[0x19] = 0;
                piVar4[0x1a] = 0;
                *piVar4 = (int)&PTR_FUN_6626b6f0;
              }
              (**(code **)(*piVar4 + 4))(piVar4);
              iVar1 = (**(code **)(*local_30 + 0x14))(local_30,&local_34,&local_c);
              while (iVar1 == 0) {
                iVar1 = (**(code **)(*local_8 + 0x60))(local_8,local_c);
                pcVar2 = strrchr(local_34,0x2e);
                pcVar2 = pcVar2 + 1;
                if (iVar1 == 2) {
                  iVar1 = (**(code **)(*local_8 + 0x1c))(local_8,local_c,&local_38);
                  if (iVar1 == 0) {
                    (**(code **)(*piVar4 + 0xc))(piVar4,pcVar2,local_38);
                  }
                }
                else if (iVar1 == 4) {
                  iVar1 = (**(code **)(*local_8 + 0x30))(local_8,local_c,&local_2c);
                  if (iVar1 == 0) {
                    (**(code **)(*piVar4 + 0x1c))(piVar4,pcVar2,local_2c);
                    (**(code **)(*local_2c + 8))(local_2c);
                  }
                }
                else if ((iVar1 == 5) &&
                        (iVar1 = (**(code **)(*local_8 + 0x44))(local_8,local_c,&local_28),
                        iVar1 == 0)) {
                  (**(code **)(*piVar4 + 0x1c))(piVar4,pcVar2,local_28);
                  (**(code **)(*local_28 + 8))(local_28);
                }
                iVar1 = (**(code **)(*local_30 + 0x18))(local_30,&local_34,&local_c);
              }
            }
            iVar1 = (**(code **)(*piVar4 + 0x20))(piVar4,s_MountPoint_66270178,&local_18);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*piVar4 + 0x20))(piVar4,s_ShortName_6627016c,&local_10);
              if (iVar1 == 0) {
                local_14 = (char *)(**(code **)(*local_10 + 0x1c))(local_10);
              }
              piVar5 = local_18;
              piVar6 = piVar4;
              pbVar3 = (byte *)(**(code **)(*local_18 + 0x1c))(local_18,piVar4,param_1);
              FUN_66242d30(local_14,pbVar3,piVar5,piVar6);
              if (local_10 != (int *)0x0) {
                (**(code **)(*local_10 + 8))(local_10);
                local_10 = (int *)0x0;
              }
              (**(code **)(*local_18 + 8))(local_18);
            }
            iVar1 = (**(code **)(*local_24 + 0x18))(local_24,&local_20,&local_1c);
          }
          else {
            iVar1 = -0x7fffbffb;
          }
        }
        (**(code **)(*local_24 + 8))(local_24);
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return;
}


