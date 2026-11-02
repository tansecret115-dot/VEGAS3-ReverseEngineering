/* Module: sfcd.cdd
   Function: FUN_00409930
   Address: 00409930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409930(undefined4 param_1,HSFCD__ *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  HSFCD__ *pHVar3;
  int iVar4;
  uint uVar5;
  
  pHVar3 = param_2;
  iVar1 = param_3[1];
  iVar2 = *(int *)(param_2 + 0x160);
  if (*(int *)(iVar2 + 0x1cc) + iVar1 < *(int *)(iVar2 + 0x1c8)) {
    param_2 = (HSFCD__ *)0x0;
  }
  else {
    param_2 = (HSFCD__ *)0x1;
    if (*(int *)(iVar2 + 0x1dc) != 0) {
      cdr_SetWriteState(pHVar3,4);
    }
  }
  iVar4 = FUN_00409750(pHVar3,(undefined4 *)*param_3,iVar1,param_3[2],(int)param_2);
  uVar5 = cdr_GetWriteState(pHVar3);
  if ((uVar5 == 1) && (600 < *(int *)(iVar2 + 0x1cc))) {
    cdr_SetWriteState(pHVar3,2);
  }
  uVar5 = cdr_GetWriteState(pHVar3);
  if (uVar5 == 2) {
    cdr_SetWriteState(pHVar3,3);
  }
  *(int *)(iVar2 + 0x1cc) = *(int *)(iVar2 + 0x1cc) + iVar1;
  FUN_00419270(pHVar3,(tCDR_ERRORDATA *)(iVar2 + 100),2000,(uchar *)"cdr50s.cpp");
  return iVar4;
}


