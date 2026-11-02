/* Module: vegas30.exe
   Function: FUN_005db3a0
   Address: 005db3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005db3a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_10 [4];
  
  if ((param_3 != 0) && (-1 < param_6)) {
    uVar3 = param_5;
    iVar4 = param_6;
    if (0 < param_6) goto LAB_005db3cd;
    do {
      if (uVar3 == 0) {
        return 0;
      }
LAB_005db3cd:
      do {
        iVar1 = riff64_ReadChunkHeader(param_1,local_10,&param_5);
        if (iVar1 < 0) {
          return -0x7ffb1ff8;
        }
        iVar1 = 4;
        bVar7 = true;
        piVar5 = &DAT_0062a720;
        piVar6 = local_10;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar7 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          iVar1 = FUN_005db0d0(param_1,param_2,&param_5,DAT_0062a720,DAT_0062a724,DAT_0062a728,
                               DAT_0062a72c,param_3,param_4);
          uVar8 = _param_5;
          if (iVar1 < 0) {
            return iVar1;
          }
        }
        else {
          uVar8 = riff64_SkipChunk(param_1,_param_5);
        }
        param_6 = (int)((ulonglong)uVar8 >> 0x20);
        param_5 = (uint)uVar8;
        bVar7 = CARRY4(uVar3,-param_5 - 0x18);
        uVar3 = uVar3 + (-param_5 - 0x18);
        iVar4 = iVar4 + ((-1 - param_6) - (uint)(0xffffffe8 < param_5)) + (uint)bVar7;
        _param_5 = uVar8;
        lVar9 = __allrem(uVar8,8,0);
        if (lVar9 != 0) {
          uVar2 = (uint)lVar9 - 8;
          bVar7 = CARRY4(uVar3,uVar2);
          uVar3 = uVar3 + uVar2;
          iVar4 = iVar4 + ((int)((ulonglong)lVar9 >> 0x20) - (uint)((uint)lVar9 < 8)) + (uint)bVar7;
        }
      } while (0 < iVar4);
    } while (-1 < iVar4);
  }
  return 0;
}


