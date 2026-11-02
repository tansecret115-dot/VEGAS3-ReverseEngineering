/* Module: vegas30.exe
   Function: FUN_004bf020
   Address: 004bf020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bf020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((DAT_00647794 == 2) ||
     ((DAT_00647794 == 1 && (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0)))) {
    if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
      uVar7 = *(uint *)(param_1 + 0xb70);
      FUN_00453340(param_1,uVar7,*(int *)(param_1 + 0xb74),*(uint *)(param_1 + 0xb30) - uVar7,
                   (*(int *)(param_1 + 0xb34) - *(int *)(param_1 + 0xb74)) -
                   (uint)(*(uint *)(param_1 + 0xb30) < uVar7),0x21);
      return;
    }
    if (((DAT_00647794 == 1) && (-1 < *(int *)(param_1 + 0xb7c))) &&
       ((0 < *(int *)(param_1 + 0xb7c) || (*(int *)(param_1 + 0xb78) != 0)))) {
      uVar2 = *(undefined4 *)(param_1 + 0xb74);
      uVar3 = *(undefined4 *)(param_1 + 0xb70);
      FUN_00453340(param_1,uVar3,uVar2,0,0,0x60);
      FUN_00454140(param_1,uVar3,uVar2,0,0);
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar7 = *(uint *)(param_1 + 0xb70);
    iVar6 = *(int *)(param_1 + 0xb74);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xb30);
    iVar6 = *(int *)(param_1 + 0xb34);
  }
  iVar4 = *(int *)(param_1 + 0xb4c);
  uVar5 = *(uint *)(param_1 + 0xb48);
  if ((iVar6 <= iVar4) && ((iVar6 < iVar4 || (uVar7 < uVar5)))) {
    uVar5 = uVar7 - *(uint *)(param_1 + 0xb50);
    iVar4 = (iVar6 - *(int *)(param_1 + 0xb54)) - (uint)(uVar7 < *(uint *)(param_1 + 0xb50));
  }
  if ((iVar4 < 1) && (iVar4 < 0)) {
    FUN_00454140(param_1,0,0,uVar7,iVar6);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x604);
  if ((iVar1 <= iVar4) && ((iVar1 < iVar4 || (*(uint *)(param_1 + 0x600) < uVar5)))) {
    iVar4 = iVar1;
    uVar5 = *(uint *)(param_1 + 0x600);
  }
  FUN_00454140(param_1,uVar5,iVar4,uVar7 - uVar5,(iVar6 - iVar4) - (uint)(uVar7 < uVar5));
  return;
}


