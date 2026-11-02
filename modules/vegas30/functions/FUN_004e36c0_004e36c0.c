/* Module: vegas30.exe
   Function: FUN_004e36c0
   Address: 004e36c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e381a) */
/* WARNING: Removing unreachable block (ram,0x004e38ba) */

void FUN_004e36c0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  HRGN hrgn;
  int iVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  int in_stack_00000018;
  HDC local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  RECT local_10;
  
  iVar7 = param_1;
  bVar5 = false;
  local_68 = (HDC)0x0;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = *(int *)(param_2 + 8), 0 < iVar2)) {
    iVar3 = *(int *)(param_1 + 0xad4);
    iVar9 = iVar3 % iVar2;
    if (3 < iVar9) {
      iVar9 = 0;
    }
    local_60 = 0;
    local_20 = *(undefined4 *)(param_1 + 0xac0);
    local_1c = *(int *)(param_1 + 0xac4);
    local_18 = *(undefined4 *)(param_1 + 0xac8);
    local_14 = *(undefined4 *)(param_1 + 0xacc);
    local_5c = param_2 + 0x70;
    do {
      local_64 = 0;
      puVar10 = (uint *)(-(uint)(local_60 < *(uint *)(param_2 + 8)) & local_5c);
      iVar8 = local_1c + iVar9 + iVar3 / iVar2;
      uVar1 = local_1c + 2;
      iVar9 = *(int *)(iVar7 + 0xb90);
      iVar11 = iVar8 - local_1c;
      iVar4 = *(int *)(iVar7 + 0xb94);
      local_1c = iVar8;
      if (iVar9 == 0 && iVar4 == 0) {
        param_1 = 0xffffffff;
      }
      else {
        lVar12 = ftol();
        uVar6 = lVar12 + *(int *)(iVar7 + 0xac0);
        param_1 = (uint)uVar6;
        if ((uVar6 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar6 && (0xffffbfff < param_1)))) {
          if (0x3fff < (longlong)uVar6) {
            param_1 = 0x3fff;
          }
        }
        else {
          param_1 = 0xffffc000;
        }
      }
      if (iVar9 == 0 && iVar4 == 0) {
        local_28 = 0xffffffff;
      }
      else {
        lVar12 = ftol();
        uVar6 = lVar12 + *(int *)(iVar7 + 0xac0);
        local_28 = (uint)uVar6;
        if ((uVar6 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar6 && (0xffffbfff < local_28)))) {
          if (0x3fff < (longlong)uVar6) {
            local_28 = 0x3fff;
          }
        }
        else {
          local_28 = 0xffffc000;
        }
      }
      local_24 = iVar11 + -4 + uVar1;
      local_30 = param_1;
      local_2c = uVar1;
      if ((*puVar10 & 1) == 0) {
        if (!bVar5) {
          local_68 = GetDC(*(HWND *)(iVar7 + 4));
          local_10.left = *(LONG *)(iVar7 + 0xac0);
          local_10.top = *(LONG *)(iVar7 + 0xac4);
          local_10.right = *(LONG *)(iVar7 + 0xac8);
          local_10.bottom = *(LONG *)(iVar7 + 0xacc);
          hrgn = CreateRectRgnIndirect(&local_10);
          SelectClipRgn(local_68,hrgn);
          DeleteObject(hrgn);
          bVar5 = true;
        }
        FUN_00468740(local_68,&local_30,*(undefined4 *)(param_2 + 0x48),
                     *(undefined4 *)(param_2 + 0x48),0x550009);
      }
      *puVar10 = *puVar10 | 1;
      puVar10[0x15] = local_30;
      puVar10[0x16] = local_2c;
      puVar10[0x17] = local_28;
      puVar10[0x18] = local_24;
      if (in_stack_00000018 == 2) break;
      local_60 = local_60 + 1;
      local_5c = local_5c + 0x68;
      iVar9 = local_64;
    } while ((int)local_60 < iVar2);
    if (bVar5) {
      SelectClipRgn(local_68,(HRGN)0x0);
      ReleaseDC(*(HWND *)(iVar7 + 4),local_68);
    }
  }
  return;
}


