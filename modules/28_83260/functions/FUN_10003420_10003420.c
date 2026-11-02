/* Module: 28_83260.dll
   Function: FUN_10003420
   Address: 10003420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10003420(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_10008050 = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[1] = 0xbf800000;
  puVar2 = (undefined4 *)((int)this + 0x294);
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xc2000000;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x268);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x294);
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


