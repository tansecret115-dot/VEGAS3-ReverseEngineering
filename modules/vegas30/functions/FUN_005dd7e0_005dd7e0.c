/* Module: vegas30.exe
   Function: FUN_005dd7e0
   Address: 005dd7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dd7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_10 [4];
  
  uVar9 = CONCAT44(param_5,param_4);
  if (-1 < param_5) {
    iVar2 = param_5;
    uVar4 = param_4;
    if (0 < param_5) goto LAB_005dd801;
    do {
      if (uVar4 == 0) {
        return 0;
      }
LAB_005dd801:
      do {
        _param_4 = uVar9;
        iVar1 = riff64_ReadChunkHeader(param_1,local_10,&param_4);
        if (iVar1 < 0) {
          return iVar1;
        }
        bVar7 = 0x17 < uVar4;
        uVar3 = uVar4 - 0x18;
        iVar1 = 4;
        bVar8 = true;
        piVar5 = &DAT_0062a620;
        piVar6 = local_10;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar8 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          iVar1 = FUN_005db0d0(param_1,param_2,&param_4,DAT_0062a620,DAT_0062a624,DAT_0062a628,
                               DAT_0062a62c,param_3);
          uVar9 = _param_4;
          if (iVar1 < 0) {
            return iVar1;
          }
        }
        else {
          uVar9 = riff64_SkipChunk(param_1,_param_4);
        }
        param_5 = (int)((ulonglong)uVar9 >> 0x20);
        param_4 = (uint)uVar9;
        uVar4 = uVar3 - param_4;
        iVar2 = ((iVar2 + -1 + (uint)bVar7) - param_5) - (uint)(uVar3 < param_4);
      } while (0 < iVar2);
    } while (-1 < iVar2);
  }
  return 0;
}


