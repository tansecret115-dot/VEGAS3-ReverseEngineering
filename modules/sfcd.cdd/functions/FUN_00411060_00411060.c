/* Module: sfcd.cdd
   Function: FUN_00411060
   Address: 00411060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00411060(HSFCD__ *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar1 + 0x1d0) != 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1d0) = 0;
  iVar2 = FUN_004196c0(param_1,SUB41(param_2,0),&param_1,4);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1d0) = 1;
    *(HSFCD__ **)(iVar1 + 0x1d4) = param_1;
  }
  return iVar2;
}


