/* Module: sfcdi.dll
   Function: FUN_5bf01000
   Address: 5bf01000
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf01000(uint param_1)

{
  DWORD DVar1;
  int *piVar2;
  uint uVar3;
  
  DVar1 = WaitForSingleObject(DAT_5bf65ff8,1000);
  if (DVar1 != 0x102) {
    uVar3 = 0;
    if (DAT_5bf7c004 != 0) {
      piVar2 = &DAT_5bf7c118;
      do {
        if ((piVar2[-1] == *(int *)(param_1 + 4)) && (*piVar2 == *(int *)(param_1 + 8))) break;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 0x95;
      } while (uVar3 < DAT_5bf7c004);
    }
    ReleaseMutex(DAT_5bf65ff8);
    param_1 = uVar3;
  }
  if (param_1 != DAT_5bf7c004) {
    return param_1;
  }
  return 0xffffffff;
}


