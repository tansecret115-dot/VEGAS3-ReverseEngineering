/* Module: sfcd.cdd
   Function: FUN_00401b30
   Address: 00401b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401b30(undefined4 param_1,HSFCD__ *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffd;
  if (*(int *)param_2 != 0) {
    iVar1 = FUN_0041d6e0(param_2,&DAT_0043c140,0x200);
    if (iVar1 == 0) {
      FUN_0041d7b0(param_2);
      iVar1 = 0;
    }
  }
  return iVar1;
}


