/* Module: encn3260.dll
   Function: FUN_664ad420
   Address: 664ad420
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664ad420(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int local_2c [3];
  LPCSTR local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar4 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  if (param_1[5] == 0) {
    return -0x7fffbffb;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (*(code *)**(undefined4 **)param_1[5])((undefined4 *)param_1[5],&DAT_664dd890,&local_18);
  if ((iVar1 == 0) && (piVar3 = (int *)param_1[6], piVar3 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,&local_20);
    if (iVar1 == 0) {
      pcVar2 = FUN_664d1ce0(local_20,':');
      if (pcVar2 == (char *)0x0) {
        iVar4 = -0x7fffbffb;
      }
      if (iVar4 == 0) {
        FUN_664bb980(local_2c,(undefined4 *)local_20,(int)pcVar2 - (int)local_20);
        iVar4 = (**(code **)(*local_18 + 0x30))
                          (local_18,s_PluginType_664e2734,s_PLUGIN_FILE_SYSTEM_664e36d0,
                           s_FileProtocol_664e36b4,local_2c[0],0,0,&local_8);
        if (iVar4 != 0) {
          FUN_664bb3e0(local_2c);
          goto LAB_664ad5e4;
        }
        local_1c = (int *)0x0;
        iVar4 = (**(code **)*local_8)(local_8,&DAT_664dcd10,&local_1c);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*local_1c + 0x10))(local_1c,param_1[5]);
          (**(code **)(*local_1c + 8))(local_1c);
          if (iVar4 == 0) {
            iVar4 = (**(code **)*local_8)(local_8,&DAT_664dc880,&local_10);
          }
        }
        piVar3 = (int *)FUN_664ad140(local_20);
        (**(code **)(*local_10 + 0x10))(local_10,piVar3);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*local_10 + 0x14))(local_10,&local_c);
          if (iVar4 == 0) {
            iVar1 = (**(code **)*local_c)(local_c,&DAT_664dc980,&local_14);
            if (iVar1 == 0) {
              (**(code **)(*local_14 + 0xc))(local_14,param_1[6]);
              FUN_664bb3e0(local_2c);
              goto LAB_664ad5b6;
            }
            iVar4 = -0x7fffbffb;
          }
        }
        FUN_664bb3e0(local_2c);
      }
      else {
        iVar4 = -0x7fffbffb;
      }
LAB_664ad5b6:
      if ((iVar4 == 0) && (local_c != (int *)0x0)) {
        (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],0,local_c);
      }
      else {
        (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],0x80004005,0);
      }
      goto LAB_664ad5e4;
    }
  }
  iVar4 = -0x7fffbffb;
LAB_664ad5e4:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
    local_18 = (int *)0x0;
  }
  piVar3 = (int *)param_1[6];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[6] = 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return iVar4;
}


