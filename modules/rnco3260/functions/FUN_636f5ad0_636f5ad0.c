/* Module: rnco3260.dll
   Function: FUN_636f5ad0
   Address: 636f5ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_636f5ad0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = -0xff;
  piVar2 = &DAT_63788f4c;
  do {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar1 * iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar3;
  } while ((int)piVar3 < 0x63789745);
  FUN_636f59a0(0x100,(uint *)&DAT_63766260,0x63766660);
  FUN_636f59a0(0x100,(uint *)&DAT_63766260,0x63766660);
  return;
}


