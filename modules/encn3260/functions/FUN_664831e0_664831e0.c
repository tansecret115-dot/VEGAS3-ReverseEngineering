/* Module: encn3260.dll
   Function: FUN_664831e0
   Address: 664831e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664831e0(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*(int *)param_1[10] + 0x10))((int *)param_1[10],&local_8);
  if (iVar1 != 0) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*(int *)param_1[9] + 0x1c))
                    ((int *)param_1[9],param_1[0x13],*(undefined4 *)((int)param_1 + 0x6a),
                     param_1[0xe],local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (iVar1 != 0) {
    FUN_66483190(param_1,iVar1,s_Failed_to_send_description_664e22a8);
    return iVar1;
  }
  return 0;
}


