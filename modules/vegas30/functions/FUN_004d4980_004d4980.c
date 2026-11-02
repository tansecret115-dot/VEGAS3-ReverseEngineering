/* Module: vegas30.exe
   Function: FUN_004d4980
   Address: 004d4980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d4980(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  LPCVOID local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = (int)param_2;
  bVar5 = false;
  local_14 = 0;
  local_1c = 0;
  local_20 = (LPCVOID)0x0;
  local_18 = 0xe;
  if (*(int *)((int)param_2 + 4) == 3) {
    iVar4 = 0x245;
    local_18 = 0x29;
LAB_004d49f8:
    FUN_005b8630(*(undefined4 *)(param_1 + 0xbc8));
    FUN_005b4c90(iVar4,&local_20,&local_1c);
    if (local_1c == 0) {
      FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),iVar4,0);
      local_14 = 1;
    }
    else if (local_20 != (LPCVOID)0x0) {
      FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),iVar4,0);
      local_14 = 1;
    }
  }
  else if (param_3 == 0) {
    uVar1 = (*(uint *)((int)param_2 + 0x10) & 0xff) >> 7;
    if (uVar1 == 0) {
      iVar4 = 0x51;
    }
    else if (uVar1 == 2) {
      iVar4 = 0x52;
    }
    else {
      if ((uVar1 < 0x200) || (0x2ff < uVar1)) {
        if ((uVar1 < 0x100) || (0x1ff < uVar1)) goto LAB_004d4a84;
        iVar4 = uVar1 - 0x8b;
      }
      else {
        iVar4 = uVar1 - 0x1ab;
      }
      if (iVar4 == 0) goto LAB_004d4a84;
    }
    goto LAB_004d49f8;
  }
LAB_004d4a84:
  if ((*(uint *)((int)param_2 + 0x10) & 0x10) == 0) {
    if (local_14 != 0) {
      if (local_1c == 0) {
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,local_18,0);
      }
      else if (local_20 != (LPCVOID)0x0) {
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,local_18,0);
        iVar2 = FUN_005b3ef0(local_1c,local_20,*(undefined4 *)((int)param_2 + 0x18));
        bVar5 = iVar2 == 0;
      }
    }
    if (*(int *)((int)param_2 + 4) == 3) {
      _TrackbarInst_Message_16
                (*(undefined4 *)(*(int *)(*(int *)((int)param_2 + 0x69c) + 0x54) + 0x134),param_4,
                 param_5,param_6);
    }
    else {
      iVar2 = *(int *)(*(int *)((int)param_2 + 0x69c) + 0x54);
      if (param_3 == 0) {
        _FaderInst_Message_16(*(undefined4 *)(iVar2 + 0x118),param_4,param_5,param_6);
      }
      else {
        _TrackbarInst_Message_16(*(undefined4 *)(iVar2 + 0x24c),param_4,param_5,param_6);
      }
    }
  }
  else {
    local_8 = *(uint *)((int)param_2 + 0x10) >> 7 & 1;
    if (*(int *)(param_1 + 0xbc8) == 0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    local_c = *(int *)(iVar2 + 4);
    local_4 = *param_2;
    local_10 = 0;
    if (0 < local_4) {
      do {
        iVar2 = *(int *)(param_2[2] + local_10 * 4);
        if (((*(byte *)(iVar2 + 0x10) & 0x10) != 0) && (*(int *)(iVar2 + 4) == local_c)) {
          if (local_14 != 0) {
            if (local_1c == 0) {
              FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,local_18,0);
            }
            else if ((local_20 != (LPCVOID)0x0) &&
                    (FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,local_18,0), !bVar5)) {
              iVar4 = FUN_005b3ef0(local_1c,local_20,*(undefined4 *)(iVar2 + 0x18));
              bVar5 = iVar4 == 0;
            }
          }
          if (*(int *)(iVar2 + 4) == 3) {
            _TrackbarInst_Message_16
                      (*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x69c) + 0x54) + 0x134),param_4,
                       param_5,param_6);
          }
          else {
            iVar4 = *(int *)(*(int *)(iVar2 + 0x69c) + 0x54);
            if (param_3 == 0) {
              if (local_8 == 0) {
                if ((*(byte *)(iVar2 + 0x10) & 0x80) == 0) goto LAB_004d4c9e;
              }
              else if ((*(byte *)(iVar2 + 0x10) & 0x80) != 0) {
LAB_004d4c9e:
                _FaderInst_Message_16(*(undefined4 *)(iVar4 + 0x118),param_4,param_5,param_6);
              }
            }
            else {
              _TrackbarInst_Message_16(*(undefined4 *)(iVar4 + 0x24c),param_4,param_5,param_6);
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_4);
    }
  }
  if (local_14 == 0) {
    return;
  }
  if (local_1c == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xbc8);
  }
  else {
    if ((local_20 == (LPCVOID)0x0) ||
       ((!bVar5 && (iVar2 = FUN_005b3f30(local_1c,local_20), iVar2 == 0)))) goto LAB_004d4d06;
    uVar6 = *(undefined4 *)(param_1 + 0xbc8);
  }
  FUN_004eb2b0(uVar6);
LAB_004d4d06:
  FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
  if (local_20 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(local_20);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(local_20);
    GlobalFree(pvVar3);
  }
  return;
}


