/* Module: sfcdi.dll
   Function: FUN_5bf2bc20
   Address: 5bf2bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


byte FUN_5bf2bc20(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar2 = 0;
  bVar1 = false;
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = FUN_5bf2bb90(param_1);
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 != 0) {
    do {
      iVar4 = FUN_5bf2bbb0(param_1,uVar5);
      if ((*(uint *)(iVar4 + 8) & 4) == 0) {
        bVar1 = true;
      }
      else {
        bVar2 = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (bVar1) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


