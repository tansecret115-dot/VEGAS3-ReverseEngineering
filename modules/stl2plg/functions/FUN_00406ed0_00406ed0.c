/* Module: stl2plg.dll
   Function: FUN_00406ed0
   Address: 00406ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406ed0(void)

{
  if (DAT_00473544 != (int *)0x0) {
    (**(code **)(*DAT_00473544 + 8))(DAT_00473544);
    DAT_00473544 = (int *)0x0;
  }
  if (DAT_00473540 != (int *)0x0) {
    (**(code **)(*DAT_00473540 + 8))(DAT_00473540);
    DAT_00473540 = (int *)0x0;
  }
  return;
}


