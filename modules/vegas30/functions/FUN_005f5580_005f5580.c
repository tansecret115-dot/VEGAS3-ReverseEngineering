/* Module: vegas30.exe
   Function: FUN_005f5580
   Address: 005f5580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005f5580(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_00646e04;
  uVar1 = DAT_00646e00;
  bVar3 = 0xfffffffe < DAT_00646e00;
  DAT_00646e00 = DAT_00646e00 + 1;
  DAT_00646e04 = DAT_00646e04 + (uint)bVar3;
  return CONCAT44(iVar2,uVar1);
}


