/* Module: rmme3260.dll
   Function: FUN_6622b4b0
   Address: 6622b4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622b4b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 400) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)(param_1 + 400) = 2;
  iVar1 = FUN_6622b340(param_1);
  if (iVar1 < 0) {
    FUN_662173c0(*(void **)(param_1 + 0x180),iVar1);
  }
  return 0;
}


