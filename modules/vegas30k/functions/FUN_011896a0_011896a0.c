/* Module: vegas30k.dll
   Function: FUN_011896a0
   Address: 011896a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01189a9e) */

longlong __thiscall
FUN_011896a0(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,uint param_6,
            int param_7,int param_8,uint param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar1 = 0;
  if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x600);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      uVar3 = param_9 >> 0x1d & 1;
      lVar1 = 0;
      if (uVar3 != 0) {
        if (*(int *)(param_8 + 8) == 0) {
          WaitForSingleObject(*(HANDLE *)(param_8 + 0x60),0xffffffff);
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x684);
          EnterCriticalSection(lpCriticalSection);
          uVar6 = *(uint *)(param_1 + 0x67c);
          if (uVar6 == 0) {
            *(uint *)(param_1 + 0x6a0) = param_4;
            *(int *)(param_1 + 0x6a4) = param_5;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x6a4);
            iVar4 = param_5;
            uVar5 = param_4;
            if ((iVar2 <= param_5) && ((iVar2 < param_5 || (*(uint *)(param_1 + 0x6a0) < param_4))))
            {
              iVar4 = iVar2;
              uVar5 = *(uint *)(param_1 + 0x6a0);
            }
            *(uint *)(param_1 + 0x6a0) = uVar5;
            *(int *)(param_1 + 0x6a4) = iVar4;
          }
          if (uVar6 < *(int *)(param_1 + 0x678) - 1U) {
            *(uint *)(param_1 + 0x67c) = uVar6 + 1;
            ResetEvent(*(HANDLE *)(param_8 + 0x60));
            LeaveCriticalSection(lpCriticalSection);
            WaitForSingleObject(*(HANDLE *)(param_1 + 0x674),0xffffffff);
            EnterCriticalSection(lpCriticalSection);
            FUN_01189ac0(param_8,*(undefined4 *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4),
                         param_4,param_5);
            iVar2 = *(int *)(param_1 + 0x67c) + -1;
            *(int *)(param_1 + 0x67c) = iVar2;
            if (iVar2 == 0) {
              ResetEvent(*(HANDLE *)(param_1 + 0x674));
            }
          }
          else {
            ResetEvent(*(HANDLE *)(param_8 + 0x60));
            SetEvent(*(HANDLE *)(param_1 + 0x674));
            FUN_01189ac0(param_8,*(undefined4 *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4),
                         param_4,param_5);
          }
          LeaveCriticalSection(lpCriticalSection);
          WaitForMultipleObjects
                    (*(DWORD *)(param_1 + 0x678),(HANDLE *)(param_1 + 0x668),1,0xffffffff);
        }
        *(undefined4 *)(param_8 + 8) = 0;
        lVar1 = 0;
      }
      do {
        iVar2 = (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uint)lVar1;
        if (*(int *)(param_8 + 0x48) == 0 && *(int *)(param_8 + 0x4c) == 0) {
          do {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
            iVar4 = FUN_01189660();
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
            if ((iVar4 == 0) && (*(int *)(param_1 + 0x680) == 0)) {
              *(undefined4 *)(param_1 + 0x680) = 1;
              if (uVar3 == 0) {
                iVar4 = iVar2 + param_5 + (uint)CARRY4(uVar6,param_4);
                uVar9 = *(undefined4 *)(param_1 + 0x520);
                uVar8 = *(undefined4 *)(param_1 + 0x51c);
                uVar5 = param_4;
              }
              else {
                *(undefined4 *)(param_1 + 0x4d8) = 1;
                iVar4 = *(int *)(param_1 + 0x6a4) + iVar2 +
                        (uint)CARRY4(*(uint *)(param_1 + 0x6a0),uVar6);
                uVar9 = *(undefined4 *)(param_1 + 0x520);
                uVar8 = *(undefined4 *)(param_1 + 0x51c);
                uVar5 = *(uint *)(param_1 + 0x6a0);
              }
              FUN_01189180(param_2,uVar8,param_1 + 0x4f8,uVar9,param_9,param_3,param_10,param_11,
                           uVar5 + uVar6,iVar4,param_6 - uVar6,param_12,param_13,param_14);
              *(undefined4 *)(param_1 + 0x680) = 0;
            }
            else {
              WaitForSingleObject(*(HANDLE *)(param_1 + 0x664),100);
            }
          } while (*(int *)(param_8 + 0x48) == 0 && *(int *)(param_8 + 0x4c) == 0);
        }
        lVar7 = FUN_011893f0(*(ushort *)(param_1 + 0x504) * uVar6 + param_3,param_8,
                             lVar1 + CONCAT44(param_5,param_4),param_6 - uVar6,
                             (param_7 - iVar2) - (uint)(param_6 < uVar6));
        SetEvent(*(HANDLE *)(param_1 + 0x660));
        lVar1 = lVar7 + lVar1;
      } while (lVar1 < CONCAT44(param_7,param_6));
    }
    else {
      if ((param_9 & 0x20000000) != 0) {
        *(undefined4 *)(param_1 + 0x4d8) = 1;
      }
      *(undefined4 *)(param_1 + 0x658) = 0;
      iVar2 = FUN_01189180(param_2,*(undefined4 *)(param_1 + 0x51c),param_1 + 0x4f8,
                           *(undefined4 *)(param_1 + 0x520),param_9,param_3,param_10,param_11,
                           param_4,param_5,param_6,param_12,param_13,param_14);
      lVar1 = (longlong)iVar2;
      if ((*(int *)(param_1 + 400) != 0) || (*(int *)(param_1 + 0x194) != 0)) {
        _SfAudio_FillSilence_12(param_1 + 0x4f8,param_3,iVar2);
        return (longlong)iVar2;
      }
    }
  }
  return lVar1;
}


