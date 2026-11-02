/* Module: sfcdi.dll
   Function: FUN_5bf0b610
   Address: 5bf0b610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0b610(uchar *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (((DAT_5bf63128 != 0) && (param_2 < 8)) && (param_3 < 0x10)) {
    uVar3 = 0;
    if ((&DAT_5bf631d8)[param_2 * 0x22] != 0) {
      pbVar4 = &DAT_5bf631dc + param_2 * 0x88;
      do {
        if ((*pbVar4 & 0xf) == param_3) {
          puVar1 = &DAT_5bf631dc + uVar3 * 8 + param_2 * 0x88;
          if (puVar1 != (undefined *)0x0) {
            if (((puVar1[1] & 0x1f) == 5) && (param_4 != (undefined4 *)0x0)) {
              *param_4 = 1;
            }
            bVar2 = (byte)puVar1[2] >> 5;
            if (bVar2 == 0) {
              FUN_5bf25750(param_1,(BYTE *)"\\\\.\\Scsi%d:");
              return;
            }
            if (bVar2 == 1) {
              FUN_5bf25750(param_1,(BYTE *)"\\\\.\\%c:");
              return;
            }
            if ((bVar2 == 2) && ((puVar1[1] & 0x1f) < 10)) {
              FUN_5bf25750(param_1,(BYTE *)"\\\\.\\Device\\%s%d");
              return;
            }
          }
          break;
        }
        uVar3 = uVar3 + 1;
        pbVar4 = pbVar4 + 8;
      } while (uVar3 < (uint)(&DAT_5bf631d8)[param_2 * 0x22]);
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  FUN_5bf25750(param_1,(BYTE *)"\\\\.\\%s%d:");
  return;
}


