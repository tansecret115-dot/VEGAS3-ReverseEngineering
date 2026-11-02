/* Module: vegas30.exe
   Function: FUN_00436ae0
   Address: 00436ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00436b4f) */
/* WARNING: Removing unreachable block (ram,0x00436c74) */

undefined4 FUN_00436ae0(int param_1)

{
  int *piVar1;
  LPSTR lpMultiByteStr;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *local_60 [4];
  OLECHAR local_50 [40];
  
  iVar6 = param_1;
  uVar2 = DAT_0064ae9c;
  uVar5 = DAT_0064ae9c & 0xfffffffe;
  iVar3 = _SfDialogBoxParam_20();
  if (iVar3 != 1) {
    return 1;
  }
  if (*(int *)(param_1 + 4) == 2) {
    if ((uVar2 & 2) != 0) {
      DAT_0064a55c = *(undefined4 *)(param_1 + 0x48);
    }
    if ((uVar2 & 4) != 0) {
      DAT_0064a698 = *(undefined4 *)(param_1 + 0x230);
    }
    if ((uVar2 & 8) != 0) {
      DAT_006477b0 = *(int *)(*(int *)(param_1 + 0x69c) + 0x24) -
                     *(int *)(*(int *)(param_1 + 0x69c) + 0x1c);
    }
    if ((uVar2 & 0x10) != 0) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x244) == 0) {
        if (*(int **)(param_1 + 0x234) == (int *)0x0) {
          param_1 = 0;
        }
        else {
          param_1 = **(int **)(param_1 + 0x234);
        }
      }
      else {
        param_1 = FUN_005d0420();
      }
      local_60[0] = &DAT_00648574;
      local_60[1] = &DAT_0064859c;
      local_60[2] = &DAT_006485c4;
      local_60[3] = &DAT_006485ec;
      do {
        if (iVar3 < param_1) {
          piVar1 = *(int **)(iVar6 + 0x234);
          if (piVar1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar1;
          }
          if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(piVar1[2] + iVar3 * 4);
          }
          StringFromGUID2((GUID *)(iVar4 + 0xc),local_50,0x28);
          lpMultiByteStr = local_60[iVar3];
          if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_50,-1,lpMultiByteStr,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
            lpMultiByteStr[0x27] = '\0';
            goto LAB_00436de9;
          }
          lpMultiByteStr[0x27] = '\0';
        }
        else {
          _mbscpy(local_60[iVar3],(uchar *)"{00000000-0000-0000-0000-000000000000}");
        }
LAB_00436de9:
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  else if (*(int *)(param_1 + 4) == 3) {
    if (((uVar2 & 0x20) != 0) &&
       (DAT_0064add0 = *(undefined4 *)(param_1 + 0x13c), *(int *)(param_1 + 0x13c) == -1)) {
      _SfGuidToString_12();
    }
    if ((uVar2 & 0x40) != 0) {
      DAT_006477b4 = *(int *)(*(int *)(param_1 + 0x69c) + 0x24) -
                     *(int *)(*(int *)(param_1 + 0x69c) + 0x1c);
    }
    if ((uVar2 & 0x80) != 0) {
      if (*(int **)(param_1 + 0x78) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(param_1 + 0x78);
      }
      local_60[0] = &DAT_0064adfc;
      local_60[1] = &DAT_0064ae24;
      local_60[2] = &DAT_0064ae4c;
      local_60[3] = &DAT_0064ae74;
      iVar3 = 0;
      do {
        if (iVar3 < iVar6) {
          _SfGuidToString_12();
        }
        else {
          _mbscpy(local_60[iVar3],(uchar *)"00000000-0000-0000-0000-000000000000");
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  DAT_0064ae9c = uVar5;
  return 1;
}


