/* Module: vegas30.exe
   Function: FUN_00568170
   Address: 00568170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00568170(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HMODULE hmod;
  int iVar4;
  UINT UVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  LPCSTR pszSound;
  undefined4 uVar9;
  double dVar10;
  DWORD fdwSound;
  ulonglong local_118;
  CHAR local_10c [264];
  
  pdVar1 = (double *)GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      SetWindowLongA(param_1,8,(LONG)param_4);
      _SfWndCenter_16(param_1,0,0,0x8001);
      uVar2 = FUN_00568030(param_1,param_4);
      return uVar2;
    }
    if (param_2 != 2) {
      return 0;
    }
    if (*(HGDIOBJ *)((int)pdVar1 + 0x114) == (HGDIOBJ)0x0) {
      return 0;
    }
    DeleteObject(*(HGDIOBJ *)((int)pdVar1 + 0x114));
    *(undefined4 *)((int)pdVar1 + 0x114) = 0;
    return 0;
  }
  if (param_2 == 0x111) {
    uVar6 = param_3 & 0xffff;
    if (0x439 < uVar6) {
      if (uVar6 != 0x46f) {
        return 0;
      }
      UVar5 = IsDlgButtonChecked(param_1,0x46f);
      *(UINT *)(pdVar1 + 1) = UVar5;
      return 0;
    }
    if (uVar6 != 0x439) {
      if (uVar6 == 2) {
        EndDialog(param_1,2);
        return 1;
      }
      if (uVar6 != 0x438) {
        return 0;
      }
      if ((short)(param_3 >> 0x10) != 0x200) {
        return 0;
      }
      local_10c[0] = '\0';
      GetWindowTextA(param_4,local_10c,0x104);
      fVar7 = (float10)_SfTextToDoubleTokenEx_32
                                 (local_10c,*(undefined4 *)pdVar1,*(undefined4 *)((int)pdVar1 + 4),0
                                  ,0,0,0x4058c000,0);
      *pdVar1 = (double)fVar7;
      SfSetWindowText(param_4,&DAT_00610fc8,(double)fVar7);
      uVar2 = *(undefined4 *)((int)pdVar1 + 4);
      uVar9 = *(undefined4 *)pdVar1;
      puVar8 = &DAT_00610fc8;
      pHVar3 = GetDlgItem(param_1,0x625);
      SfSetWindowText(pHVar3,puVar8,uVar9,uVar2);
      return 0;
    }
    if (*(int *)((int)pdVar1 + 0xc) != 0) {
      KillTimer(param_1,99);
      SetWindowTextA(param_4,(LPCSTR)(pdVar1 + 2));
      uVar2 = *(undefined4 *)((int)pdVar1 + 4);
      uVar9 = *(undefined4 *)pdVar1;
      puVar8 = &DAT_00610fc8;
      pHVar3 = GetDlgItem(param_1,0x625);
      SfSetWindowText(pHVar3,puVar8,uVar9,uVar2);
      *(undefined4 *)((int)pdVar1 + 0xc) = 0;
      return 0;
    }
    iVar4 = ftol();
    *(int *)((int)pdVar1 + 0xc) = iVar4;
    if (iVar4 != 0) {
      SetTimer(param_1,99,100,(TIMERPROC)0x0);
      GetWindowTextA(param_4,(LPSTR)(pdVar1 + 2),0x104);
      SetWindowTextA(param_4,"Stop");
      return 0;
    }
    goto LAB_005682c9;
  }
  if (param_2 != 0x113) {
    return 0;
  }
  if (param_3 != 99) {
    return 0;
  }
  uVar6 = *(int *)((int)pdVar1 + 0xc) - 1;
  *(uint *)((int)pdVar1 + 0xc) = uVar6;
  local_118 = (ulonglong)uVar6;
  dVar10 = (double)local_118 * _DAT_00610800;
  puVar8 = &DAT_00610fc8;
  pHVar3 = GetDlgItem(param_1,0x625);
  SfSetWindowText(pHVar3,puVar8,dVar10);
  if ((*(int *)(pdVar1 + 1) != 0) && (*(uint *)((int)pdVar1 + 0xc) % 10 == 0)) {
    uVar6 = *(uint *)((int)pdVar1 + 0xc) / 10;
    if (uVar6 == 2) {
      fdwSound = 0x42007;
      hmod = GetModuleHandleA((LPCSTR)0x0);
      pszSound = &DAT_00000627;
    }
    else {
      if (uVar6 < 3) goto LAB_005682b5;
      fdwSound = 0x42007;
      hmod = GetModuleHandleA((LPCSTR)0x0);
      pszSound = &DAT_00000626;
    }
    PlaySoundA(pszSound,hmod,fdwSound);
  }
LAB_005682b5:
  if (*(int *)((int)pdVar1 + 0xc) != 0) {
    return 0;
  }
  KillTimer(param_1,99);
LAB_005682c9:
  EndDialog(param_1,1);
  return 0;
}


