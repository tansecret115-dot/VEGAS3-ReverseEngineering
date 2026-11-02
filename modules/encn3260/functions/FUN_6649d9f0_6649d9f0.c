/* Module: encn3260.dll
   Function: FUN_6649d9f0
   Address: 6649d9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6649d9f0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_664bbdc0(&DAT_664f0618,param_3,&local_8);
  if (iVar1 != 0) {
    FUN_6649da40(param_3,local_8);
    FUN_6649d9c0((void *)*local_8,0);
  }
  return;
}


