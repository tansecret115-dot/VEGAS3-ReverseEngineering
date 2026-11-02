/* Module: rnco3260.dll
   Function: FUN_636f5770
   Address: 636f5770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_636f5770(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_63767248;
  for (iVar2 = 0x13f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_63767744 = 0;
  iVar2 = 1;
  piVar1 = &DAT_63767748;
  do {
    *piVar1 = iVar2;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x63767b44);
  puVar3 = &DAT_63767b44;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xff;
    puVar3 = puVar3 + 1;
  }
  return;
}


