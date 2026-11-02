/* Module: mp3plug.dll
   Function: FUN_5f68b6c0
   Address: 5f68b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
FUN_5f68b6c0(HANDLE param_1,uint param_2,uint param_3,uint param_4,int param_5,byte param_6,
            int *param_7,uint *param_8)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint uStack_10;
  ushort local_c [2];
  uint local_8;
  uint local_4;
  
  puVar1 = param_8;
  local_c[0] = 0;
  local_c[1] = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = 0;
  local_18 = 0;
  local_2c = 1;
  local_24 = param_2;
  local_20 = param_3;
  local_28 = 0;
  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
    param_8[1] = 0;
  }
  do {
    if ((-1 < local_18) && (((0 < local_18 || (0x204cb < local_1c)) && (local_28 == 0))))
    goto LAB_5f68b870;
    uStack_10 = local_20;
    local_14 = local_24;
    SetFilePointer(param_1,local_24,(PLONG)&uStack_10,0);
    iVar2 = FUN_5f688530(param_1,local_c,local_2c,&local_24);
    if (iVar2 < 0) {
      if ((param_6 & 1) != 0) {
        iVar4 = 0;
        do {
          if (0x3ff < iVar4) goto LAB_5f68b7bd;
          bVar6 = 0xfffffffe < local_24;
          local_24 = local_24 + 1;
          local_20 = local_20 + bVar6;
          local_14 = local_24;
          uStack_10 = local_20;
          SetFilePointer(param_1,local_24,(PLONG)&uStack_10,0);
          iVar2 = FUN_5f688530(param_1,local_c,0,&local_24);
          iVar4 = iVar4 + 1;
        } while (iVar2 < 0);
        goto LAB_5f68b7c5;
      }
LAB_5f68b7bd:
      if (-1 < iVar2) goto LAB_5f68b7c5;
    }
    else {
LAB_5f68b7c5:
      if (local_2c == 0) {
        if ((local_28 == 0) && (puVar3 = (uint *)FUN_5f6883f0(local_c), param_8 != puVar3)) {
          local_28 = 1;
        }
      }
      else {
        param_8 = (uint *)FUN_5f6883f0(local_c);
        FUN_5f688910(local_c);
      }
      bVar6 = CARRY4(local_1c,local_8);
      local_1c = local_1c + local_8;
      local_18 = local_18 + (uint)bVar6;
      bVar6 = CARRY4(local_24,local_4);
      local_24 = local_24 + local_4;
      local_20 = local_20 + bVar6;
      if (puVar1 != (uint *)0x0) {
        uVar5 = *puVar1;
        *puVar1 = uVar5 + local_4;
        puVar1[1] = puVar1[1] + (uint)CARRY4(uVar5,local_4);
      }
    }
    uVar7 = CONCAT44(local_18,local_1c);
    if (local_2c != 0) {
      local_2c = 0;
    }
  } while (-1 < iVar2);
  if (local_28 == 0) {
LAB_5f68b870:
    uVar5 = (param_5 - param_3) - (uint)(param_4 < param_2);
    local_14 = param_4 - param_2;
    uStack_10 = uVar5;
    uVar7 = ftol();
    if (puVar1 != (uint *)0x0) {
      *puVar1 = param_4 - param_2;
      puVar1[1] = uVar5;
    }
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_28;
  }
  return uVar7;
}


