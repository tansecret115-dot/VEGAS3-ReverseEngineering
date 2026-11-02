/* Module: vegas30.exe
   Function: FUN_005dd6d0
   Address: 005dd6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dd6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar6 = param_5;
  uVar7 = param_4;
  uVar1 = param_1;
  local_20 = param_4;
  local_1c = param_5;
  iVar5 = riff64_GetNumListEntries(param_1,&param_1,&local_20);
  puVar4 = param_6;
  uVar3 = param_3;
  uVar2 = param_2;
  if (iVar5 == 0) {
    local_20 = uVar7;
    local_1c = iVar6;
    if (-1 < iVar6) {
      uVar9 = CONCAT44(param_5,param_4);
      if (0 < iVar6) goto LAB_005dd729;
      do {
        _param_4 = uVar9;
        if (local_20 == 0) break;
LAB_005dd729:
        do {
          riff64_SaveLocation(uVar1,&local_18);
          iVar6 = FUN_005dd1d0(uVar1,uVar2,uVar3,&local_20);
          if (iVar6 == -0x7ffb1fec) {
            riff64_RestoreLocation(uVar1,local_18,local_14);
            riff64_ReadChunkHeader(uVar1,local_10,&param_4);
            uVar9 = riff64_SkipChunk(uVar1,_param_4);
            uVar7 = -(uint)uVar9 - 0x18;
            bVar8 = CARRY4(local_20,uVar7);
            local_20 = local_20 + uVar7;
            local_1c = local_1c +
                       ((-1 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(0xffffffe8 < (uint)uVar9)) +
                       (uint)bVar8;
            _param_4 = uVar9;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 1;
            }
          }
          else if (iVar6 != 0) {
            return iVar6;
          }
        } while (0 < local_1c);
        uVar9 = _param_4;
      } while (-1 < local_1c);
    }
    iVar5 = 0;
  }
  return iVar5;
}


