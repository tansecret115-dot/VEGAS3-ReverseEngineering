/* Module: pngu3266.dll
   Function: FUN_6061d950
   Address: 6061d950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061d950(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_6064b43c != (int *)0x0) {
    if (DAT_6064b438 != 0) {
      (**(code **)(*DAT_6064b43c + 0x14))(DAT_6064b43c,DAT_6064b438);
      DAT_6064b438 = 0;
    }
    iVar2 = (**(code **)(*DAT_6064b43c + 8))(DAT_6064b43c);
    if ((iVar2 == 0) && (DAT_6064b434 != (undefined4 *)0x0)) {
      FUN_60623080(DAT_6064b434);
    }
    puVar1 = DAT_6064b434;
    DAT_6064b43c = (int *)0x0;
    if (DAT_6064b434 != (undefined4 *)0x0) {
      FUN_60622ec0(DAT_6064b434);
      operator_delete(puVar1);
      DAT_6064b434 = (undefined4 *)0x0;
    }
  }
  return;
}


