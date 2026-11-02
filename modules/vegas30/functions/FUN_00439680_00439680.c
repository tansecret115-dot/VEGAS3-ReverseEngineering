/* Module: vegas30.exe
   Function: FUN_00439680
   Address: 00439680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439680(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0064762c + 0xac);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    FUN_00411fd0(iVar1,3000);
  }
  return;
}


