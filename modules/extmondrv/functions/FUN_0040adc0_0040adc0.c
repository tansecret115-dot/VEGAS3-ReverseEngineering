/* Module: extmondrv.dll
   Function: FUN_0040adc0
   Address: 0040adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0040adc0(BYTE *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  void *local_4;
  
  bVar3 = true;
  local_4 = (void *)0x0;
  iVar1 = FUN_00410b00(&local_4,DAT_0045b008,0x45a0e8);
  if (-1 < iVar1) {
    uVar2 = FUN_00410550((int)local_4,0,param_1,0x14);
    bVar3 = -1 < (int)uVar2;
    FUN_00410ea0(local_4);
  }
  return bVar3;
}


