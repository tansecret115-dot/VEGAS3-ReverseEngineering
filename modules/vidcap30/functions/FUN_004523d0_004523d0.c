/* Module: vidcap30.exe
   Function: FUN_004523d0
   Address: 004523d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004523d0(undefined4 param_1,IStream *param_2,_summarylisttag *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  uVar9 = CONCAT44(param_5,param_4);
  local_20 = param_4;
  local_1c = param_5;
  if (-1 < param_5) {
    uVar1 = CONCAT44(param_5,param_4);
    if (0 < param_5) goto LAB_00452401;
    do {
      uVar9 = uVar1;
      if (local_20 == 0) {
        return 0;
      }
LAB_00452401:
      do {
        _param_4 = uVar9;
        iVar2 = riff64_ReadChunkHeader(param_1,local_10,&param_4);
        if (iVar2 < 0) {
          return iVar2;
        }
        bVar7 = 0x17 < local_20;
        uVar4 = local_20 - 0x18;
        iVar2 = 4;
        bVar8 = true;
        piVar5 = &DAT_0058bd78;
        piVar6 = local_10;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          riff64_SaveLocation(param_1,&local_18);
          FUN_004454d0(1,1,local_18,local_14,_param_4);
          lVar3 = _summarylisttag::Create(param_2,0,param_3);
          FUN_004454d0(0,0,0,0,0,0);
          riff64_RestoreLocation(param_1,local_18,local_14);
          uVar9 = riff64_SkipChunk(param_1,_param_4);
          if (lVar3 < 0) {
            return lVar3;
          }
        }
        else {
          uVar9 = riff64_SkipChunk(param_1,_param_4);
        }
        local_20 = uVar4 - (uint)uVar9;
        local_1c = ((local_1c + -1 + (uint)bVar7) - (int)((ulonglong)uVar9 >> 0x20)) -
                   (uint)(uVar4 < (uint)uVar9);
      } while (0 < local_1c);
      uVar1 = uVar9;
    } while (-1 < local_1c);
  }
  return 0;
}


