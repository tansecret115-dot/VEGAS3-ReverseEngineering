/* Module: 50comupd.exe
   Function: FUN_01001b20
   Address: 01001b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001b20(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((DAT_0100b824 == 0) &&
     (bVar1 = FUN_01002223(DAT_0100bc08,DAT_0100bc04), CONCAT31(extraout_var,bVar1) == 0)) {
    return 0xffffffff;
  }
  return 2;
}


