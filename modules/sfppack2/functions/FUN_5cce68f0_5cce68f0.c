/* Module: sfppack2.dll
   Function: FUN_5cce68f0
   Address: 5cce68f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cce68f0(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  
  dVar1 = _DAT_5cd528e8;
  if ((_DAT_5cd528e8 <= param_1) && (dVar1 = param_1, _DAT_5cd528e0 < param_1)) {
    dVar1 = _DAT_5cd528e0;
  }
  uVar3 = 1;
  dVar2 = _DAT_5cd52910;
  do {
    if (dVar1 <= dVar2) break;
    dVar2 = dVar2 + _DAT_5cd52910;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  _CIpow();
  return;
}


