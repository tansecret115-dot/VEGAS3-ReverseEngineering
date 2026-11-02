/* Module: sfcdi.dll
   Function: FUN_5bf01080
   Address: 5bf01080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf01080(int param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  DVar1 = WaitForSingleObject(DAT_5bf65ff8,1000);
  if (DVar1 == 0x102) {
    return 0x80004005;
  }
  uVar4 = 0;
  if (DAT_5bf7c004 != 0) {
    piVar2 = &DAT_5bf7c118;
    do {
      if ((*(int *)(param_1 + 8) == piVar2[-1]) && (*(int *)(param_1 + 0xc) == *piVar2)) {
        if (uVar4 < DAT_5bf7c004) {
          if ((DAT_5bf7c004 == 1) || (uVar4 == DAT_5bf7c004 - 1)) {
            puVar6 = &DAT_5bf7c008 + uVar4 * 0x95;
            for (iVar3 = 0x95; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            DAT_5bf7c004 = DAT_5bf7c004 - 1;
          }
          else {
            memmove(&DAT_5bf7c008 + uVar4 * 0x95,&DAT_5bf7c25c + uVar4 * 0x95,
                    DAT_5bf7c004 * 0x254 + uVar4 * -0x254 + -0x254);
            puVar6 = (undefined4 *)(DAT_5bf7c004 * 0x254 + 0x5bf7bdb4);
            for (iVar3 = 0x95; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            DAT_5bf7c004 = DAT_5bf7c004 - 1;
          }
          goto LAB_5bf010d5;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0x95;
    } while (uVar4 < DAT_5bf7c004);
  }
  uVar5 = 0x80004005;
LAB_5bf010d5:
  ReleaseMutex(DAT_5bf65ff8);
  return uVar5;
}


