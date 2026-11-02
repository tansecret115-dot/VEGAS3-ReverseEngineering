/* Module: pngu3266.dll
   Function: FUN_6061d9d0
   Address: 6061d9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061d9d0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (DAT_6064b43c == (int *)0x0) {
    FUN_6061d7a0((char *)0x0);
    bVar3 = DAT_6064b43c == (int *)0x0;
  }
  if (bVar3) {
    return 0;
  }
  uVar1 = FUN_6061dbf0(param_1);
  uVar2 = (**(code **)(*DAT_6064b43c + 0x1c))(DAT_6064b43c,uVar1);
  return uVar2;
}


