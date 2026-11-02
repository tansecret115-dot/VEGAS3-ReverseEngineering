/* Module: pngu3266.dll
   Function: FUN_6061d8e0
   Address: 6061d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061d8e0(int param_1,undefined4 param_2)

{
  if ((DAT_6064b43c == (int *)0x0) && (FUN_6061d7a0((char *)0x0), DAT_6064b43c == (int *)0x0)) {
    return;
  }
  (**(code **)(*DAT_6064b43c + 0xc))(DAT_6064b43c,param_1,param_2);
  if (DAT_6064b438 == 0) {
    DAT_6064b438 = param_1;
  }
  return;
}


