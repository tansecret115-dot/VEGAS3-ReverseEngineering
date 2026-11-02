/* Module: vegas30.exe
   Function: FUN_0050af10
   Address: 0050af10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050af46) */

longlong FUN_0050af10(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x1000) != 0) {
    lVar1 = FUN_004a0e90(DAT_00647630);
    if (lVar1 < 2) {
      lVar1 = 1;
    }
    return lVar1;
  }
  return *(longlong *)(*(int *)(param_1 + 0x90) + 0x20);
}


