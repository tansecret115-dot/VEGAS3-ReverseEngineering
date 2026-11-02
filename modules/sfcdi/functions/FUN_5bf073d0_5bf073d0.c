/* Module: sfcdi.dll
   Function: FUN_5bf073d0
   Address: 5bf073d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf073d0(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0xffffffff;
  if ((((*param_2 & 0x1f) == 5) || ((*param_2 & 0x1f) == 4)) && (iVar2 = 0, 0 < DAT_5bf66620)) {
    puVar3 = &DAT_5bf664a4;
    while( true ) {
      uVar1 = (*(code *)*puVar3)(0,0xe,param_1,param_2);
      if (uVar1 < 0x80000000) break;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 3;
      if (DAT_5bf66620 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = uVar1 + (&DAT_5bf664a8)[iVar2 * 3];
  }
  return uVar1;
}


