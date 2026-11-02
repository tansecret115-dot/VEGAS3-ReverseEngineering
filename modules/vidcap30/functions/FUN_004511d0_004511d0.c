/* Module: vidcap30.exe
   Function: FUN_004511d0
   Address: 004511d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004511d0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  iVar4 = param_4;
  uVar2 = param_3;
  local_38 = param_3;
  local_34 = param_4;
  riff64_SaveLocation(param_1,&local_20);
  iVar3 = riff64_FindChunkHeader
                    (param_1,DAT_0058bcf8,DAT_0058bcfc,DAT_0058bd00,DAT_0058bd04,&param_3,&local_38)
  ;
  if (-1 < iVar3) {
    local_38 = uVar2;
    local_34 = iVar4;
    riff64_SaveLocation(param_1,&local_30);
    FUN_004454d0(1,1,local_30,local_2c,param_3,param_4);
    iVar4 = param_5;
    iVar3 = FUN_00444b20(param_2,0,param_5,0xffffffff);
    FUN_004454d0(0,0,0,0,0,0);
    riff64_RestoreLocation(param_1,local_30,local_2c);
    _param_3 = riff64_SkipChunk(param_1,param_3,param_4);
    if (-1 < iVar3) {
      riff64_RestoreLocation(param_1,local_20,local_1c);
      uVar1 = *(undefined4 *)((*(int **)(iVar4 + 0x1cc))[2] + -4 + **(int **)(iVar4 + 0x1cc) * 4);
      if ((-1 < local_34) && ((uVar8 = _param_3, 0 < local_34 || (local_38 != 0)))) {
        while( true ) {
          _param_3 = uVar8;
          iVar3 = riff64_ReadChunkHeader(param_1,local_10,&param_3);
          if (iVar3 < 0) break;
          bVar7 = 0x17 < local_38;
          local_38 = local_38 - 0x18;
          local_34 = local_34 + -1 + (uint)bVar7;
          riff64_SaveLocation(param_1,&local_18);
          iVar4 = 4;
          bVar7 = true;
          piVar5 = &DAT_0058bd08;
          piVar6 = local_10;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          uVar8 = _param_3;
          if (bVar7) {
            riff64_SaveLocation(param_1,&local_28);
            FUN_004454d0(1,1,local_28,local_24,_param_3);
            iVar3 = FUN_00444d00(param_2,0,uVar1,param_5,0xffffffff);
            FUN_004454d0(0,0,0,0,0,0);
            riff64_RestoreLocation(param_1,local_28,local_24);
            uVar8 = riff64_SkipChunk(param_1,_param_3);
          }
          if (iVar3 < 0) {
            return iVar3;
          }
          _param_3 = uVar8;
          riff64_RestoreLocation(param_1,local_18,local_14);
          uVar8 = riff64_SkipChunk(param_1,_param_3);
          bVar7 = local_38 < (uint)uVar8;
          local_38 = local_38 - (uint)uVar8;
          local_34 = (local_34 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)bVar7;
          if (local_34 < 1) {
            if (local_34 < 0) {
              return 0;
            }
            if (local_38 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return iVar3;
}


