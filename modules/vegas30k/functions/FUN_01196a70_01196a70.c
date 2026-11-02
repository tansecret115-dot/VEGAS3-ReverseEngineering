/* Module: vegas30k.dll
   Function: FUN_01196a70
   Address: 01196a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01196c6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_01196a70(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            uint param_7,uint param_8,int param_9,int param_10,int param_11,uint param_12,
            int param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_20;
  int local_10;
  undefined8 local_8;
  
  bVar2 = (double)CONCAT44(param_9,param_8) < _DAT_011db3f0;
  lVar4 = 0;
  local_20 = 0;
  iVar1 = *(int *)(param_1[0xb] + 0x7ec);
  local_8 = (double)CONCAT44(param_9,param_8);
  if (bVar2) {
    local_8 = (double)CONCAT44(param_9,param_8) * _DAT_011dbdc8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  if (param_3 == 0x20) {
    if ((double)CONCAT44(param_9,param_8) != _DAT_011dad58) {
      param_1[0x1b] = 1;
    }
    if (param_1[0x192] == 0) {
      if (param_1[0x1b] != 0) goto LAB_01196c8f;
    }
    else {
      if (param_1[0x1b] == 0) {
        param_1[0x114] = 1;
        iVar1 = FUN_011af6c0(param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                             param_11,param_12,param_13,param_14,param_15,param_16);
        if (iVar1 != -3) {
          iVar1 = 0;
          param_8 = param_12;
          param_9 = param_13;
          if ((-1 < param_13) &&
             ((lVar4 = CONCAT44(param_11,param_10), lVar5 = 0, 0 < param_13 ||
              (lVar4 = CONCAT44(param_11,param_10), lVar5 = 0, param_12 != 0)))) {
            do {
              lVar3 = FUN_011a06f0((uint)*(ushort *)(param_5 + 0xc) * (int)lVar5 + param_6,param_5,
                                   param_8,param_9);
              if ((param_7 & 0x200000) != 0) {
                (**(code **)(*param_1 + 0xa8))
                          (param_1,lVar4,(uint)*(ushort *)(param_5 + 0xc) * (int)lVar5 + param_6,
                           lVar3,0,0x3ff00000,0,param_7 >> 0x1c & 1,0);
              }
              param_7 = param_7 & 0xefffffff;
              lVar4 = lVar3 + lVar4;
              bVar2 = param_8 < (uint)lVar3;
              param_8 = param_8 - (uint)lVar3;
              param_9 = (param_9 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)bVar2;
              lVar5 = lVar3 + lVar5;
              iVar1 = (int)lVar5;
            } while (lVar5 < CONCAT44(param_13,param_12));
          }
        }
        LeaveCriticalSection(lpCriticalSection);
        return iVar1;
      }
LAB_01196c8f:
      param_1[0x136] = 1;
    }
    param_1[0x152] = param_10;
    param_1[0x114] = 0;
    param_1[0x153] = param_11;
    lVar4 = (**(code **)(*param_1 + 0x1b0))
                      (param_6,param_10,param_11,param_12,param_13,param_7,param_8,param_9,param_14,
                       param_15,param_16);
    if ((lVar4 != -3) &&
       (lVar5 = (**(code **)(*param_1 + 400))
                          (param_6,param_10,param_11,param_12,param_13,param_7,param_8,param_9,
                           param_14,param_15,param_16), lVar5 != -3)) {
      if (iVar1 << 0xe < 0) {
        if (lVar4 == -2) {
          _SfAudio_FillSilence_12(param_5,param_6,param_12);
          iVar1 = FUN_011a0940(param_6,param_10,param_11,param_12,param_13,param_7,param_8,param_9,
                               param_14,param_15,param_16);
          if (iVar1 == 0) {
            lVar4 = CONCAT44(param_13,param_12);
          }
        }
        else {
          FUN_011a0940(param_6,param_10,param_11,lVar4,param_7,param_8,param_9,param_14,param_15,
                       param_16);
        }
      }
      lVar4 = FUN_011968b0(param_6,param_12,param_13,lVar4);
      if (((lVar4 == -2) || (param_1[100] != 0)) || (param_1[0x65] != 0)) {
        lVar4 = CONCAT44(param_13,param_12);
        _SfAudio_FillSilence_12(param_5,param_6,param_12);
        local_20 = 1;
      }
      goto LAB_01196e39;
    }
  }
  else {
LAB_01196e39:
    local_10 = (int)lVar4;
    if ((param_1[0x66] == 0) || (param_1[100] != 0)) {
      if (local_20 != 0) goto LAB_01196f40;
LAB_01196e74:
      param_5 = local_10;
    }
    else {
      if (local_20 == 0) {
        _SfAudio_MonoChannel_16(param_6,param_6,param_1 + 0x13e,local_10);
        goto LAB_01196e74;
      }
LAB_01196f40:
      param_5 = -2;
    }
    if ((param_7 & 0x100000) != 0) {
      (**(code **)(*param_1 + 0xb4))
                (param_1,param_10,0,param_6,param_5,0,0,0x3ff00000,0,param_7 >> 0x1c & 1,local_20);
    }
    iVar1 = (*(code *)param_1[0x147])
                      (param_1,0x31,param_1[0x148],param_1 + 0x13e,param_6,0,param_8,param_9,
                       param_10,param_11,lVar4,param_14,param_15,param_16);
    if (iVar1 != -3) {
      if ((param_7 & 0x200000) != 0) {
        (**(code **)(*param_1 + 0xa8))
                  (param_1,param_10,0,param_6,param_5,0,(undefined4)local_8,local_8._4_4_,bVar2,
                   param_7 >> 0x1c & 1,local_20);
      }
      goto LAB_01196f55;
    }
  }
  param_5 = -3;
LAB_01196f55:
  LeaveCriticalSection(lpCriticalSection);
  return param_5;
}


