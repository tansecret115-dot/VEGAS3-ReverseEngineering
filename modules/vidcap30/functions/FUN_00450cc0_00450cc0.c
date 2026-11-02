/* Module: vidcap30.exe
   Function: FUN_00450cc0
   Address: 00450cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE FUN_00450cc0(HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   uint param_5,int param_6)

{
  HANDLE hFile;
  HANDLE pvVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int local_10 [4];
  
  hFile = param_1;
  local_30 = param_5;
  local_2c = param_6;
  if ((param_6 < 0) ||
     ((_param_5 = CONCAT44(param_6,param_5), param_6 < 1 &&
      (_param_5 = CONCAT44(param_6,param_5), param_5 == 0)))) {
    return param_1;
  }
  do {
    pvVar1 = (HANDLE)riff64_ReadChunkHeader(hFile,local_20,&param_5);
    if ((int)pvVar1 < 0) {
      return pvVar1;
    }
    bVar7 = 0x17 < local_30;
    uVar3 = local_30 - 0x18;
    iVar4 = 4;
    bVar8 = true;
    piVar5 = &DAT_0058bd48;
    piVar6 = local_20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if (bVar8) {
      riff64_SaveLocation(hFile,&local_28);
      BVar2 = ReadFile(hFile,local_10,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (param_1 < (HANDLE)0x10)) {
        return (HANDLE)0x8004e008;
      }
      iVar4 = 4;
      bVar8 = true;
      piVar5 = &DAT_0058bd28;
      piVar6 = local_10;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        pvVar1 = (HANDLE)FUN_00450f80(hFile,param_2,param_3,param_4,param_5 - 0x10,
                                      param_6 - (uint)(param_5 < 0x10));
      }
      if ((int)pvVar1 < 0) {
        return pvVar1;
      }
      riff64_RestoreLocation(hFile,local_28,local_24);
    }
    uVar9 = riff64_SkipChunk(hFile,_param_5);
    local_30 = uVar3 - (uint)uVar9;
    local_2c = ((local_2c + -1 + (uint)bVar7) - (int)((ulonglong)uVar9 >> 0x20)) -
               (uint)(uVar3 < (uint)uVar9);
    _param_5 = uVar9;
    if (local_2c < 1) {
      if (local_2c < 0) {
        return (HANDLE)0x0;
      }
      if (local_30 == 0) {
        return (HANDLE)0x0;
      }
    }
  } while( true );
}


