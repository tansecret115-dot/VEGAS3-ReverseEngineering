/* Module: rmbe3260.dll
   Function: FUN_6601d0f0
   Address: 6601d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601d0f0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  iVar1 = FUN_6603c0a0((undefined4 *)*param_1);
  iVar1 = FUN_660157a0(iVar1);
  if (-1 < iVar1) {
    *param_1 = 0;
  }
  return iVar1;
}


