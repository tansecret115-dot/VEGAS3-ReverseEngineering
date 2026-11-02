/* Module: vegas30.exe
   Function: FUN_005dc360
   Address: 005dc360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dc360(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  uVar1 = param_1;
  local_18 = param_6;
  local_14 = param_7;
  iVar2 = riff64_GetNumListEntries(param_1,&local_1c,&local_18);
  uVar6 = CONCAT44(param_7,param_6);
  if (iVar2 == 0) {
    if (local_1c != 0) {
      param_1 = 0;
      do {
        _param_6 = uVar6;
        iVar2 = riff64_ReadChunkHeader(uVar1,local_10,&param_6);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = 4;
        bVar5 = true;
        piVar3 = &DAT_0062a690;
        piVar4 = local_10;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          iVar2 = FUN_005db0d0(uVar1,param_2,&param_6,DAT_0062a690,DAT_0062a694,DAT_0062a698,
                               DAT_0062a69c,param_5,param_3,param_4);
          uVar6 = _param_6;
joined_r0x005dc478:
          if (iVar2 < 0) {
            return iVar2;
          }
        }
        else {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_0062a6a0;
          piVar4 = local_10;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            iVar2 = FUN_005db0d0(uVar1,param_2,&param_6,DAT_0062a6a0,DAT_0062a6a4,DAT_0062a6a8,
                                 DAT_0062a6ac,param_5,param_3);
            uVar6 = _param_6;
            goto joined_r0x005dc478;
          }
          uVar6 = riff64_SkipChunk(uVar1,_param_6);
        }
        param_1 = param_1 + 1;
      } while (param_1 < local_1c);
    }
    iVar2 = 0;
  }
  return iVar2;
}


