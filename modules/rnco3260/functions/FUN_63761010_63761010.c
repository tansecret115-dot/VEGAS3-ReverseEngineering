/* Module: rnco3260.dll
   Function: FUN_63761010
   Address: 63761010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_63761010(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  _DAT_6379701c = in_stack_00000018;
  iVar1 = DAT_6379700c >> 1;
  if (((-1 < iVar1) && (iVar1 != 0)) && (_DAT_63797010 = iVar1, 0 < DAT_63797008)) {
                    /* WARNING: Could not recover jumptable at 0x63761066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_63797028)();
    return;
  }
  return;
}


