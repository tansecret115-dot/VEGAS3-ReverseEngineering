/* Module: pngu3266.dll
   Function: FUN_6061da50
   Address: 6061da50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061da50(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_6064b43c == (int *)0x0) {
    FUN_6061d7a0((char *)0x0);
    if (DAT_6064b43c == (int *)0x0) {
      return 0;
    }
  }
  FUN_6061dbf0(param_1);
  uVar1 = (**(code **)(*DAT_6064b43c + 0x38))(DAT_6064b43c,param_1,param_2,param_3);
  return uVar1;
}


