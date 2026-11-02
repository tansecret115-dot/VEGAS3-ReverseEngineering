/* Module: vegas30.exe
   Function: FUN_004e2800
   Address: 004e2800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e2800(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = DAT_0064b138;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd50) != 0) {
      FUN_005b83b0(DAT_0064b138,1);
      FUN_005f0fb0();
      FUN_005b84d0(uVar3,1);
    }
    FUN_004e28d0(param_1);
    iVar4 = *(int *)(param_1 + 0xb74);
    uVar1 = *(uint *)(param_1 + 0xb70);
    if ((iVar4 < 1) && (iVar4 < 0)) {
      iVar6 = 0;
      uVar7 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x604);
      iVar6 = iVar4;
      uVar7 = uVar1;
      if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (*(uint *)(param_1 + 0x600) < uVar1)))) {
        iVar6 = iVar2;
        uVar7 = *(uint *)(param_1 + 0x600);
      }
    }
    uVar5 = *(uint *)(param_1 + 0xb78) + uVar1;
    iVar4 = *(int *)(param_1 + 0xb7c) + iVar4 + (uint)CARRY4(*(uint *)(param_1 + 0xb78),uVar1);
    if ((iVar4 < 1) && (iVar4 < 0)) {
      iVar4 = 0;
      uVar5 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x604);
      if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (*(uint *)(param_1 + 0x600) < uVar5)))) {
        iVar4 = iVar2;
        uVar5 = *(uint *)(param_1 + 0x600);
      }
    }
    FUN_00453340(param_1,uVar7,iVar6,uVar5 - uVar7,(iVar4 - iVar6) - (uint)(uVar5 < uVar7),0);
  }
  return;
}


