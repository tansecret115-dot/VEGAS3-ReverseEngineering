/* Module: mp3plug.dll
   Function: FUN_5f68b8e0
   Address: 5f68b8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
FUN_5f68b8e0(HANDLE param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            byte param_6,int *param_7)

{
  HANDLE hFile;
  int iVar1;
  HANDLE pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  ushort local_c [2];
  uint local_8;
  uint local_4;
  
  hFile = param_1;
  local_c[0] = 0;
  local_c[1] = 0;
  local_8 = 0;
  local_4 = 0;
  uVar3 = 0;
  local_1c = 0;
  local_18 = 0;
  local_2c = 1;
  local_24 = param_2;
  local_20 = param_3;
  local_30 = 0;
  do {
    if ((-1 < local_18) && (((0 < local_18 || (0x204cb < uVar3)) && (local_30 == 0))))
    goto LAB_5f68ba6f;
    local_10 = local_20;
    local_14 = local_24;
    SetFilePointer(hFile,local_24,&local_10,0);
    iVar1 = FUN_5f688530(hFile,local_c,local_2c,&local_24);
    uVar5 = uVar3;
    if (iVar1 < 0) {
      if ((param_6 & 1) != 0) {
        iVar4 = 0;
        do {
          uVar3 = local_1c;
          if (0x3ff < iVar4) goto LAB_5f68b9d2;
          bVar6 = 0xfffffffe < local_24;
          local_24 = local_24 + 1;
          local_20 = local_20 + (uint)bVar6;
          local_14 = local_24;
          local_10 = local_20;
          SetFilePointer(hFile,local_24,&local_10,0);
          iVar1 = FUN_5f688530(hFile,local_c,0,&local_24);
          iVar4 = iVar4 + 1;
          uVar5 = local_1c;
        } while (iVar1 < 0);
        goto LAB_5f68b9d8;
      }
LAB_5f68b9d2:
      uVar5 = uVar3;
      if (-1 < iVar1) goto LAB_5f68b9d8;
    }
    else {
LAB_5f68b9d8:
      if (local_2c == 0) {
        if ((local_30 == 0) && (pvVar2 = (HANDLE)FUN_5f6883f0(local_c), param_1 != pvVar2)) {
          local_30 = 1;
        }
      }
      else {
        param_1 = (HANDLE)FUN_5f6883f0(local_c);
        FUN_5f688910(local_c);
      }
      uVar3 = uVar5 + local_8;
      local_18 = local_18 + (uint)CARRY4(uVar5,local_8);
      bVar6 = CARRY4(local_24,local_4);
      local_24 = local_24 + local_4;
      local_20 = local_20 + (uint)bVar6;
      local_1c = uVar3;
    }
    uVar7 = CONCAT44(local_18,uVar3);
    if (local_2c != 0) {
      local_2c = 0;
    }
  } while (-1 < iVar1);
  if (local_30 == 0) {
LAB_5f68ba6f:
    uVar7 = ftol();
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_30;
  }
  return uVar7;
}


