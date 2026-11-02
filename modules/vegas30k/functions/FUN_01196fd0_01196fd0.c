/* Module: vegas30k.dll
   Function: FUN_01196fd0
   Address: 01196fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0119710d) */

uint FUN_01196fd0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,uint param_11,int param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  bool bVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  lVar2 = CONCAT44(param_12,param_11);
  if (param_2 != 0x20) {
    uVar3 = (**(code **)(param_3 + 0x2c))
                      (*(undefined4 *)(param_3 + 0x28),param_2,*(undefined4 *)(param_3 + 0x30),
                       param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                       param_13,param_14,param_15);
    return uVar3;
  }
  uVar3 = 0;
  if (*(int *)(param_3 + 0x4c) == 0) {
    uVar3 = param_11;
    uVar8 = param_15;
    uVar4 = (**(code **)(param_3 + 0x2c))
                      (*(undefined4 *)(param_3 + 0x28),0x20,*(undefined4 *)(param_3 + 0x30),param_4,
                       param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                       param_14,param_15);
    if (param_8 != 0) {
      if (uVar4 == 0xfffffffe) {
        _SfAudio_FillSilence_12(param_9,param_5,param_11);
        iVar5 = FUN_011a09d0(param_5,param_14,uVar8,param_11,unaff_ESI,uVar3,param_12,param_13,
                             unaff_EBP,unaff_EBX,param_15);
        if (iVar5 == 0) {
          return param_11;
        }
      }
      else {
        FUN_011a09d0(param_5,param_14,uVar8,uVar4,(int)uVar4 >> 0x1f,uVar3,param_12,param_13,
                     unaff_EBP,unaff_EBX,param_15);
      }
    }
  }
  else {
    uVar4 = FUN_011a7230(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                         param_12,param_13,param_14,param_15);
    if (uVar4 != 0xfffffffd) {
      if ((-1 < param_12) && ((lVar1 = 0, 0 < param_12 || (lVar1 = 0, param_11 != 0)))) {
        do {
          lVar7 = FUN_011a7110((uint)*(ushort *)(param_4 + 0xc) * (int)lVar1 + param_5,param_4,
                               param_11,param_12);
          bVar6 = param_11 < (uint)lVar7;
          param_11 = param_11 - (uint)lVar7;
          param_12 = (param_12 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)bVar6;
          lVar1 = lVar7 + lVar1;
          uVar3 = (uint)lVar1;
        } while (lVar1 < lVar2);
      }
      return uVar3;
    }
  }
  return uVar4;
}


