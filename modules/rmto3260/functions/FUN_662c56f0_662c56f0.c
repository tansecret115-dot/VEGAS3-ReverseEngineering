/* Module: rmto3260.dll
   Function: FUN_662c56f0
   Address: 662c56f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c56f0(int *param_1,short param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 local_1c [14];
  short local_e;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0x80004005;
  while( true ) {
    if (param_3 == 0) {
      return local_8;
    }
    iVar1 = (**(code **)(*(int *)param_1[6] + 0x20))(param_3,0);
    if (iVar1 < 0) {
      return local_8;
    }
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_1c);
    if (iVar1 < 0) {
      return local_8;
    }
    if (param_2 == local_e) break;
    if (iVar1 < 0) {
      return local_8;
    }
    param_3 = local_c;
    if (iVar1 < 0) {
      return local_8;
    }
  }
  *param_4 = param_3;
  return 0;
}


