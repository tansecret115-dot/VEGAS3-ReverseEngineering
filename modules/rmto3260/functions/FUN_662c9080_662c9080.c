/* Module: rmto3260.dll
   Function: FUN_662c9080
   Address: 662c9080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9080(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  piVar1 = param_1;
  iVar4 = 0;
  local_c = param_1 + 0xd;
  local_8 = 0;
  *local_c = -1;
  local_18 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x10] + 0x30))((int *)param_1[0x10],&local_8);
  if (iVar2 < 0) {
    return iVar2;
  }
  local_1c = 0;
  local_14 = 0;
  if ((short)local_8 != 0) {
    do {
      if (iVar2 < 0) break;
      local_10 = 0;
      param_1 = (int *)0x0;
      iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x38))((int *)piVar1[0x10],iVar4,&param_1);
      if (((((uint)piVar1[0xf] < 2) || (*(int *)((int)param_1 + 0x16) == 0)) && (-1 < iVar2)) &&
         ((iVar2 = FUN_662d0e40(&local_10,*param_1,(uint *)&local_10), -1 < iVar2 && (local_10 != 0)
          ))) {
        local_18 = 1;
        iVar3 = FUN_662cae30(param_1);
        if ((iVar3 != 0) && (local_14 < (uint)param_1[4])) {
          local_1c = iVar4;
          local_14 = param_1[4];
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(local_8 & 0xffff));
  }
  piVar1[0x23] = local_18;
  if (piVar1[0x11] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(piVar1[0x11] + 0x10);
  }
  if ((iVar4 < 2) && (piVar1[0xb] != 0)) {
    if (local_18 == 0) {
      *local_c = piVar1[0xb];
    }
    else {
      param_1 = (int *)0x0;
      if ((-1 < iVar2) &&
         (iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x38))((int *)piVar1[0x10],local_1c,&param_1),
         -1 < iVar2)) {
        iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1,param_1,local_c);
        return iVar2;
      }
    }
    return iVar2;
  }
  piVar1[0xb] = 0;
  *local_c = 0;
  return 0;
}


