/* Module: rmbe3260.dll
   Function: FUN_6604ff60
   Address: 6604ff60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6604ff60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _close(*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if (iVar1 < 0) {
    piVar2 = _errno();
    *(int *)(param_1 + 8) = *piVar2;
  }
  return iVar1;
}


