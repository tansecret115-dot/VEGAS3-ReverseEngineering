/* Module: encn3260.dll
   Function: FUN_66489e40
   Address: 66489e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66489e40(void *this,byte *param_1)

{
  int iVar1;
  void *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  (**(code **)**(undefined4 **)((int)this + 4))
            (*(undefined4 **)((int)this + 4),&DAT_664dd890,&local_10);
  if (local_10 == (int *)0x0) {
    local_18 = (int *)0x0;
    (**(code **)**(undefined4 **)((int)this + 4))
              (*(undefined4 **)((int)this + 4),&DAT_664dd880,&local_18);
    if (local_18 != (int *)0x0) {
      iVar1 = FUN_664cf000((void *)local_18[9],param_1,&local_1c);
      if (iVar1 == 0) {
        local_14 = (int *)0x0;
        FUN_664cf5e0(local_1c,&local_14);
        if (local_14 != (int *)0x0) {
          iVar1 = (**(code **)*local_14)(local_14,&DAT_664dd0b0,&local_8);
          if (iVar1 == 0) {
            param_1 = (byte *)0x0;
            iVar1 = (**(code **)*local_8)(local_8,&DAT_664dcd10,&param_1);
            if (iVar1 == 0) {
              (**(code **)(*(int *)param_1 + 0x10))(param_1,*(undefined4 *)((int)this + 4));
              (**(code **)(*(int *)param_1 + 8))(param_1);
            }
          }
          (**(code **)(*local_14 + 8))(local_14);
        }
        FUN_66494490();
      }
      (**(code **)(*local_18 + 8))(local_18);
    }
  }
  else {
    iVar1 = (**(code **)(*local_10 + 0x30))
                      (local_10,s_PluginType_664e2734,s_PLUGIN_STREAM_DESC_664e2740,
                       s_StreamDescription_664e2720,param_1,0,0,&local_c);
    if (iVar1 == 0) {
      iVar1 = (**(code **)*local_c)(local_c,&DAT_664dd0b0,&local_8);
      if (iVar1 == 0) {
        param_1 = (byte *)0x0;
        iVar1 = (**(code **)*local_8)(local_8,&DAT_664dcd10,&param_1);
        if (iVar1 == 0) {
          (**(code **)(*(int *)param_1 + 0x10))(param_1,*(undefined4 *)((int)this + 4));
          (**(code **)(*(int *)param_1 + 8))(param_1);
        }
      }
      (**(code **)(*local_c + 8))(local_c);
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      return local_8;
    }
  }
  return local_8;
}


