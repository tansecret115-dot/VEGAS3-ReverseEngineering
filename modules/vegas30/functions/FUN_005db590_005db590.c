/* Module: vegas30.exe
   Function: FUN_005db590
   Address: 005db590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005db590(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5,
                int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

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
  
  if ((param_5 < 0) ||
     ((uVar3 = param_4, iVar4 = param_5, _param_4 = CONCAT44(param_5,param_4), param_5 < 1 &&
      (_param_4 = CONCAT44(param_5,param_4), param_4 == 0)))) {
    return 0;
  }
  do {
    iVar1 = riff64_ReadChunkHeader(param_1,local_10,&param_4);
    if (iVar1 < 0) {
      return -0x7ffb1ff8;
    }
    iVar1 = 4;
    bVar7 = true;
    piVar5 = &DAT_0062a6f0;
    piVar6 = local_10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      iVar1 = FUN_005db0d0(param_1,param_2,&param_4,DAT_0062a6f0,DAT_0062a6f4,DAT_0062a6f8,
                           DAT_0062a6fc,param_3);
      if (iVar1 < 0) {
        return 0;
      }
      uVar8 = _param_4;
      if (param_6 != 0) {
        iVar1 = *(int *)*param_3 + -1;
        if (-1 < iVar1) {
          iVar1 = FUN_005a5060(*(undefined4 *)(((int *)*param_3)[2] + iVar1 * 4),param_6,param_7,
                               param_8,param_9);
          uVar8 = _param_4;
          if (iVar1 < 0) {
            return iVar1;
          }
        }
      }
    }
    else {
      uVar8 = riff64_SkipChunk(param_1,_param_4);
    }
    param_5 = (int)((ulonglong)uVar8 >> 0x20);
    param_4 = (uint)uVar8;
    bVar7 = CARRY4(uVar3,-param_4 - 0x18);
    uVar3 = uVar3 + (-param_4 - 0x18);
    iVar4 = iVar4 + ((-1 - param_5) - (uint)(0xffffffe8 < param_4)) + (uint)bVar7;
    _param_4 = uVar8;
    lVar9 = __allrem(uVar8,8,0);
    if (lVar9 != 0) {
      uVar2 = (uint)lVar9 - 8;
      bVar7 = CARRY4(uVar3,uVar2);
      uVar3 = uVar3 + uVar2;
      iVar4 = iVar4 + ((int)((ulonglong)lVar9 >> 0x20) - (uint)((uint)lVar9 < 8)) + (uint)bVar7;
    }
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        return 0;
      }
      if (uVar3 == 0) {
        return 0;
      }
    }
  } while( true );
}


