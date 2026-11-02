/* Module: mcplug.dll
   Function: FUN_00405570
   Address: 00405570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00405570(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = &PTR_LAB_004765b8;
  param_1[2] = &PTR_LAB_00476594;
  param_1[3] = &PTR_LAB_00476968;
  param_1[4] = &PTR_LAB_00476958;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_004768d8;
  param_1[1] = &PTR_LAB_004768c4;
  param_1[2] = &PTR_LAB_004768a0;
  param_1[3] = &PTR_LAB_0047688c;
  param_1[4] = &PTR_LAB_0047687c;
  DAT_00487c50 = DAT_00487c50 & 0xfffffee3 | 0x23;
  puVar2 = param_1 + 10;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


