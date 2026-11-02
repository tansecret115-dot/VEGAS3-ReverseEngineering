/* Module: vidcap30.exe
   Function: FUN_004080b0
   Address: 004080b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_004080b0(HINSTANCE param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  HWND pHVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *local_160 [4];
  HINSTANCE local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  char *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char *local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  undefined1 local_104;
  undefined4 local_103;
  
  local_104 = 0;
  puVar6 = &local_103;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  FUN_00414b30();
  FUN_00413c10(&DAT_005bb858,DAT_005ba9b0);
  iVar5 = _SfGetMetricBinary_16(DAT_005ba29c,0x65,&DAT_005bbb30,0x1c0);
  if (iVar5 != 0x1c0) {
    puVar6 = &DAT_005bbb30;
    for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar5 = GetSystemMetrics(0x20);
    if ((uint)(*(int *)(param_2 + 8) == 3) + iVar5 * 2 == 0) {
      local_130 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c);
    }
    else {
      local_130 = GetSystemMetrics(0x3d);
    }
    local_138 = 0;
    local_134 = 0;
    local_12c = DAT_005ba55c;
    FUN_00408050(1099,&DAT_005b25f0,&local_138);
  }
  ppuVar7 = local_160;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)0x0;
    ppuVar7 = ppuVar7 + 1;
  }
  local_148 = _SfLoadCursor_8(0,0x7f00);
  local_14c = 0;
  local_13c = "VIDCAP.3.0.Class.Doc";
  local_144 = 0x10;
  local_150 = param_1;
  local_160[0] = (undefined1 *)0x8;
  local_160[1] = &LAB_0040c6c0;
  sVar1 = _SfRegisterClass_4(local_160);
  if (sVar1 != 0) {
    ppuVar7 = local_160;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar7 = (undefined1 *)0x0;
      ppuVar7 = ppuVar7 + 1;
    }
    local_148 = _SfLoadCursor_8(0,0x7f00);
    local_14c = _SfLoadIcon_8(DAT_005ba2a0,0x4a);
    local_13c = "VIDCAP.3.0.Class.Frame";
    local_144 = 0x10;
    local_150 = param_1;
    local_160[0] = (undefined1 *)0x8;
    local_160[1] = &LAB_00406b50;
    uVar2 = _SfRegisterClass_4(local_160);
    if ((uVar2 != 0) && (DAT_005ba4c0 = (LPVOID)FUN_00407f50(), DAT_005ba4c0 != (LPVOID)0x0)) {
      pHVar3 = CreateWindowExA(0,(LPCSTR)(uint)uVar2,&DAT_005ba2ac,0x2cf0000,
                               *(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),0,0,(HWND)0x0,
                               (HMENU)0x0,param_1,DAT_005ba4c0);
      if (pHVar3 != (HWND)0x0) {
        DAT_005ba4bc = pHVar3;
        if (((byte)DAT_005ba4b4 & 0x10) == 0) {
          FUN_00418140(pHVar3,&DAT_005bb848);
        }
        _SfMsgBoxSetAppData_12(param_1,pHVar3,&DAT_005ba2ac);
        _SfHelp_CreateHelpFilePathEX_16(0,DAT_005ba298,&local_104,0x104);
        _SfHelp_SetHelpFilePath_8(0,&local_104);
        _SfHelp_CreateHelpFilePathEX_16(1,DAT_005ba298,&local_104,0x104);
        _SfHelp_SetHelpFilePath_8(1,&local_104);
        DAT_005bba28 = FUN_0045b1f0();
        local_128 = DAT_005bb9f0;
        local_124 = "Desktop";
        local_120 = "My Documents";
        local_11c = "My Favorites";
        local_118 = "Entire Network";
        local_114 = "System Folder";
        local_110 = "\rName\tSize\t\rType\t\rModified";
        local_10c = "\rName\t\rType\tTotal Size\tFree Space";
        local_108 = "\rName\t\rComment";
        DAT_005bba24 = GetCExpStorageFS((_func_int_CExpStorageFS_ptr__EXPMSG_ptr_ulong_long_ptr *)
                                        0x0,0,(_initexpstorage *)&local_128);
        if (DAT_005bba24 == (IExpStorage *)0x0) {
          return pHVar3;
        }
        (**(code **)(*(int *)DAT_005bba24 + 4))(DAT_005bba24);
        return pHVar3;
      }
      uVar4 = 0x8004e00f;
      goto LAB_00408375;
    }
  }
  uVar4 = 0x8007000e;
LAB_00408375:
  _SfErrorHandler_MsgBox_24(0,0x30,0x1a,uVar4,0,0);
  return (HWND)0x0;
}


