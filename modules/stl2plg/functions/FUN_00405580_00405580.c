/* Module: stl2plg.dll
   Function: FUN_00405580
   Address: 00405580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00405580(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00401000(param_1);
  param_1[0x11] = &PTR_LAB_004646e4;
  *param_1 = &PTR_FUN_00464824;
  param_1[0x11] = &PTR_LAB_00464808;
  _DAT_00471070 = DAT_004658cc;
  _DAT_0047106c = DAT_004658c8;
  _DAT_0047107c = DAT_0046f820;
  _DAT_00471074 = DAT_004658d0;
  _DAT_00471078 = DAT_004658d4;
  _DAT_00471088 = DAT_0046f82c;
  _DAT_00471080 = DAT_0046f824;
  _DAT_00471084 = DAT_0046f828;
  puVar2 = &DAT_00471058;
  puVar3 = param_1 + 4;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


