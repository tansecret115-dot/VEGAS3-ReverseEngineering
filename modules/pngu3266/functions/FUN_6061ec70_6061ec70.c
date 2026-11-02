/* Module: pngu3266.dll
   Function: FUN_6061ec70
   Address: 6061ec70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061ec70(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_60619b60(&DAT_6064b460,param_3,&local_8);
  if (iVar1 != 0) {
    FUN_6061ecc0(param_3,local_8);
    FUN_6061ec40((void *)*local_8,0);
  }
  return;
}


