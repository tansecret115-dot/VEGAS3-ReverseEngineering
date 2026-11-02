/* Module: aviplug.dll
   Function: FUN_5f942f30
   Address: 5f942f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f942f30(int param_1)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x660) != 0)) {
    piVar1 = FUN_5f98fe50((int *)(param_1 + 0x44),0xffffffff);
    piVar1[2] = 0;
    FUN_5f98fe00((int *)(param_1 + 0x20),piVar1);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x660),0xffffffff);
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined4 *)(param_1 + 0x664) = 0;
  }
  return;
}


