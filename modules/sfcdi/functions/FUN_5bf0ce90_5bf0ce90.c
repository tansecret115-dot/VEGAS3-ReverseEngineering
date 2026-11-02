/* Module: sfcdi.dll
   Function: FUN_5bf0ce90
   Address: 5bf0ce90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0ce90(HSFSCSIPORT__ *param_1,undefined4 *param_2,int param_3)

{
  uchar *puVar1;
  int iVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(char *)(param_2 + 2) = (char)param_3;
  param_2[1] = 0;
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = SfScsi_GetIOBuffer(param_1);
  param_2[0x12] = puVar1;
  if (param_3 == 0) {
    param_2[0x13] = 0;
  }
  else {
    param_2[0x13] = DAT_5bf630f8;
  }
  param_2[0x14] = 1;
  param_2[0x15] = DAT_5bf630ec;
  param_2[0x17] = 0;
  param_2[0x18] = 1;
  iVar2 = FUN_5bf0ce60((int)param_2);
  param_2[1] = iVar2;
  return;
}


