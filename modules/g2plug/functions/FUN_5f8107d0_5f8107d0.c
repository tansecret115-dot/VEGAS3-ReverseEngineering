/* Module: g2plug.dll
   Function: FUN_5f8107d0
   Address: 5f8107d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8107d0(HKEY param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,int param_5,
                undefined4 *param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  HGLOBAL pvVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_34;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_30[1] = 0x800;
  pvVar3 = GlobalAlloc(0x42,0x800);
  local_34 = GlobalLock(pvVar3);
  puVar2 = param_4;
  puVar1 = param_3;
  if (local_34 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  puVar6 = local_24;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_3 = 0;
  *param_4 = 0;
  local_10 = param_2;
  local_24[1] = *param_6;
  local_24[2] = param_6[1];
  local_24[0] = 0x24;
  local_30[0] = 0x24;
  local_24[3] = param_6[2];
  local_14 = param_6[3];
  iVar5 = FUN_5f810960(param_1,"Version",(LPBYTE)&local_28);
  if (iVar5 < 0) {
    local_c = 0x3eb;
  }
  else {
    local_c = local_28;
  }
  puVar4 = (uint *)FUN_5f810ad0(param_1,(int *)&local_34,local_30,local_30 + 1,&local_8);
  param_4 = puVar4;
  if ((int)puVar4 < 0) {
    if (local_34 != (undefined4 *)0x0) {
      pvVar3 = GlobalHandle(local_34);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(local_34);
      GlobalFree(pvVar3);
      return (int)puVar4;
    }
  }
  else {
    if (param_5 != 0) {
      param_3 = (undefined4 *)0x1;
      local_30[0] = FUN_5f8109b0((int *)&local_34,local_30[0],local_30 + 1,"DisableEdit",4,&param_3,
                                 4);
      local_8 = local_8 + 1;
    }
    local_4 = local_30[0] - 0x24;
    puVar6 = local_24;
    puVar7 = local_34;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *puVar1 = local_34;
    *puVar2 = local_30[0];
  }
  return (int)param_4;
}


