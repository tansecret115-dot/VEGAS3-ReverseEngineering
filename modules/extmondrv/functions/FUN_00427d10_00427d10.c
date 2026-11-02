/* Module: extmondrv.dll
   Function: FUN_00427d10
   Address: 00427d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427d10(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00453278;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0045327c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00412df0(DAT_0045b190,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_004533d8);
    if ((DAT_0045327c >> 0x10 == 0) && (DAT_0045327c != 0)) {
      FUN_00412df0(DAT_0045b190,DAT_0045327c);
    }
  }
  return;
}


