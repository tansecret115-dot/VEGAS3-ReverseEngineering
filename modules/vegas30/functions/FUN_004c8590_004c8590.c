/* Module: vegas30.exe
   Function: FUN_004c8590
   Address: 004c8590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c8590(int param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  undefined1 local_8 [4];
  
  iVar3 = param_2;
  iVar2 = param_1;
  if (((*(uint *)(param_2 + 0x10) >> 0x12 & 1) != param_3) ||
     ((*(uint *)(param_2 + 0x10) >> 0x13 & 1) != param_4)) {
    FUN_004606f0(param_2,*(int *)(*(int *)(param_2 + 0x69c) + 0x24) -
                         *(int *)(*(int *)(param_2 + 0x69c) + 0x1c),0,local_8,&param_2);
    uVar7 = *(uint *)(param_1 + 0xbb0);
    uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
    lVar1 = (longlong)param_2 * (longlong)*(int *)(param_1 + 0xbac);
    if (lVar1 < 0) {
      lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar4),
                       (uint)lVar1 - uVar4);
      uVar4 = 0;
    }
    local_c = (int)((longlong)(lVar1 + (ulonglong)uVar4) / (longlong)(int)uVar7);
    iVar5 = local_c;
    if (param_3 != 0) {
      iVar5 = _SfGetUIFontSize_4(0x6e);
      iVar5 = *(int *)(iVar5 + 4);
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xfffeffff;
      uVar7 = *(uint *)(param_1 + 0xbb0);
      uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
      lVar1 = (longlong)(iVar5 + 6 + param_2) * (longlong)*(int *)(param_1 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar4),
                         (uint)lVar1 - uVar4);
        uVar4 = 0;
      }
      iVar5 = (int)((longlong)(lVar1 + (ulonglong)uVar4) / (longlong)(int)uVar7) + local_c;
    }
    param_1 = iVar5;
    uVar7 = param_3;
    iVar5 = FUN_005be610(1,0);
    uVar4 = param_4;
    if (iVar5 != 0) {
      if (param_4 != 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xfffeffff;
      }
      iVar6 = FUN_005382e0(param_4);
      if (uVar4 != 0) {
        iVar6 = iVar6 * iVar5;
      }
      uVar7 = *(uint *)(iVar2 + 0xbb0);
      uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
      lVar1 = (longlong)iVar6 * (longlong)*(int *)(iVar2 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar4),
                         (uint)lVar1 - uVar4);
        uVar4 = 0;
      }
      local_c = (int)((longlong)(lVar1 + (ulonglong)uVar4) / (longlong)(int)uVar7);
      param_1 = param_1 + local_c;
      uVar7 = param_3;
    }
    *(uint *)(iVar3 + 0x10) =
         ((param_4 & 1) << 1 | uVar7 & 1) << 0x12 | *(uint *)(iVar3 + 0x10) & 0xfff3ffff;
    do {
      uVar7 = *(uint *)(iVar2 + 0xbb0);
      uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
      lVar1 = (longlong)param_1 * (longlong)*(int *)(iVar2 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar4),
                         (uint)lVar1 - uVar4);
        uVar4 = 0;
      }
      param_3 = (uint)((longlong)(lVar1 + (ulonglong)uVar4) / (longlong)(int)uVar7);
      FUN_004606f0(iVar3,param_3,0,&local_c,&param_4);
      iVar5 = param_2 - param_4;
      if (iVar5 < -1) {
        iVar5 = -1;
      }
      else if (1 < iVar5) {
        iVar5 = 1;
      }
      param_1 = param_1 + iVar5;
    } while (iVar5 != 0);
    FUN_004ca5c0(iVar2,iVar3,0xffffffff,param_1,0);
  }
  return;
}


