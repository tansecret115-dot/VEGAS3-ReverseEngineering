/* Module: sftrans1.dll
   Function: FUN_00530a00
   Address: 00530a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530a00(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  uint local_4;
  
  FUN_005371a0(&local_8);
  iVar1 = FUN_00530a60(&local_4);
  if (iVar1 < 0) {
    return 0x80070005;
  }
  if (local_8 < local_4) {
    return 0;
  }
  uVar2 = FUN_00534170(0,&DAT_0056dbc8,4,&local_8,4,1,1);
  return uVar2;
}


