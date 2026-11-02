/* Module: pngu3266.dll
   Function: FUN_6061daa0
   Address: 6061daa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061daa0(uint param_1)

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
  uVar2 = (**(code **)(*DAT_6064b43c + 0x28))(DAT_6064b43c,uVar1);
  return uVar2;
}


