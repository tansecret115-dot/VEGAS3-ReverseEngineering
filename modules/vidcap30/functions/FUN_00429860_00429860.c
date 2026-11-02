/* Module: vidcap30.exe
   Function: FUN_00429860
   Address: 00429860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429860(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  tagRECT tStack_34;
  undefined4 *puStack_24;
  undefined *puStack_20;
  undefined4 *puStack_1c;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x100000;
    puStack_24 = *(undefined4 **)(param_1 + 0x350);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    puVar1 = (undefined4 *)(param_1 + 0x35c);
    puStack_20 = &DAT_005a2228;
    tStack_34.bottom = 0x4298a9;
    puStack_1c = puVar1;
    iVar2 = (**(code **)*puStack_24)();
    if (-1 < iVar2) {
      tStack_34.right = *puVar1;
      tStack_34.bottom = *(int *)(param_1 + 4);
      tStack_34.top = 0x4298bd;
      (**(code **)(*(int *)tStack_34.right + 0x74))();
      tStack_34.left = *puVar1;
      tStack_34.top = 0x40000000;
      (**(code **)(*(int *)tStack_34.left + 0x24))();
      (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,0);
      *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
      DAT_005ba4b4 = DAT_005ba4b4 | 0x80000;
      GetClientRect(*(HWND *)(param_1 + 4),&tStack_34);
      SendMessageA(*(HWND *)(param_1 + 4),5,0,
                   (tStack_34.bottom - tStack_34.top) * 0x10000 |
                   tStack_34.right - tStack_34.left & 0xffffU);
      DAT_005ba4b4 = DAT_005ba4b4 & 0xfff7ffff;
      uVar3 = FUN_004261a0(param_1);
      iVar2 = FUN_004299f0(param_1,uVar3);
      if (((-1 < iVar2) && ((*(uint *)(param_1 + 0x148) & 0x10000) != 0)) && (DAT_005bb564 != 0)) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                          (*(int **)(param_1 + 0x3b4),&DAT_005a2408,0,
                           *(undefined4 *)(param_1 + 0x360),0,0);
        if (iVar2 < 0) {
          (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                    (*(int **)(param_1 + 0x3b4),&DAT_005a23b8,0,*(undefined4 *)(param_1 + 0x360),0,0
                    );
          return;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffefffff;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  }
  return;
}


