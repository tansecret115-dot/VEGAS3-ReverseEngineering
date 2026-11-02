/* Module: vegas30.exe
   Function: FUN_00567f20
   Address: 00567f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00567f20(HWND param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  INT_PTR IVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  PROPSHEETHEADERA_V2 *pPVar8;
  undefined4 *puVar9;
  PROPSHEETHEADERA_V2 local_c4;
  undefined4 local_90 [36];
  
  ppuVar6 = &PTR_LAB_00645544;
  pPVar8 = &local_c4;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    pPVar8->dwSize = 0;
    pPVar8 = (PROPSHEETHEADERA_V2 *)&pPVar8->dwFlags;
  }
  local_c4.hwndParent = param_1;
  local_c4.u3.ppsp = (LPCPROPSHEETPAGEA)local_90;
  local_c4.dwSize = 0x34;
  local_c4.dwFlags = 0x28;
  local_c4.hInstance = DAT_006471fc;
  local_c4.pszCaption = "whatever";
  local_c4.nPages = 0;
  local_c4.u2.nStartPage = 0;
  puVar7 = local_90;
  do {
    puVar9 = puVar7;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uVar1 = *(ushort *)(ppuVar6 + -1);
    *puVar7 = 0x30;
    puVar7[1] = 0;
    puVar7[3] = (uint)uVar1;
    uVar3 = _SfFindResInstance_12(DAT_00647204,(uint)uVar1,5);
    puVar2 = *ppuVar6;
    puVar7[2] = uVar3;
    puVar7[5] = 0;
    puVar7[6] = puVar2;
    puVar7[7] = param_2;
    ppuVar6 = ppuVar6 + 2;
    local_c4.nPages = local_c4.nPages + 1;
    puVar7 = puVar7 + 0xc;
  } while (ppuVar6 < &DAT_0064555c);
  IVar4 = PropertySheetA(&local_c4);
  if (IVar4 != -1) {
    if ((*(byte *)(param_2 + 200) & 4) == 0) {
      return 0;
    }
    return 0x8004e00c;
  }
  return 0x80004005;
}


