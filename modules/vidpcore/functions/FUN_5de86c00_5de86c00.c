/* Module: vidpcore.dll
   Function: FUN_5de86c00
   Address: 5de86c00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5de86c00(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  iVar1 = 0;
  do {
    uVar2 = 1 << ((byte)iVar1 & 0x1f);
    if ((param_1 & uVar2) != 0) {
      uVar3 = uVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  if (uVar3 != param_1) {
    param_1 = uVar3 * 2;
  }
  return param_1;
}


