/* Module: vegas30.exe
   Function: FUN_00584970
   Address: 00584970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00584970(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  uVar1 = *(uint *)(*(int *)(DAT_0065a054 + 4) + 0x14);
  FUN_005808d0();
  FUN_00584bb0(&local_2c);
  puVar4 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_10 = _SfLoadCursor_8(0,0x7f00);
  if (uVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = _SfLoadIcon_8(*(undefined4 *)(DAT_0065a054 + 0x10),uVar1 & 0xffff);
  }
  local_4 = local_2c;
  local_c = 0x10;
  local_18 = *(undefined4 *)(DAT_0065a054 + 8);
  local_28[0] = 8;
  uVar2 = FUN_00582960(local_28);
  FUN_00580a90();
  return uVar2;
}


