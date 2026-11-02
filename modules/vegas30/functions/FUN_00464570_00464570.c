/* Module: vegas30.exe
   Function: FUN_00464570
   Address: 00464570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00464570(undefined4 param_1,double param_2)

{
  byte local_28;
  undefined1 local_27;
  byte bStack_26;
  undefined1 local_20 [8];
  double local_18;
  
  bStack_26 = (byte)param_1;
  local_27 = (undefined1)((uint)param_1 >> 8);
  local_28 = (byte)((uint)param_1 >> 0x10);
  _SFRGBA_To_SFHSL_8(local_20,&local_28);
  local_18 = local_18 * param_2;
  _SFHSL_To_SFRGBA_8(&local_28,local_20);
  return ((uint)local_28 << 8 | CONCAT11(bStack_26,local_27) & 0xff) << 8 | (uint)bStack_26;
}


