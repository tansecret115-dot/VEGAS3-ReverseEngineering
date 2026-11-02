/* Module: vegas30k.dll
   Function: SfFileProperties
   Address: 0101f670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __stdcall SfFileProperties(struct HWND__ *,struct tPSFFILEPROPINFO *,unsigned long) */

int SfFileProperties(HWND__ *param_1,tPSFFILEPROPINFO *param_2,ulong param_3)

{
  uint uVar1;
  UINT UVar2;
  HPROPSHEETPAGE p_Var3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  tPSFFILEPROPINFO *ptVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_144;
  undefined1 local_140 [8];
  undefined4 local_138;
  HINSTANCE local_134;
  uint local_130;
  undefined4 local_128;
  undefined4 local_124;
  tPSFFILEPROPINFO *local_120;
  tPSFFILEPROPINFO local_10c [64];
  HWND__ *local_cc;
  int local_c4;
  undefined4 local_bc;
  int local_b8;
  PROPSHEETHEADERA_V2 local_b4;
  uchar local_80 [128];
  
                    /* 0x1f670  394  ?SfFileProperties@@YGHPAUHWND__@@PAUtPSFFILEPROPINFO@@K@Z */
  if ((DAT_01209190 & 1) == 0) {
    DAT_01209190 = DAT_01209190 | 1;
    _DAT_01209198 = *(undefined4 *)(param_2 + 0x18);
    _DAT_0120919c = FUN_0101f490;
  }
  _mbscpy(local_80,*(uchar **)(param_2 + 0xc));
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  bVar10 = (uVar1 & 1) != 0;
  if (bVar10) {
    local_144 = 0;
  }
  uVar1 = (uint)bVar10;
  ptVar8 = local_10c;
  for (iVar4 = 0x23; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)ptVar8 = 0;
    ptVar8 = ptVar8 + 4;
  }
  local_cc = param_1;
  local_bc = 1;
  if (0x3f < param_3) {
    param_3 = 0x40;
  }
  iVar4 = *(int *)param_2;
  ptVar8 = local_10c;
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)ptVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    ptVar8 = ptVar8 + 4;
  }
  for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *ptVar8 = *param_2;
    param_2 = param_2 + 1;
    ptVar8 = ptVar8 + 1;
  }
  if (iVar4 == 1) {
    iVar4 = FUN_0101dab0(&local_144,uVar1,1);
    if (iVar4 == 0) {
      return 0;
    }
    local_b4.u2.nStartPage = 0;
  }
  else {
    UVar2 = 0;
    local_b4.u2.nStartPage = 0;
    if (uVar1 != 0) {
      piVar6 = &local_144;
      do {
        local_b4.u2.nStartPage = UVar2;
        if (DAT_012091a0 == *(int *)(&DAT_01209198 + *piVar6 * 8)) break;
        UVar2 = UVar2 + 1;
        piVar6 = piVar6 + 1;
        local_b4.u2.nStartPage = 0;
      } while ((int)UVar2 < (int)uVar1);
    }
  }
  local_b4.hwndParent = param_1;
  iVar4 = 0;
  local_b4.dwSize = 0x34;
  local_b4.dwFlags = 0x80;
  local_b4.hInstance = DAT_0120e5c0;
  local_b4.pszCaption = (LPCSTR)local_80;
  local_b4.nPages = 0;
  local_b4.u3.ppsp = (LPCPROPSHEETPAGEA)local_140;
  if (uVar1 != 0) {
    do {
      puVar9 = (undefined4 *)(local_140 + 4);
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_134 = DAT_0120e5c0;
      local_140._4_4_ = 0x30;
      local_130 = (uint)*(ushort *)(&DAT_01209198 + (&local_144)[iVar4] * 8);
      local_124 = *(undefined4 *)(&DAT_0120919c + (&local_144)[iVar4] * 8);
      local_120 = local_10c;
      local_138 = 0;
      local_128 = 0;
      p_Var3 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)(local_140 + 4));
      *(HPROPSHEETPAGE *)(local_140 + iVar4 * 4) = p_Var3;
      if (p_Var3 != (HPROPSHEETPAGE)0x0) {
        local_b4.nPages = local_b4.nPages + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar1);
  }
  PropertySheetA(&local_b4);
  DAT_012091a0 = local_b8;
  return local_c4;
}


