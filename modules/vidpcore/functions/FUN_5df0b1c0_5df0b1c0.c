/* Module: vidpcore.dll
   Function: FUN_5df0b1c0
   Address: 5df0b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df0b1c0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  uint local_4;
  
  FUN_5df11990(&local_8);
  iVar1 = FUN_5df0b220(&local_4);
  if (iVar1 < 0) {
    return 0x80070005;
  }
  if (local_8 < local_4) {
    return 0;
  }
  uVar2 = FUN_5df0e930(0,&DAT_5df37508,4,&local_8,4,1,1);
  return uVar2;
}


