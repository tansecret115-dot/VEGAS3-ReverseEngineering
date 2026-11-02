/* Module: vegas30.exe
   Function: FUN_00422f00
   Address: 00422f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422f00(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_0040c050(200);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x248) != 0) {
    return;
  }
  FUN_005b8630(*(undefined4 *)(iVar2 + 700));
  iVar1 = *(int *)(iVar2 + 0x8c);
  if (iVar1 == 4) {
    uVar7 = *(undefined4 *)(iVar2 + 0x80);
    uVar5 = *(undefined4 *)(iVar2 + 0x1bc);
    uVar4 = *(undefined4 *)(iVar2 + 0x88);
    uVar6 = 0;
    uVar3 = 1;
  }
  else if (iVar1 == 3) {
    uVar7 = *(undefined4 *)(iVar2 + 0x80);
    uVar5 = *(undefined4 *)(iVar2 + 0x1bc);
    uVar4 = *(undefined4 *)(iVar2 + 0x88);
    uVar6 = 0;
    uVar3 = 4;
  }
  else {
    if (iVar1 != 2) goto LAB_00422f9e;
    uVar7 = *(undefined4 *)(iVar2 + 0x80);
    uVar6 = *(undefined4 *)(iVar2 + 0x94);
    uVar5 = *(undefined4 *)(iVar2 + 0x1bc);
    uVar4 = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  iVar2 = FUN_005b4320(uVar3,uVar4,uVar5,uVar6,uVar7);
  if (iVar2 != 0) {
    return;
  }
LAB_00422f9e:
  FUN_00401160();
  return;
}


