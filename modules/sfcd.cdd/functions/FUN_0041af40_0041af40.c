/* Module: sfcd.cdd
   Function: FUN_0041af40
   Address: 0041af40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041af40(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x160);
  iVar1 = FUN_004194f0((undefined4 *)param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004194f0((undefined4 *)param_1);
    if (iVar1 != 0) {
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x828,(uchar *)"comread.cpp");
      return 0;
    }
  }
  iVar2 = FUN_0041ae80(param_1,param_2);
  return iVar2;
}


