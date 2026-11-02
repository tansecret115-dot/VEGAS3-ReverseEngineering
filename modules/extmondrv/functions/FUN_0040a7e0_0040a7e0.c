/* Module: extmondrv.dll
   Function: FUN_0040a7e0
   Address: 0040a7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a7e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = FUN_0040a680(param_1 + -0x10,param_2);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x444) != 0)) {
    ICDraw(*(int *)(param_1 + 0x444),0,param_2,param_3,param_4,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return iVar1;
}


