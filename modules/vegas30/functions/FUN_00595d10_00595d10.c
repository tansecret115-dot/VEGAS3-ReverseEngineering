/* Module: vegas30.exe
   Function: FUN_00595d10
   Address: 00595d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00595d10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x54) != 0) {
    puVar3 = &DAT_0065abf8;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    _DAT_0065ac00 = 2;
    uVar1 = FUN_00595c60(param_1,&DAT_0065abf8);
    FUN_005917e0(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),0);
  }
  return uVar1;
}


