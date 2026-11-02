/* Module: vegas30.exe
   Function: FUN_00553020
   Address: 00553020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00553020(undefined4 param_1,LPARAM param_2)

{
  int iVar1;
  undefined4 *puVar2;
  HPROPSHEETPAGE local_68;
  undefined1 local_64 [52];
  _union_1935 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  HPROPSHEETPAGE *local_14;
  
  puVar2 = (undefined4 *)(local_64 + 0x30);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)local_64;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_68 = (HPROPSHEETPAGE)0x0;
  local_64._48_4_ = (HANDLE)0x34;
  local_30.hbmHeader = (HBITMAP)0x0;
  local_2c = param_1;
  local_28 = DAT_006471fc;
  local_20 = _SfGetString_8(DAT_00647204,0x6df8);
  local_14 = &local_68;
  local_18 = 0;
  local_1c = 1;
  local_64._0_4_ = 0x30;
  local_64._4_4_ = 8;
  local_64._12_4_ = (_union_1933)0x550;
  local_64._8_4_ = _SfFindResInstance_12(DAT_00647204,0x550,5);
  local_64._20_4_ = _SfGetString_8(DAT_00647204,0x6df7);
  local_64._24_4_ = FUN_0055c050;
  local_64._28_4_ = param_2;
  local_68 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_64);
  if (local_68 != (HPROPSHEETPAGE)0x0) {
    PropertySheetA((LPCPROPSHEETHEADERA)(local_64 + 0x30));
    return 1;
  }
  return 0;
}


