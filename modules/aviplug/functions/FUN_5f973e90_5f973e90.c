/* Module: aviplug.dll
   Function: FUN_5f973e90
   Address: 5f973e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973e90(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_5f973fbe(100);
    iVar1 = iVar1 + 1;
    FUN_5f973fbe(100);
  } while (iVar1 != 2);
  FUN_5f973fbe(0x44);
  FUN_5f973fbe(0x44);
  FUN_5f974104();
  return;
}


