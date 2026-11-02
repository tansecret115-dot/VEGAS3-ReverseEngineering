/* Module: extmondrv.dll
   Function: FUN_00409ac0
   Address: 00409ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409ac0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 0x6e76645f) && (iVar1 != 0x6e766477)) && (iVar1 != 0x7076645f)) &&
     (iVar1 != 0x70766477)) {
    *param_1 = 0x6e76645f;
  }
  return;
}


