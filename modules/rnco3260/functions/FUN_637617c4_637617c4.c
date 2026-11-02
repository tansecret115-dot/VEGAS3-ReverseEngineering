/* Module: rnco3260.dll
   Function: FUN_637617c4
   Address: 637617c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_637617c4(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  _DAT_6379a068 = in_stack_00000018;
  iVar1 = DAT_6379a058 >> 1;
  if (((-1 < iVar1) && (iVar1 != 0)) && (_DAT_6379a05c = iVar1, 0 < DAT_6379a054)) {
                    /* WARNING: Could not recover jumptable at 0x6376181a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_6379a074)();
    return;
  }
  return;
}


