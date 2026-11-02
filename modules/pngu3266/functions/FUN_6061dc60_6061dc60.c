/* Module: pngu3266.dll
   Function: FUN_6061dc60
   Address: 6061dc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061dc60(undefined4 param_1,undefined4 param_2)

{
  if (DAT_6064b43c == (int *)0x0) {
    FUN_6061d7a0((char *)0x0);
    if (DAT_6064b43c == (int *)0x0) {
      return;
    }
  }
  (**(code **)(*DAT_6064b43c + 0x44))(DAT_6064b43c,param_1,param_2);
  return;
}


