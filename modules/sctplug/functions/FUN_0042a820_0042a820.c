/* Module: sctplug.dll
   Function: FUN_0042a820
   Address: 0042a820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042a820(LPCSTR param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined4 uVar4;
  char local_50 [32];
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  pCVar3 = &stack0xffffffa4;
  iVar2 = lstrlenA(param_1);
  FUN_00430730();
  local_14 = &stack0xffffffa4;
  FUN_00430730();
  local_18 = &stack0xffffffa4;
  FUN_0042a340(param_1,&stack0xffffffa4,(int *)&stack0xffffffa4,iVar2 << 2);
  if (param_3 == 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      pCVar3 = FUN_0042a4c0(local_50,pCVar3,0x20);
      uVar1 = local_8;
      local_20 = local_c;
      local_28 = uVar4;
      if (local_50[0] == '\0') break;
      local_8 = local_c;
      local_10 = uVar4;
      local_20 = FUN_004290a0(local_50,(undefined4 *)0x0);
      iVar2 = iVar2 + 1;
      uVar4 = uVar1;
      local_28 = uVar1;
      local_c = local_20;
    } while (iVar2 < 4);
  }
  else {
    iVar2 = 0;
    uVar4 = 0;
    pCVar3 = &stack0xffffffa4;
    do {
      pCVar3 = FUN_0042a4c0(local_50,pCVar3,0x20);
      uVar1 = local_8;
      if (local_50[0] == '\0') break;
      local_10 = uVar4;
      local_8 = FUN_004290a0(local_50,(undefined4 *)0x0);
      iVar2 = iVar2 + 1;
      uVar4 = uVar1;
    } while (iVar2 < 3);
    local_20 = 0;
    local_28 = uVar4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(param_1 + *(int *)(local_18 + ((int)pCVar3 - (int)local_14) * 4));
  }
  local_2c = local_10;
  local_24 = local_8;
  local_30 = 0;
  FUN_00429bd0(&local_30);
  return;
}


