/* Module: sfcd.cdd
   Function: FUN_0041d130
   Address: 0041d130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d130(undefined4 param_1,HSFCD__ *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041c040(param_2,param_3);
  if ((iVar1 < 0) &&
     ((iVar1 = *(int *)(param_2 + 0x160), (*(byte *)(iVar1 + 0x7a) & 0xf) == 5 ||
      (*(char *)(iVar1 + 0x84) == '$')))) {
    *(undefined4 *)(iVar1 + 0x40) = 2;
    FUN_0041c040(param_2,param_3);
  }
  return;
}


