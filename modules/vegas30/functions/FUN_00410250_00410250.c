/* Module: vegas30.exe
   Function: FUN_00410250
   Address: 00410250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00410250(HINSTANCE param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  bool bVar8;
  HWND local_184;
  undefined1 *local_180 [4];
  HINSTANCE local_170;
  undefined4 local_16c;
  undefined4 local_168;
  HGDIOBJ local_164;
  char *local_15c;
  tagRECT local_158;
  tagRECT local_148;
  tagRECT local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_103;
  
  local_104 = 0;
  puVar5 = &local_103;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  local_184 = (HWND)0x0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  FUN_004521a0();
  FUN_004506e0(&DAT_0064b188,DAT_0064856c);
  DAT_0064b4ac = RegisterClipboardFormatA("Sonic Foundry Vegas Data 2.0");
  iVar4 = FUN_0045ac20(param_1);
  if (iVar4 == 0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    iVar4 = FUN_00492970(param_1);
    if (iVar4 == 0) {
      iVar4 = -0x7ff8fff2;
    }
    else {
      iVar4 = FUN_00428550(param_1);
      if (iVar4 == 0) {
        iVar4 = -0x7ff8fff2;
      }
      else {
        iVar4 = FUN_005494d0(param_1);
        if (iVar4 == 0) {
          iVar4 = -0x7ff8fff2;
        }
        else {
          iVar4 = FUN_004f9ba0();
          if (iVar4 == 0) {
            iVar4 = -0x7ff8fff2;
          }
          else {
            if (DAT_00647620 != (HWND)0x0) {
              SetWindowPos(DAT_00647620,(HWND)0xfffffffe,0,0,0,0,0x13);
            }
            iVar4 = FUN_00508670(param_1);
            if (DAT_00647620 != (HWND)0x0) {
              SetWindowPos(DAT_00647620,(HWND)0xffffffff,0,0,0,0,0x13);
            }
            if (iVar4 == 0) {
              iVar4 = -0x7ff8fff2;
            }
            else {
              iVar4 = FUN_0044e720(param_1);
              if (iVar4 == 0) {
                iVar4 = -0x7ff8fff2;
              }
              else {
                iVar4 = FUN_00521ae0(param_1);
                if (iVar4 == 0) {
                  iVar4 = -0x7ff8fff2;
                }
                else {
                  iVar4 = _SfGetMetricBinary_16(DAT_00647200,0x65,&DAT_0064b5b0,0x300);
                  if (iVar4 != 0x300) {
                    puVar5 = &DAT_0064b5b0;
                    for (iVar4 = 0xc0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar5 = 0;
                      puVar5 = puVar5 + 1;
                    }
                    iVar4 = GetSystemMetrics(0x20);
                    if ((uint)(*(int *)(param_2 + 8) == 3) + iVar4 * 2 == 0) {
                      local_158.right = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c);
                    }
                    else {
                      local_158.right = GetSystemMetrics(0x3d);
                    }
                    iVar4 = FUN_00575010();
                    local_158.left = local_158.right + -400;
                    local_138.bottom = DAT_006477dc;
                    local_148.bottom = DAT_006477dc;
                    local_158.bottom = DAT_006477dc;
                    local_148.left = local_158.left - (iVar4 + 0x1a);
                    local_138.left = 0;
                    local_138.top = 0;
                    local_148.top = 0;
                    local_158.top = 0;
                    local_148.right = local_158.right;
                    local_138.right = local_158.right;
                    InflateRect(&local_138,-1,-1);
                    InflateRect(&local_148,-1,-1);
                    InflateRect(&local_158,-1,-1);
                    bVar8 = DAT_0060fffc == 3;
                    puVar5 = &DAT_0060fff8;
                    puVar6 = &DAT_0064b5f0;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (bVar8) {
                      _DAT_0064b620 = local_138.left;
                      DAT_0064b5f8 = DAT_0064b5f8 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b624 = local_138.top;
                      _DAT_0064b628 = local_138.right;
                      _DAT_0064b62c = local_138.bottom;
                    }
                    puVar5 = &DAT_00610038;
                    puVar6 = &DAT_0064b630;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (DAT_0061003c == 3) {
                      _DAT_0064b660 = local_138.left;
                      DAT_0064b638 = DAT_0064b638 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b664 = local_138.top;
                      _DAT_0064b668 = local_138.right;
                      _DAT_0064b66c = local_138.bottom;
                    }
                    puVar5 = &DAT_00610078;
                    puVar6 = &DAT_0064b6f0;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (DAT_0061007c == 3) {
                      _DAT_0064b720 = local_138.left;
                      DAT_0064b6f8 = DAT_0064b6f8 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b724 = local_138.top;
                      _DAT_0064b728 = local_138.right;
                      _DAT_0064b72c = local_138.bottom;
                    }
                    puVar5 = &DAT_00610138;
                    puVar6 = &DAT_0064b770;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (DAT_0061013c == 3) {
                      _DAT_0064b7a0 = local_138.left;
                      DAT_0064b778 = DAT_0064b778 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b7a4 = local_138.top;
                      _DAT_0064b7a8 = local_138.right;
                      _DAT_0064b7ac = local_138.bottom;
                    }
                    puVar5 = &DAT_00610178;
                    puVar6 = &DAT_0064b7b0;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (DAT_0061017c == 3) {
                      _DAT_0064b7e0 = local_138.left;
                      DAT_0064b7b8 = DAT_0064b7b8 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b7e4 = local_138.top;
                      _DAT_0064b7e8 = local_138.right;
                      _DAT_0064b7ec = local_138.bottom;
                    }
                    puVar5 = &DAT_00610238;
                    puVar6 = &DAT_0064b7f0;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (DAT_0061023c == 3) {
                      _DAT_0064b82c = local_138.bottom;
                      _DAT_0064b820 = local_138.left;
                      DAT_0064b7f8 = DAT_0064b7f8 & 0xffff | local_138.left << 0x10;
                      _DAT_0064b824 = local_138.top;
                      _DAT_0064b828 = local_138.right;
                    }
                    bVar8 = DAT_006101bc == 3;
                    puVar5 = &DAT_006101b8;
                    puVar6 = &DAT_0064b670;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (bVar8) {
                      _DAT_0064b6a4 = local_148.top;
                      _DAT_0064b6a8 = local_148.right;
                      _DAT_0064b6ac = local_148.bottom;
                      _DAT_0064b6a0 = local_148.left;
                      DAT_0064b678 = DAT_0064b678 & 0xffff | local_148.left << 0x10;
                    }
                    bVar8 = DAT_006101fc == 3;
                    puVar5 = &DAT_006101f8;
                    puVar6 = &DAT_0064b730;
                    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    if (bVar8) {
                      _DAT_0064b768 = local_158.right;
                      _DAT_0064b760 = local_158.left;
                      _DAT_0064b764 = local_158.top;
                      DAT_0064b738 = DAT_0064b738 & 0xffff | local_158.left << 0x10;
                      _DAT_0064b76c = local_158.bottom;
                    }
                  }
                  ppuVar7 = local_180;
                  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *ppuVar7 = (undefined1 *)0x0;
                    ppuVar7 = ppuVar7 + 1;
                  }
                  local_168 = _SfLoadCursor_8(0,0x7f00);
                  local_16c = 0;
                  local_15c = "Vegas.Class.Doc";
                  local_164 = (HGDIOBJ)0x10;
                  local_170 = param_1;
                  local_180[0] = (undefined1 *)0x8;
                  local_180[1] = &LAB_00414f50;
                  sVar1 = _SfRegisterClass_4(local_180);
                  if (sVar1 == 0) {
                    iVar4 = -0x7ff8fff2;
                  }
                  else {
                    ppuVar7 = local_180;
                    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *ppuVar7 = (undefined1 *)0x0;
                      ppuVar7 = ppuVar7 + 1;
                    }
                    local_168 = _SfLoadCursor_8(0,0x7f8a);
                    local_16c = 0;
                    local_15c = "Vegas.Class.Plexi";
                    local_164 = GetStockObject(5);
                    local_170 = param_1;
                    local_180[0] = (undefined1 *)0x8;
                    local_180[1] = &LAB_00410120;
                    sVar1 = _SfRegisterClass_4(local_180);
                    if (sVar1 == 0) {
                      iVar4 = -0x7ff8fff2;
                    }
                    else {
                      ppuVar7 = local_180;
                      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *ppuVar7 = (undefined1 *)0x0;
                        ppuVar7 = ppuVar7 + 1;
                      }
                      local_168 = _SfLoadCursor_8(0,0x7f00);
                      uVar2 = FUN_0043ce00(0);
                      local_16c = _SfLoadIcon_8(DAT_00647204,uVar2);
                      local_15c = "Vegas.Class.Frame";
                      local_164 = (HGDIOBJ)0x10;
                      local_170 = param_1;
                      local_180[0] = (undefined1 *)0x8;
                      local_180[1] = &LAB_0040e560;
                      uVar3 = _SfRegisterClass_4(local_180);
                      if (uVar3 == 0) {
                        iVar4 = -0x7ff8fff2;
                      }
                      else {
                        DAT_0064762c = (LPVOID)FUN_0040ff70();
                        if (DAT_0064762c == (LPVOID)0x0) {
                          iVar4 = -0x7ff8fff2;
                        }
                        else {
                          local_184 = CreateWindowExA(0x10,(LPCSTR)(uint)uVar3,&DAT_00647210,
                                                      (*(int *)(param_2 + 8) != 3) - 1 & 0x1000000 |
                                                      0x2cf0000,*(int *)(param_2 + 0x1c),
                                                      *(int *)(param_2 + 0x20),0,0,(HWND)0x0,
                                                      (HMENU)0x0,param_1,DAT_0064762c);
                          if (local_184 == (HWND)0x0) {
                            iVar4 = -0x7ffb1ff1;
                          }
                          else {
                            DAT_00647624 = local_184;
                            if (((byte)DAT_0064761c & 0x10) == 0) {
                              FUN_004ed020(local_184,&DAT_0064b178);
                            }
                            _SfMsgBoxSetAppData_12(param_1,local_184,&DAT_00647210);
                            if (((byte)DAT_0064761c & 0x10) != 0) {
                              _SfMsgBoxSetNoUIHook_4(FUN_004100d0);
                            }
                            _SfHelp_CreateHelpFilePathEX_16(0,DAT_006471fc,&local_104,0x104);
                            _SfHelp_SetHelpFilePath_8(0,&local_104);
                            _SfHelp_CreateHelpFilePathEX_16(1,DAT_006471fc,&local_104,0x104);
                            _SfHelp_SetHelpFilePath_8(1,&local_104);
                            DAT_0064b478 = FUN_004ef9b0();
                            local_128 = DAT_0064b370;
                            local_124 = _SfGetString2_8(DAT_00647204,1000);
                            local_120 = _SfGetString2_8(DAT_00647204,0x3e9);
                            local_11c = _SfGetString2_8(DAT_00647204,0x3ea);
                            local_118 = _SfGetString2_8(DAT_00647204,0x3eb);
                            local_114 = _SfGetString2_8(DAT_00647204,0x3ec);
                            local_110 = _SfGetString2_8(DAT_00647204,0x3ed);
                            local_10c = _SfGetString2_8(DAT_00647204,0x3ee);
                            local_108 = _SfGetString2_8(DAT_00647204,0x3ef);
                            DAT_0064b474 = GetCExpStorageFS((
                                                  _func_int_CExpStorageFS_ptr__EXPMSG_ptr_ulong_long_ptr
                                                  *)0x0,0,(_initexpstorage *)&local_128);
                            if (DAT_0064b474 != (IExpStorage *)0x0) {
                              (**(code **)(*(int *)DAT_0064b474 + 4))(DAT_0064b474);
                            }
                            iVar4 = FUN_0057d230(DAT_00647624);
                            if (-1 < iVar4) {
                              return local_184;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _SfErrorHandler_MsgBox_24(0,0x30,0x1a,iVar4,0,0);
  return local_184;
}


