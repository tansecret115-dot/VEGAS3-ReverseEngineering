/* Module: aifplug.dll
   Function: FUN_5fbd7ad0
   Address: 5fbd7ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd7ad0(HANDLE param_1,HANDLE param_2,uint *param_3,undefined4 *param_4,int param_5)

{
  double dVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_50;
  int local_4c;
  DWORD local_48 [2];
  uint local_40;
  DWORD local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  double local_2c;
  int local_24 [2];
  uint local_1c;
  int iStack_18;
  short local_14 [2];
  uint local_10;
  uint local_8;
  
  local_2c = 1.0;
  FUN_5fbdfdc0(param_1,local_48);
  local_4c = param_5;
  local_40 = 0;
  local_48[1] = 0;
  iVar2 = FUN_5fbdc3f0(param_1,local_14,&local_40,(int *)(local_48 + 1));
  if (iVar2 < 0) {
    return iVar2;
  }
  FUN_5fbdfde0(param_1,local_48[0]);
  local_4c = param_5;
  iVar2 = FUN_5fbdbf10(param_1,0x53534e44,&local_50,&local_4c);
  if (iVar2 < 0) {
    return -0x7ffb1ff5;
  }
  local_50 = local_50 - 8;
  local_3c = 0;
  BVar3 = ReadFile(param_1,local_24,8,&local_3c,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return -0x7ffb1ff8;
  }
  FUN_5fbdbc20((undefined1 *)local_24,2);
  if (local_24[0] != 0) {
    local_50 = local_50 - local_24[0];
  }
  uVar4 = local_50 / (local_8 & 0xffff);
  if (uVar4 < 5) {
    param_3[3] = 0;
    *param_3 = *param_3 & 0xfffffffd | 1;
  }
  else {
    local_2c = (double)(ulonglong)uVar4;
    dVar1 = (double)(longlong)local_2c;
    local_2c = (double)(ulonglong)local_10;
    local_2c = dVar1 / (double)(longlong)local_2c;
    uVar5 = FUN_5fbd7cf0((int)param_3,uVar4,local_10);
    param_3[3] = uVar5;
    if (uVar5 != 0) {
      iStack_18 = 0;
      local_1c = uVar5;
      uVar6 = ftol();
      goto LAB_5fbd7c32;
    }
    *param_3 = *param_3 & 0xfffffffd | 1;
  }
  uVar6 = 0;
LAB_5fbd7c32:
  FUN_5fbdfde0(param_1,local_48[0]);
  SetFilePointer(param_2,0,(PLONG)0x0,0);
  iVar2 = FUN_5fbe0390(param_2,&local_38,&local_30);
  if (iVar2 < 0) {
    iVar2 = 1;
  }
  else {
    local_4c = local_38;
    uVar5 = FUN_5fbe0440(param_2,0x64696361,&local_34,&local_4c);
    if ((int)uVar5 < 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_5fbdfe90(param_2,param_3,0x18,local_34);
      if (iVar2 == 0) {
        FUN_5fbd7d90(param_3,uVar4,local_10,0);
        local_1c = param_3[3];
        iStack_18 = iVar2;
        uVar6 = ftol();
      }
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar6;
  }
  return iVar2;
}


