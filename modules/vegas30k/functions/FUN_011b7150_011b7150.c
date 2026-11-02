/* Module: vegas30k.dll
   Function: FUN_011b7150
   Address: 011b7150
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_011b7150(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2;
  uVar1 = param_1;
  if ((param_2 & 1) != 0) {
    param_2 = 0;
    iVar3 = FUN_011c1950(&DAT_011d9a50,&param_2);
    if (iVar3 == 0) {
      param_1 = param_2;
      _SfList_InsertList_16(*(undefined4 *)(uVar1 + 0x10),0xffffffff,&param_1,1);
    }
  }
  if ((uVar2 & 2) != 0) {
    param_2 = 0;
    iVar3 = FUN_011c18e0(&DAT_011d9a50,&param_2);
    if (iVar3 == 0) {
      param_1 = param_2;
      _SfList_InsertList_16(*(undefined4 *)(uVar1 + 0x10),0xffffffff,&param_1,1);
    }
  }
  if ((uVar2 & 8) != 0) {
    param_2 = 0;
    iVar3 = FUN_011c1a30(&DAT_011d9a50,&param_2);
    if (iVar3 == 0) {
      param_1 = param_2;
      _SfList_InsertList_16(*(undefined4 *)(uVar1 + 0x10),0xffffffff,&param_1,1);
    }
  }
  if ((uVar2 & 0x10) != 0) {
    param_2 = 0;
    iVar3 = FUN_011c1aa0(&DAT_011d9a50,&param_2);
    if (iVar3 == 0) {
      param_1 = param_2;
      _SfList_InsertList_16(*(undefined4 *)(uVar1 + 0x10),0xffffffff,&param_1,1);
    }
  }
  if ((uVar2 & 4) != 0) {
    param_2 = 0;
    iVar3 = FUN_011c19c0(&DAT_011d9a50,&param_2);
    if (iVar3 == 0) {
      param_1 = param_2;
      _SfList_InsertList_16(*(undefined4 *)(uVar1 + 0x10),0xffffffff,&param_1,1);
    }
  }
  FUN_011b7030();
  if (*(int **)(uVar1 + 0x10) == (int *)0x0) {
    return true;
  }
  return **(int **)(uVar1 + 0x10) == 0;
}


