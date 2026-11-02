/* Module: sfpagepeel.dll
   Function: FUN_00430f60
   Address: 00430f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430f60(void)

{
  int iVar1;
  
  iVar1 = FUN_00431090();
  if (iVar1 != 0) {
    PTR_FUN_0047cff0 = FUN_00430f20;
    PTR_LAB_0047cff4 = FUN_00430fb0;
    PTR_FUN_0047cff8 = FUN_00430fe0;
    PTR_FUN_0047cffc = FUN_00430f40;
    PTR_FUN_0047d000 = FUN_00431010;
    PTR_FUN_0047d004 = FUN_00431050;
    DAT_0047cfe4 = 5;
  }
  return;
}


