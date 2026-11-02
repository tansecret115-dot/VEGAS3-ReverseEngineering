/* Module: stl2plg.dll
   Function: FUN_00402df0
   Address: 00402df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00402df0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00401000(param_1);
  param_1[0x11] = &PTR_LAB_004646e4;
  *param_1 = &PTR_FUN_0046469c;
  param_1[0x11] = &PTR_LAB_00464680;
  _DAT_00471038 = DAT_004658ec;
  _DAT_00471034 = DAT_004658e8;
  _DAT_00471044 = DAT_0046f820;
  _DAT_0047103c = DAT_004658f0;
  _DAT_00471040 = DAT_004658f4;
  _DAT_00471050 = DAT_0046f82c;
  _DAT_00471048 = DAT_0046f824;
  _DAT_0047104c = DAT_0046f828;
  puVar2 = &DAT_00471020;
  puVar3 = param_1 + 4;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


