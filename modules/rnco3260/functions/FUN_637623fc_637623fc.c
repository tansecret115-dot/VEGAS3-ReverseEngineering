/* Module: rnco3260.dll
   Function: FUN_637623fc
   Address: 637623fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_637623fc(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  _DAT_6379a0bc = in_stack_00000018;
  iVar1 = DAT_6379a0ac >> 1;
  if ((((-1 < iVar1) && (iVar1 != 0)) && (_DAT_6379a0b0 = iVar1, iVar1 != 0)) && (0 < DAT_6379a0a8))
  {
                    /* WARNING: Could not recover jumptable at 0x63762455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_6379a0c8)();
    return;
  }
  return;
}


