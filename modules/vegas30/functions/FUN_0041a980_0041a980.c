/* Module: vegas30.exe
   Function: FUN_0041a980
   Address: 0041a980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a980(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0041aa30(unaff_ESI,0,unaff_ESI + 0x1c0);
  FUN_0041a6d0(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x1bc) = unaff_EBX;
  FUN_00417720(unaff_ESI,0);
  FUN_00419ac0(unaff_ESI,0);
  FUN_0041a280(unaff_ESI,0);
  FUN_00419ac0(unaff_ESI,0);
  FUN_005b8630(*(undefined4 *)(unaff_ESI + 700));
  iVar1 = *(int *)(unaff_ESI + 0x8c);
  if (iVar1 == 4) {
    uVar5 = 0;
    uVar4 = *(undefined4 *)(unaff_ESI + 0x1bc);
    uVar3 = *(undefined4 *)(unaff_ESI + 0x88);
    uVar2 = 1;
  }
  else if (iVar1 == 3) {
    uVar5 = 0;
    uVar4 = *(undefined4 *)(unaff_ESI + 0x1bc);
    uVar3 = *(undefined4 *)(unaff_ESI + 0x88);
    uVar2 = 4;
  }
  else {
    if (iVar1 != 2) goto LAB_0041aa1d;
    uVar5 = *(undefined4 *)(unaff_ESI + 0x94);
    uVar4 = *(undefined4 *)(unaff_ESI + 0x1bc);
    uVar3 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  FUN_005b41d0(uVar2,uVar3,uVar4,uVar5);
LAB_0041aa1d:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


