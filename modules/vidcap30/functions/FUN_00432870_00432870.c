/* Module: vidcap30.exe
   Function: FUN_00432870
   Address: 00432870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00432870(int param_1)

{
  int *piVar1;
  HWND hWnd;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  tagRECT local_440;
  undefined4 local_430 [8];
  uint local_410;
  int *local_40c;
  int local_404;
  int local_400;
  undefined4 local_c;
  undefined1 *local_8;
  undefined1 local_4 [4];
  
  if (DAT_005bba24 == (int *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    puVar4 = local_430;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = _SfList_CreateExZ_32(local_430 + 2,4,0x10,0x10,2,0,0,0);
    if (-1 < iVar3) {
      iVar3 = FUN_00433210(local_430[2]);
      local_430[1] = *(undefined4 *)(param_1 + 8);
      local_430[0] = 0x401;
      (**(code **)(*DAT_005bba24 + 0xc))(DAT_005bba24,local_430);
      _SfList_Destroy_4(local_430[2]);
    }
  }
  GetClientRect(*(HWND *)(param_1 + 8),&local_440);
  if (-1 < iVar3) {
    iVar3 = _SfGetMetricBinary_16(DAT_005ba29c,0x44e,&local_410,0x410);
    if (iVar3 != 0x410) {
      puVar5 = &local_410;
      for (iVar3 = 0x104; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      piVar1 = (int *)_SfGetUIFontSize_4(100);
      local_404 = *piVar1 * 0x1e;
      local_400 = local_440.bottom / 2;
      local_410 = local_410 | 0x15;
    }
    local_40c = DAT_005bba24;
    local_c = DAT_005bba28;
    local_8 = &LAB_00434130;
    iVar3 = FUN_00433f70(local_4);
    if (-1 < iVar3) {
      hWnd = CreateWindowExA(0,"SfKrn_ExplorerEx_Class","",0x50000003,0,0,local_440.right,
                             local_440.bottom,*(HWND *)(param_1 + 8),(HMENU)&DAT_00000461,
                             DAT_005ba298,&local_410);
      *(HWND *)(param_1 + 0x184) = hWnd;
      BVar2 = IsWindow(hWnd);
      if (BVar2 == 0) {
        iVar3 = -0x7ff8fff2;
      }
    }
  }
  return (-1 < iVar3) - 1;
}


