/* Module: vegas30.exe
   Function: FUN_004c7520
   Address: 004c7520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c7520(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  
  iVar6 = param_3;
  iVar2 = param_1;
  if (*(int *)(param_2 + 4) == 3) {
    if (((*(uint *)(param_2 + 0x10) & 0x40000) != 0) && ((*(uint *)(param_2 + 0x10) & 0x10000) == 0)
       ) {
      iVar3 = _SfGetUIFontSize_4(0x6e);
      local_8 = *(uint *)(iVar2 + 0xbb0);
      uVar4 = (local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f) >> 1;
      lVar1 = (longlong)(*(int *)(iVar3 + 4) + 6) * (longlong)*(int *)(iVar2 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar4),
                         (uint)lVar1 - uVar4);
        uVar4 = 0;
      }
      param_1 = (int)((longlong)(lVar1 + (ulonglong)uVar4) / (longlong)(int)local_8);
      iVar6 = param_1 + iVar6 * 2;
    }
    do {
      uVar4 = *(uint *)(iVar2 + 0xbb0);
      uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) >> 1;
      lVar1 = (longlong)iVar6 * (longlong)*(int *)(iVar2 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                         (uint)lVar1 - uVar5);
        uVar5 = 0;
      }
      FUN_004606f0(param_2,(int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)uVar4),0,
                   &local_8,&param_1);
      uVar4 = *(uint *)(iVar2 + 0xbb0);
      uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) >> 1;
      lVar1 = (longlong)param_3 * (longlong)*(int *)(iVar2 + 0xbac);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                         (uint)lVar1 - uVar5);
        uVar5 = 0;
      }
      iVar3 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)uVar4) - param_1;
      if (iVar3 < -1) {
        iVar3 = -1;
      }
      else if (1 < iVar3) {
        iVar3 = 1;
      }
      iVar6 = iVar6 + iVar3;
    } while (iVar3 != 0);
    *(int *)(param_2 + 0x694) = iVar6;
    *(undefined4 *)(param_2 + 0x698) = 0;
  }
  else {
    *(int *)(param_2 + 0x694) = param_3;
  }
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xffffffef;
  FUN_00456c20(iVar2);
  *(uint *)**(undefined4 **)(iVar2 + 0xbc8) = *(uint *)**(undefined4 **)(iVar2 + 0xbc8) | 0x10;
  return;
}


