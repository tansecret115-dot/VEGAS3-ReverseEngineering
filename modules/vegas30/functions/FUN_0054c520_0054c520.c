/* Module: vegas30.exe
   Function: FUN_0054c520
   Address: 0054c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054c520(int param_1)

{
  LPCSTR lpString;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  HMENU hMenu;
  int *piVar4;
  int iVar5;
  LPCSTR lpString1;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = 0;
  bVar3 = true;
  if (*(int *)(param_1 + 0x84) == 2) {
    hMenu = (HMENU)FUN_004047d0(0x33e,0);
    if (hMenu == (HMENU)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x550) != 0) {
      iVar6 = 0;
      do {
        CheckMenuItem(hMenu,(&DAT_0061ad10)[*(ushort *)(*(int *)(param_1 + 0x54c) + 8 + iVar6)],8);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x10;
      } while (uVar7 < *(uint *)(param_1 + 0x550));
    }
    if (*(int *)(param_1 + 0x580) != 0) {
      CheckMenuItem(hMenu,0xa7e3,8);
    }
    piVar4 = (int *)FUN_0054a530(param_1);
    pcVar8 = EnableMenuItem_exref;
    if (piVar4 == (int *)0x0) {
LAB_0054c7dc:
      pcVar8 = EnableMenuItem_exref;
      EnableMenuItem(hMenu,0xa7df,1);
      uVar10 = 0x5296;
LAB_0054c7f3:
      (*pcVar8)(hMenu,uVar10,1);
      uVar10 = 0x6621;
      goto LAB_0054c7fd;
    }
    if ((*(uint *)(*piVar4 + 0x134) & 0x400) != 0) {
      EnableMenuItem(hMenu,0x5296,1);
    }
    if ((*(byte *)(*piVar4 + 0x134) & 0x20) == 0) {
      piVar4 = *(int **)(*piVar4 + 0x130);
      bVar2 = false;
      bVar1 = true;
      local_c = 0;
      iVar6 = *piVar4;
      if (iVar6 < 1) {
LAB_0054c660:
        EnableMenuItem(hMenu,0xa7f0,1);
      }
      else {
        piVar4 = (int *)piVar4[2];
        do {
          if (*(int *)(*piVar4 + 4) == 3) {
            bVar1 = false;
            bVar2 = true;
          }
          if (*(int *)(*piVar4 + 4) == 2) {
            local_c = 1;
          }
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (bVar1) goto LAB_0054c660;
      }
      if ((DAT_00647e30 != 1) || (!bVar2)) {
        _SfCullMenu_16(hMenu,&DAT_0061ad7c,1,1);
        bVar3 = false;
      }
      if (local_c == 0) {
        uVar10 = 0xc87e;
        goto LAB_0054c7fd;
      }
    }
    else {
      EnableMenuItem(hMenu,0xa7df,1);
      EnableMenuItem(hMenu,0xa7f0,1);
      EnableMenuItem(hMenu,0xa7bb,1);
      EnableMenuItem(hMenu,0xc87e,1);
      puVar9 = &DAT_0061ad7c;
LAB_0054c72a:
      _SfCullMenu_16(hMenu,puVar9,1,1);
      bVar3 = false;
      if ((*(byte *)(*piVar4 + 0x134) & 1) != 0) {
        (*pcVar8)(hMenu,0xa7e2,1);
        uVar10 = 0xa7fc;
        goto LAB_0054c7f3;
      }
    }
  }
  else {
    hMenu = (HMENU)FUN_004047d0(0x33f,0);
    piVar4 = (int *)FUN_0054a530(param_1);
    pcVar8 = EnableMenuItem_exref;
    if ((piVar4 == (int *)0x0) || (hMenu == (HMENU)0x0)) goto LAB_0054c7dc;
    if ((*(uint *)(*piVar4 + 0x134) & 0x400) != 0) {
      EnableMenuItem(hMenu,0x5296,1);
    }
    if (((byte)*(undefined4 *)(*piVar4 + 0x134) & 0x20) == 0x20) {
      EnableMenuItem(hMenu,0xa7df,1);
      EnableMenuItem(hMenu,0xa7f0,1);
      EnableMenuItem(hMenu,0xa7bb,1);
      EnableMenuItem(hMenu,0xc87e,1);
      puVar9 = &DAT_0061ad80;
      goto LAB_0054c72a;
    }
    piVar4 = *(int **)(*piVar4 + 0x130);
    bVar2 = false;
    bVar1 = true;
    local_c = 0;
    iVar6 = *piVar4;
    if (iVar6 < 1) {
LAB_0054c79d:
      EnableMenuItem(hMenu,0xa7f0,1);
    }
    else {
      piVar4 = (int *)piVar4[2];
      do {
        if (*(int *)(*piVar4 + 4) == 3) {
          bVar1 = false;
          bVar2 = true;
        }
        if (*(int *)(*piVar4 + 4) == 2) {
          local_c = 1;
        }
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (bVar1) goto LAB_0054c79d;
    }
    if ((DAT_00647e30 != 1) || (!bVar2)) {
      _SfCullMenu_16(hMenu,&DAT_0061ad80,1,1);
      bVar3 = false;
    }
    if (local_c != 0) goto LAB_0054c800;
    uVar10 = 0xc87e;
LAB_0054c7fd:
    (*pcVar8)(hMenu,uVar10,1);
  }
LAB_0054c800:
  iVar6 = 0;
  if (hMenu == (HMENU)0x0) {
    return 0;
  }
  local_10 = (int *)0x0;
  local_8 = 1;
  local_4 = 1;
  local_c = 0;
  iVar5 = FUN_0054c960(param_1,&local_10);
  if (-1 < iVar5) {
    local_c = *local_10;
    if (0 < local_c) {
      do {
        iVar5 = *(int *)(local_10[2] + iVar6 * 4);
        if ((*(uint *)(iVar5 + 0x134) & 0x400) == 0) {
          local_8 = 0;
          lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(iVar5 + 0x170);
          lpString = *(LPCSTR *)(iVar5 + 0x154);
          if (DAT_00647d28 == 1) {
            iVar5 = lstrcmpiA(lpString1,".AVI");
            if ((iVar5 == 0) && (lpString != (LPCSTR)0x0)) {
              iVar5 = lstrlenA(lpString);
              if (iVar5 != 0) {
                local_4 = 0;
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_c);
    }
    _SfList_Destroy_4(local_10);
    if (local_8 == 0) goto LAB_0054c8ca;
  }
  (*pcVar8)(hMenu,0xa7fc,1);
LAB_0054c8ca:
  if (local_4 != 0) {
    (*pcVar8)(hMenu,0xa7fd,1);
  }
  if (local_c < 1) {
    (*pcVar8)(hMenu,0xa7e2,1);
    (*pcVar8)(hMenu,0xa7bb,1);
    if (bVar3) {
      (*pcVar8)(hMenu,0x146b,1);
    }
  }
  ClientToScreen(*(HWND *)(param_1 + 0x98),(LPPOINT)&stack0x00000008);
  uVar10 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&stack0x00000008,2);
  return uVar10;
}


