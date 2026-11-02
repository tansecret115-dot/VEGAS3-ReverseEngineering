/* Module: pngu3266.dll
   Function: FUN_6061db60
   Address: 6061db60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061db60(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (DAT_6064b43c == (int *)0x0) {
    FUN_6061d7a0((char *)0x0);
    if (DAT_6064b43c == (int *)0x0) {
      return 0;
    }
  }
  uVar1 = FUN_6061dbf0(param_1);
  uVar2 = (**(code **)(*DAT_6064b43c + 0x34))(DAT_6064b43c,uVar1,param_2,param_3);
  return uVar2;
}


