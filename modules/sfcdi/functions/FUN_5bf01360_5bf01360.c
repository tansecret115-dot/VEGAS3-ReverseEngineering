/* Module: sfcdi.dll
   Function: FUN_5bf01360
   Address: 5bf01360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf01360(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *_Dst;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar1 = _getpid();
  uVar4 = 0;
  if (DAT_5bf7c004 != 0) {
    _Dst = &DAT_5bf7c008;
    uVar2 = DAT_5bf7c004;
    do {
      if (*_Dst == iVar1) {
        if ((uVar2 == 1) || (uVar4 == uVar2 - 1)) {
          piVar6 = _Dst;
          for (iVar3 = 0x95; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          uVar2 = DAT_5bf7c004 - 1;
          DAT_5bf7c004 = uVar2;
        }
        else {
          memmove(_Dst,_Dst + 0x95,(uVar2 * 0x254 + 0x5bf7bdb4) - (int)_Dst);
          puVar5 = (undefined4 *)(DAT_5bf7c004 * 0x254 + 0x5bf7bdb4);
          for (iVar3 = 0x95; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          uVar2 = DAT_5bf7c004 - 1;
          DAT_5bf7c004 = uVar2;
        }
      }
      else {
        uVar4 = uVar4 + 1;
        _Dst = _Dst + 0x95;
      }
    } while (uVar4 < uVar2);
  }
  CloseHandle(DAT_5bf65ff8);
  puVar5 = &DAT_5bf65e20;
  for (iVar1 = 0x77; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return 1;
}


