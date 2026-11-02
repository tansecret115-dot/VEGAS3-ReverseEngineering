/* Module: aifplug.dll
   Function: FUN_5fbdc1c0
   Address: 5fbdc1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5fbdc1c0(ushort *param_1)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_1 & 0x8000) != 0) {
    return 0xac44;
  }
  uVar3 = 3;
  dVar1 = _DAT_5fc03c38;
  do {
    if (uVar3 == 0) {
      dVar1 = ((double)(param_1[1] & 0x7fff) + dVar1) * _DAT_5fc03c30;
    }
    else {
      dVar1 = ((double)param_1[uVar3 + 1] + dVar1) * _DAT_5fc03c28;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 < 0x80000000);
  if ((*(byte *)((int)param_1 + 3) & 0x80) != 0) {
    dVar1 = dVar1 + _DAT_5fbff790;
  }
  iVar4 = 0;
  uVar3 = (*param_1 & 0x7fff) - 0x3fff & 0xffff;
  if (uVar3 != 0) {
    do {
      if (_DAT_5fc03c20 < dVar1) break;
      iVar4 = iVar4 + 1;
      dVar1 = dVar1 + dVar1;
    } while (iVar4 < (int)uVar3);
  }
  uVar2 = ftol();
  return uVar2;
}


