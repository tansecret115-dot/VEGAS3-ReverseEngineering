/* Module: wmfplug2.dll
   Function: FUN_0041cca0
   Address: 0041cca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041cca0(HKEY param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_44;
  uint local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_40[1] = 0x800;
  pvVar2 = GlobalAlloc(0x42,0x800);
  local_44 = GlobalLock(pvVar2);
  puVar1 = param_3;
  if (local_44 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  *param_3 = 0;
  *param_4 = 0;
  puVar5 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_24[0] = 0x24;
  local_10 = param_2;
  local_40[0] = 0x24;
  iVar3 = FUN_0041d0f0(param_1,(LPBYTE)&local_34);
  if (-1 < iVar3) {
    local_24[2] = local_30;
    local_24[1] = local_34;
    local_24[3] = local_2c;
    local_14 = local_28;
    iVar3 = FUN_0041d760(param_1,s_Version_0048892c,(LPBYTE)&local_38);
    if (-1 < iVar3) {
      local_c = local_38;
    }
    iVar3 = FUN_0041cf50(param_1,(int *)&local_44,local_40,local_40 + 1,&local_8);
    if (-1 < iVar3) {
      if (param_5 != 0) {
        param_3 = (undefined4 *)0x1;
        local_40[0] = FUN_0041ce30((int *)&local_44,local_40[0],local_40 + 1,"DisableEdit",4,
                                   &param_3,4);
        local_8 = local_8 + 1;
      }
      local_4 = local_40[0] - 0x24;
      puVar5 = local_24;
      puVar6 = local_44;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *puVar1 = local_44;
      *param_4 = local_40[0];
      return iVar3;
    }
  }
  if (local_44 == (undefined4 *)0x0) {
    return iVar3;
  }
  pvVar2 = GlobalHandle(local_44);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(local_44);
  GlobalFree(pvVar2);
  return iVar3;
}


