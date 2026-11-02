/* Module: vegas30.exe
   Function: FUN_005f55b0
   Address: 005f55b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005f55b0(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_00646dfc;
  uVar1 = DAT_00646df8;
  bVar3 = 0xfffffffe < DAT_00646df8;
  DAT_00646df8 = DAT_00646df8 + 1;
  DAT_00646dfc = DAT_00646dfc + (uint)bVar3;
  return CONCAT44(iVar2,uVar1);
}


