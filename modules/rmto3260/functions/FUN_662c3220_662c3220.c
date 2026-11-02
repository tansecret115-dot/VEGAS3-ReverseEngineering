/* Module: rmto3260.dll
   Function: FUN_662c3220
   Address: 662c3220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3220(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int local_18 [3];
  int *local_c;
  uint local_8;
  
  local_c = (int *)0x0;
  local_8 = 0;
  iVar1 = (**(code **)(*param_2 + 0x38))(&local_c);
  if ((iVar1 < 0) || (local_c == (int *)0x0)) {
LAB_662c3293:
    if (-1 < iVar1) goto LAB_662c32ba;
  }
  else {
    iVar1 = *local_c;
    puVar3 = &local_8;
    puVar2 = FUN_662ef160(local_18,s_EndTime_6630a138);
    iVar1 = (**(code **)(iVar1 + 0x10))(local_c,*puVar2,puVar3);
    FUN_662ef0f0(local_18);
    if (-1 < iVar1) {
      if ((*(int *)(param_1 + 0x62) == 0) || (*(uint *)(param_1 + 0x6a) < local_8)) {
        *(uint *)(param_1 + 0x6a) = local_8;
        *(undefined4 *)(param_1 + 0x62) = 1;
      }
      goto LAB_662c3293;
    }
  }
  if (*(int *)(param_1 + 0x62) == 0) {
    iVar1 = FUN_662ded00(param_2,&local_8);
    if ((-1 < iVar1) && (*(uint *)(param_1 + 0x6a) < local_8)) {
      *(uint *)(param_1 + 0x6a) = local_8;
    }
  }
LAB_662c32ba:
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}


