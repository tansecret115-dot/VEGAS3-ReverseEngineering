/* Module: vegas30.exe
   Function: FUN_00428c20
   Address: 00428c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00428c20(void)

{
  int iVar1;
  
  if (((DAT_0064762c == 0) || (*(int *)(DAT_0064762c + 0x80) == 0)) ||
     (iVar1 = *(int *)(*(int *)(DAT_0064762c + 0x80) + 0x90), iVar1 < -1)) {
    iVar1 = -1;
  }
  return iVar1;
}


