/* Module: mp3plug.dll
   Function: FUN_5f68b550
   Address: 5f68b550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f68b550(HANDLE param_1,uint param_2,int param_3,byte param_4,int *param_5)

{
  HANDLE hFile;
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  bool bVar4;
  int local_28;
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
  local_1c = 0;
  local_18 = 0;
  local_28 = 1;
  local_24 = param_2;
  local_20 = param_3;
  param_2 = 0;
  do {
    iVar3 = 0;
    local_10 = local_20;
    local_14 = local_24;
    SetFilePointer(hFile,local_24,&local_10,0);
    iVar1 = FUN_5f688530(hFile,local_c,local_28,&local_24);
    if (iVar1 < 0) {
      if ((param_4 & 1) != 0) {
        do {
          if (0x3ff < iVar3) goto LAB_5f68b623;
          bVar4 = 0xfffffffe < local_24;
          local_24 = local_24 + 1;
          local_20 = local_20 + (uint)bVar4;
          local_14 = local_24;
          local_10 = local_20;
          SetFilePointer(hFile,local_24,&local_10,0);
          iVar1 = FUN_5f688530(hFile,local_c,0,&local_24);
          iVar3 = iVar3 + 1;
        } while (iVar1 < 0);
        goto LAB_5f68b627;
      }
LAB_5f68b623:
      if (-1 < iVar1) goto LAB_5f68b627;
LAB_5f68b66d:
      if (local_28 != 0) {
        local_28 = 0;
      }
    }
    else {
LAB_5f68b627:
      bVar4 = CARRY4(local_1c,local_8);
      local_1c = local_1c + local_8;
      local_18 = local_18 + (uint)bVar4;
      bVar4 = CARRY4(local_24,local_4);
      local_24 = local_24 + local_4;
      local_20 = local_20 + (uint)bVar4;
      if (local_28 != 0) {
        param_1 = (HANDLE)FUN_5f6883f0(local_c);
        goto LAB_5f68b66d;
      }
      if ((param_2 == 0) && (pvVar2 = (HANDLE)FUN_5f6883f0(local_c), param_1 != pvVar2)) {
        param_2 = 1;
      }
    }
    if (iVar1 < 0) {
      if (param_5 != (int *)0x0) {
        *param_5 = param_2;
      }
      return CONCAT44(local_18,local_1c);
    }
  } while( true );
}


