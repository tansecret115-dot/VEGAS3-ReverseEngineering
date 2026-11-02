/* Module: vegas30.exe
   Function: FUN_004bee90
   Address: 004bee90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bee90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((DAT_00647794 == 2) ||
     ((DAT_00647794 == 1 && (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0)))) {
    if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
      uVar8 = *(uint *)(param_1 + 0xb78);
      iVar4 = 0;
      iVar5 = 0;
      if (uVar8 != 0 || *(int *)(param_1 + 0xb7c) != 0) {
        uVar7 = *(uint *)(param_1 + 0xb70);
        iVar5 = *(int *)(param_1 + 0xb74);
        uVar6 = uVar7 + uVar8;
        iVar3 = iVar5 + *(int *)(param_1 + 0xb7c) + (uint)CARRY4(uVar7,uVar8);
        if ((iVar3 <= iVar5) && ((iVar3 < iVar5 || (uVar6 < uVar7)))) {
          iVar3 = iVar5;
          uVar6 = uVar7;
        }
        iVar4 = uVar6 - *(uint *)(param_1 + 0xb30);
        iVar5 = (iVar3 - *(int *)(param_1 + 0xb34)) - (uint)(uVar6 < *(uint *)(param_1 + 0xb30));
      }
      iVar5 = FUN_00453340(param_1,*(undefined4 *)(param_1 + 0xb30),*(undefined4 *)(param_1 + 0xb34)
                           ,iVar4,iVar5,0x60);
      return iVar5;
    }
    iVar5 = DAT_00647794;
    if (DAT_00647794 == 1) {
      iVar5 = *(int *)(param_1 + 0xb7c);
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          uVar1 = *(undefined4 *)(param_1 + 0xb74);
          uVar2 = *(undefined4 *)(param_1 + 0xb70);
          FUN_00453340(param_1,uVar2,uVar1,0,0,0x60);
          iVar5 = FUN_00454140(param_1,uVar2,uVar1,0,0);
        }
        else {
          iVar5 = *(int *)(param_1 + 0xb78);
        }
      }
    }
    return iVar5;
  }
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar8 = *(uint *)(param_1 + 0xb70);
    iVar5 = *(int *)(param_1 + 0xb74);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xb30);
    iVar5 = *(int *)(param_1 + 0xb34);
  }
  uVar7 = *(uint *)(param_1 + 0xb50);
  iVar4 = *(int *)(param_1 + 0xb54);
  uVar6 = *(uint *)(param_1 + 0xb48) + uVar7;
  iVar3 = *(int *)(param_1 + 0xb4c) + iVar4 + (uint)CARRY4(*(uint *)(param_1 + 0xb48),uVar7);
  if ((iVar5 < iVar3) || ((iVar5 <= iVar3 && (uVar8 <= uVar6)))) {
    uVar7 = uVar6 - uVar8;
    iVar4 = (iVar3 - iVar5) - (uint)(uVar6 < uVar8);
  }
  if ((iVar4 < 1) && (iVar4 < 0)) {
    iVar5 = FUN_00454140(param_1,uVar8,iVar5,0,0);
    return iVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x600) - uVar8;
  iVar3 = (*(int *)(param_1 + 0x604) - iVar5) - (uint)(*(uint *)(param_1 + 0x600) < uVar8);
  if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (uVar6 < uVar7)))) {
    iVar4 = iVar3;
    uVar7 = uVar6;
  }
  iVar5 = FUN_00454140(param_1,uVar8,iVar5,uVar7,iVar4);
  return iVar5;
}


