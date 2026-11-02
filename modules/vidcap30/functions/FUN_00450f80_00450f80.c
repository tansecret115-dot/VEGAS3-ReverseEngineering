/* Module: vidcap30.exe
   Function: FUN_00450f80
   Address: 00450f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00450f80(HANDLE param_1,int *param_2,undefined4 param_3,int param_4,uint param_5,int param_6
                )

{
  HANDLE hFile;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int local_10 [4];
  
  iVar5 = param_6;
  uVar2 = param_5;
  hFile = param_1;
  local_40 = param_5;
  local_3c = param_6;
  riff64_SaveLocation(param_1,&local_30);
  iVar3 = riff64_FindChunkHeader
                    (hFile,DAT_0058bd38,DAT_0058bd3c,DAT_0058bd40,DAT_0058bd44,&param_5,&local_40);
  if (-1 < iVar3) {
    local_40 = uVar2;
    local_3c = iVar5;
    riff64_SaveLocation(hFile,&local_38);
    uVar1 = param_2;
    FUN_004454d0(1,1,local_38,local_34,param_5,param_6);
    iVar5 = param_4;
    iVar3 = FUN_0045fa40(uVar1,param_3,param_4);
    FUN_004454d0(0,0,0,0,0,0);
    riff64_RestoreLocation(hFile,local_38,local_34);
    _param_5 = riff64_SkipChunk(hFile,param_5,param_6);
    if (-1 < iVar3) {
      riff64_RestoreLocation(hFile,local_30,local_2c);
      param_2 = *(int **)((*(int **)(iVar5 + 0x10))[2] + -4 + **(int **)(iVar5 + 0x10) * 4);
      if (((*param_2 == 4) && (-1 < local_3c)) &&
         ((uVar9 = _param_5, 0 < local_3c || (local_40 != 0)))) {
        while( true ) {
          _param_5 = uVar9;
          iVar3 = riff64_ReadChunkHeader(hFile,local_20,&param_5);
          if (iVar3 < 0) break;
          bVar8 = 0x17 < local_40;
          local_40 = local_40 - 0x18;
          local_3c = local_3c + -1 + (uint)bVar8;
          riff64_SaveLocation(hFile,&local_28);
          iVar5 = 4;
          bVar8 = true;
          piVar6 = &DAT_0058bd48;
          piVar7 = local_20;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar8 = *piVar6 == *piVar7;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            BVar4 = ReadFile(hFile,local_10,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if ((BVar4 == 0) || (param_1 < (HANDLE)0x10)) {
              return -0x7ffb1ff8;
            }
            iVar5 = 4;
            bVar8 = true;
            piVar6 = &DAT_0058bd18;
            piVar7 = local_10;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar8 = *piVar6 == *piVar7;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            } while (bVar8);
            if (bVar8) {
              FUN_00450cc0(hFile,uVar1,param_3,param_2,param_5 - 0x10,
                           param_6 - (uint)(param_5 < 0x10));
            }
          }
          riff64_RestoreLocation(hFile,local_28,local_24);
          uVar9 = riff64_SkipChunk(hFile,_param_5);
          bVar8 = local_40 < (uint)uVar9;
          local_40 = local_40 - (uint)uVar9;
          local_3c = (local_3c - (int)((ulonglong)uVar9 >> 0x20)) - (uint)bVar8;
          if (local_3c < 1) {
            if (local_3c < 0) {
              return 0;
            }
            if (local_40 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return iVar3;
}


