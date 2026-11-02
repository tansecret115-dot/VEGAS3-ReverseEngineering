/* Module: sfconfigmgr.dll
   Function: FUN_00403610
   Address: 00403610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403610(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c660((int *)(param_1 + 8),4,-1,-1,0x40000002);
  if (-1 < iVar1) {
    FUN_0040c660((int *)(param_1 + 0xc),4,-1,-1,0x40000002);
  }
  return;
}


