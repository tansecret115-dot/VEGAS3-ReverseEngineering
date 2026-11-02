/* Module: vidcap30.exe
   Function: FUN_00450e30
   Address: 00450e30
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE FUN_00450e30(HANDLE param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 local_38;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int local_10 [4];
  
  local_30 = param_4;
  pvVar1 = param_1;
  if ((-1 < param_5) &&
     ((iVar4 = param_5, local_38 = CONCAT44(local_38._4_4_,(uint)local_38), 0 < param_5 ||
      (local_38 = CONCAT44(local_38._4_4_,(uint)local_38), param_4 != 0)))) {
    while( true ) {
      pvVar1 = (HANDLE)riff64_ReadChunkHeader(param_1,local_20,&local_38);
      if ((int)pvVar1 < 0) break;
      bVar7 = 0x17 < local_30;
      local_30 = local_30 - 0x18;
      iVar3 = 4;
      bVar8 = true;
      piVar5 = &DAT_0058bd48;
      piVar6 = local_20;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        riff64_SaveLocation(param_1,&local_28);
        BVar2 = ReadFile(param_1,local_10,0x10,&param_4,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (param_4 < 0x10)) {
          return (HANDLE)0x8004e008;
        }
        iVar3 = 4;
        bVar8 = true;
        piVar5 = &DAT_0058bce8;
        piVar6 = local_10;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          pvVar1 = (HANDLE)FUN_004511d0(param_1,param_2,(uint)local_38 - 0x10,
                                        local_38._4_4_ - (uint)((uint)local_38 < 0x10),param_3);
        }
        if ((int)pvVar1 < 0) {
          return pvVar1;
        }
        riff64_RestoreLocation(param_1,local_28,local_24);
      }
      uVar9 = riff64_SkipChunk(param_1,local_38);
      bVar8 = local_30 < (uint)uVar9;
      local_30 = local_30 - (uint)uVar9;
      iVar4 = ((iVar4 + -1 + (uint)bVar7) - (int)((ulonglong)uVar9 >> 0x20)) - (uint)bVar8;
      local_38 = uVar9;
      if (iVar4 < 1) {
        if (iVar4 < 0) {
          return (HANDLE)0x0;
        }
        if (local_30 == 0) {
          return (HANDLE)0x0;
        }
      }
    }
  }
  return pvVar1;
}


