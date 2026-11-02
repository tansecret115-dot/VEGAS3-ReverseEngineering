/* Module: stl2plg.dll
   Function: FUN_00405ce0
   Address: 00405ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00405ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00401000(param_1);
  param_1[0x11] = &PTR_LAB_004646e4;
  *param_1 = &PTR_LAB_00464980;
  param_1[0x11] = &PTR_LAB_00464964;
  _DAT_004710a8 = DAT_004658dc;
  _DAT_004710a4 = DAT_004658d8;
  _DAT_004710b4 = DAT_0046f820;
  _DAT_004710ac = DAT_004658e0;
  _DAT_004710b0 = DAT_004658e4;
  _DAT_004710c0 = DAT_0046f82c;
  _DAT_004710b8 = DAT_0046f824;
  _DAT_004710bc = DAT_0046f828;
  puVar2 = &DAT_00471090;
  puVar3 = param_1 + 4;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


