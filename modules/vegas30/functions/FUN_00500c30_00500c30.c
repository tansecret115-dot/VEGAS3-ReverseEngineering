/* Module: vegas30.exe
   Function: FUN_00500c30
   Address: 00500c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500c30(int param_1)

{
  double dVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  undefined1 local_1c [24];
  
  local_84 = 0;
  local_80 = 0x40ed4c00;
  local_7c = 0;
  local_78 = 0x408f4000;
  local_74 = 0;
  local_70 = 0x3ff00000;
  local_5c = (double)(DAT_0064b130 >> 2) * (_DAT_00619d30 / _DAT_0064b120);
  local_6c = _DAT_00612910 / _DAT_0064b118;
  local_64 = (double)DAT_0064b132 * (_DAT_00619d30 / _DAT_0064b120);
  local_54 = local_5c * _DAT_00619d28;
  local_4c = local_5c * _DAT_00610560;
  local_44 = local_5c * _DAT_00610560 * _DAT_00619d28;
  local_3c = local_5c * _DAT_006128c8;
  local_34 = local_5c * _DAT_006128c8 * _DAT_00619d28;
  local_2c = local_5c * _DAT_006128b8;
  local_24 = local_5c * _DAT_006128b8 * _DAT_00619d28;
  dVar1 = *(double *)(param_1 + 0x20) / *(double *)(&local_84 + *(int *)(param_1 + 0x14) * 2);
  *(double *)(param_1 + 0x20) = dVar1;
  SfPrintF(local_1c,&DAT_00619d20,dVar1);
  puVar3 = local_1c;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x46a);
  SfSetWindowText(pHVar2,puVar3);
  return;
}


