/* Module: sfppack3.dll
   Function: FUN_5cc81200
   Address: 5cc81200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc81200(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5cc9eb98 != 0) {
    return DAT_5cc9eb94;
  }
  FUN_5cc81270(&local_4);
  uVar1 = FUN_5cc80550(local_4,0);
  DAT_5cc9eb94 = FUN_5cc80590(0,uVar1);
  DAT_5cc9eb98 = 1;
  return DAT_5cc9eb94;
}


