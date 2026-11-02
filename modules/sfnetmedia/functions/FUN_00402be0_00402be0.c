/* Module: sfnetmedia.dll
   Function: FUN_00402be0
   Address: 00402be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00402be0(int param_1,HWND param_2,undefined2 *param_3,int param_4,wchar_t *param_5,
            wchar_t *param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UINT uMode;
  HMODULE pHVar4;
  size_t sVar5;
  HGLOBAL pvVar6;
  LPSTR lpMultiByteStr;
  HWND pHVar7;
  HWND pHVar8;
  int *piVar9;
  ushort unaff_BX;
  HANDLE unaff_ESI;
  WORD unaff_DI;
  WORD WVar10;
  WORD WVar11;
  WORD WVar12;
  undefined2 in_stack_fffffdb0;
  ushort in_stack_fffffdb4;
  ushort in_stack_fffffdb8;
  LONG LVar13;
  uint in_stack_fffffdbc;
  uint in_stack_fffffdc0;
  uint in_stack_fffffdc4;
  undefined4 *in_stack_fffffdc8;
  uint in_stack_fffffdcc;
  undefined4 *in_stack_fffffdd0;
  int in_stack_fffffdd4;
  undefined4 in_stack_fffffdd8;
  undefined4 in_stack_fffffddc;
  int in_stack_fffffde0;
  uchar local_1ec [260];
  undefined **local_e8 [7];
  undefined **local_cc [11];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  int local_94;
  undefined2 *local_90;
  uchar *local_8c;
  LPSTR local_88;
  int local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined1 local_6c [32];
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00435690;
  puStack_10 = &DAT_00432450;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffda4;
  local_20 = 0x8004e01b;
  if (*(int *)(param_1 + 0xc) != 0) {
    WVar12 = 0;
    WVar11 = (WORD)local_24;
    ExceptionList = &local_14;
    iVar3 = InternetGetConnectedState();
    if (iVar3 != 0) {
      WVar10 = 0;
      iVar3 = InternetAttemptConnect();
      if (iVar3 == 0) {
        FUN_00403160((DWORD)param_2,WVar10,WVar11,WVar12,unaff_DI,unaff_ESI,unaff_BX,
                     in_stack_fffffdb0,in_stack_fffffdb4,in_stack_fffffdb8,in_stack_fffffdbc,
                     in_stack_fffffdc0,in_stack_fffffdc4,in_stack_fffffdc8,in_stack_fffffdcc,
                     in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,in_stack_fffffddc,
                     in_stack_fffffde0);
        if ((-1 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x10) != 0)) {
          if (*(int *)(param_1 + 0x28) == 0) {
            FUN_004136c0((HMODULE)0x0,local_1ec,0x104);
            _mbscat(local_1ec,(uchar *)"sfconfigmgr.dll");
            local_8 = 0;
            uMode = SetErrorMode(0x8000);
            pHVar4 = LoadLibraryA((LPCSTR)local_1ec);
            *(HMODULE *)(param_1 + 0x28) = pHVar4;
            SetErrorMode(uMode);
            if (*(int *)(param_1 + 0x28) == 0) {
              local_20 = 0x8004e007;
            }
            local_8 = 0xffffffff;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          uVar2 = *(undefined4 *)(param_1 + 0x28);
          FUN_00403fc0((int)local_e8);
          FUN_00404010((int)local_cc);
          local_a0 = 0;
          local_9c = 0;
          local_98 = (undefined2 *)0x0;
          local_94 = 0;
          local_90 = (undefined2 *)0x0;
          local_8c = (uchar *)0x0;
          local_88 = (LPSTR)0x0;
          local_84 = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0xffffffff;
          FUN_004027c0(local_6c,0x20,1,&LAB_004038a0);
          local_48 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_e8[0] = &PTR_LAB_0043566c;
          local_cc[0] = &PTR_LAB_0043564c;
          local_4c = (uint)((param_8 & 4) != 0);
          local_44 = (uint)((param_8 & 8) == 0);
          local_74 = *(int *)(param_1 + 0x10);
          local_70 = *(int *)(param_1 + 0x14);
          local_78 = *(undefined4 *)(*(int *)(local_74 + 8) + local_70 * 4);
          if ((param_3 != (undefined2 *)0x0) && (param_4 != 0)) {
            local_98 = param_3;
            local_94 = param_4;
            local_90 = param_3;
            *param_3 = 0;
            param_3[1] = 0;
          }
          local_7c = param_7;
          local_34 = uVar2;
          local_30 = uVar1;
          if (param_5 != (wchar_t *)0x0) {
            sVar5 = wcslen(param_5);
            pvVar6 = GlobalAlloc(0x40,sVar5 + 1);
            local_8c = GlobalLock(pvVar6);
            if (local_8c != (uchar *)0x0) {
              FUN_0040b2c0((LPSTR)local_8c,param_5,sVar5 + 1);
              _mbslwr(local_8c);
            }
          }
          *(uint *)(param_1 + 0x24) = param_8 & 3;
          if (*(int *)(param_1 + 0x18) != 0) {
            local_3c = *(undefined4 *)(param_1 + 0x20);
            local_84 = *(int *)(param_1 + 0x18);
            local_80 = param_8 & 3;
          }
          if ((param_6 != (wchar_t *)0x0) && (sVar5 = wcslen(param_6), 0 < (int)sVar5)) {
            pvVar6 = GlobalAlloc(0x40,sVar5 + 3);
            lpMultiByteStr = GlobalLock(pvVar6);
            local_88 = lpMultiByteStr;
            if (lpMultiByteStr != (LPSTR)0x0) {
              if (*param_6 == L'\0') {
                *lpMultiByteStr = '\0';
              }
              else {
                WideCharToMultiByte(0,0,param_6,-1,lpMultiByteStr,sVar5 + 3,(LPCSTR)0x0,(LPBOOL)0x0)
                ;
              }
              lpMultiByteStr[sVar5 + 2] = '\0';
            }
          }
          LVar13 = -1;
          pHVar7 = GetFocus();
          pHVar8 = FUN_00404df0(local_e8,param_2,0);
          if (pHVar8 != (HWND)0x0) {
            EnableWindow(param_2,0);
            piVar9 = (int *)(*(code *)local_e8[0][3])();
            if (piVar9 != (int *)0x0) {
              LVar13 = FUN_00404c40(pHVar8,pHVar7,piVar9);
              (**(code **)(*piVar9 + 8))(piVar9);
            }
            EnableWindow(param_2,1);
          }
          if (LVar13 == 0) {
            local_20 = 0;
          }
          iVar3 = FUN_00410c90(*(int **)(param_1 + 0x10));
          *(int *)(param_1 + 0x14) = iVar3;
          FUN_0040b320(local_e8);
          ExceptionList = local_14;
          return local_20;
        }
        ExceptionList = local_14;
        return 0x8004e0b1;
      }
    }
    local_20 = 0x8004e0ec;
  }
  ExceptionList = local_14;
  return local_20;
}


