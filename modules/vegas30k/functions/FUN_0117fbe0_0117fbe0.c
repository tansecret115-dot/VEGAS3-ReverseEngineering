/* Module: vegas30k.dll
   Function: FUN_0117fbe0
   Address: 0117fbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0117fbe0(undefined4 param_1,undefined4 param_2,int param_3)

{
  HANDLE hThread;
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 0x60) == 0) {
    iVar2 = 0xf;
    hThread = GetCurrentThread();
    SetThreadPriority(hThread,iVar2);
    *(undefined4 *)(param_3 + 0x60) = 1;
  }
  iVar2 = *(int *)(param_3 + 0x34) + 1;
  *(int *)(param_3 + 0x34) = iVar2;
  if (iVar2 == 1) {
    uVar1 = FUN_0117f8e0(param_3);
    FUN_0117fb60(param_3,uVar1);
  }
  *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + -1;
  return;
}


