/* Module: vegas30k.dll
   Function: FUN_011949f0
   Address: 011949f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_011949f0(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,int param_10,int param_11)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7c8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x7c4) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x504);
  if (param_10 != 0) {
    *(int *)(param_1 + 0x7e0) = *(int *)(param_1 + 0x7e0) + 1;
  }
  uVar6 = *(uint *)(param_1 + 0x7bc);
  uVar2 = uVar6;
  if ((double)CONCAT44(param_8,param_7) != _DAT_011db3f0) {
    uVar2 = ftol();
  }
  if (param_9 == 0) {
    uVar6 = 0;
    param_8 = 0;
    if ((-1 < param_6) && ((0 < param_6 || (param_5 != 0)))) {
      while (*(uint *)(param_1 + 0x7c0) < *(uint *)(param_1 + 0x7b8)) {
        uVar7 = param_5 - uVar6;
        iVar4 = (param_6 - param_8) - (uint)(param_5 < uVar6);
        if ((0 < iVar4) || ((-1 < iVar4 && (uVar2 <= uVar7)))) {
          iVar4 = 0;
          uVar7 = uVar2;
        }
        if (param_11 == 0) {
          _SfAudio_FindPeaks_20
                    (param_1 + 0x4f8,3,uVar6 * uVar1 + param_4,uVar7,*(int *)(param_1 + 0x7b0) + 4);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x10) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x18) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0xc) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x14) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 8) = 0;
        }
        iVar5 = *(int *)(param_1 + 0x7b0);
        *(uint *)(iVar5 + 0x20) = uVar7 + uVar6 + param_2;
        *(uint *)(iVar5 + 0x24) =
             iVar4 + param_8 + (uint)CARRY4(uVar7,uVar6) + param_3 +
             (uint)CARRY4(uVar7 + uVar6,param_2);
        *(int *)(*(int *)(param_1 + 0x7b0) + 0x28) = param_10;
        *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x2c) = 0;
        param_10 = 0;
        *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x30);
        *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + 1;
        bVar8 = CARRY4(uVar6,uVar2);
        uVar6 = uVar6 + uVar2;
        param_8 = param_8 + (uint)bVar8;
        if ((param_6 <= param_8) && ((param_6 < param_8 || (param_5 <= uVar6)))) break;
      }
    }
  }
  else {
    uVar7 = param_5 - uVar6;
    param_8 = param_6 - (uint)(param_5 < uVar6);
    if ((-1 < param_8) &&
       ((param_8 != 0 && (int)(uint)(param_5 < uVar6) <= param_6 || (uVar7 != 0)))) {
      while (iVar4 = param_10, *(uint *)(param_1 + 0x7c0) < *(uint *)(param_1 + 0x7b8)) {
        iVar3 = (param_6 - param_8) - (uint)(param_5 < uVar7);
        iVar5 = 0;
        uVar6 = uVar2;
        if ((iVar3 < 1) && ((iVar3 < 0 || (param_5 - uVar7 < uVar2)))) {
          iVar5 = iVar3;
          uVar6 = param_5 - uVar7;
        }
        if (param_11 == 0) {
          _SfAudio_FindPeaks_20
                    (param_1 + 0x4f8,3,uVar7 * uVar1 + param_4,uVar6,*(int *)(param_1 + 0x7b0) + 4);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x10) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x18) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0xc) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x14) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 8) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x7b0);
        *(uint *)(iVar3 + 0x20) = uVar6 + uVar7 + param_2;
        param_10 = 0;
        *(uint *)(iVar3 + 0x24) =
             iVar5 + param_8 + (uint)CARRY4(uVar6,uVar7) + param_3 +
             (uint)CARRY4(uVar6 + uVar7,param_2);
        *(int *)(*(int *)(param_1 + 0x7b0) + 0x28) = iVar4;
        *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x2c) = 1;
        *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x7b0) + 0x30);
        bVar8 = uVar7 < uVar2;
        uVar7 = uVar7 - uVar2;
        *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + 1;
        param_8 = param_8 - (uint)bVar8;
        if ((param_8 < 1) && ((param_8 < 0 || (uVar7 == 0)))) break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


