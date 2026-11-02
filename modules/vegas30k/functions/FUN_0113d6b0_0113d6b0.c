/* Module: vegas30k.dll
   Function: FUN_0113d6b0
   Address: 0113d6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_0113d6b0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_EBP;
  int *piVar5;
  int *piVar6;
  int *piStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  
  piVar1 = param_2;
  if (*(int *)(param_1 + 0x128) == 0) {
LAB_0113d6fc:
    if (*(int *)(param_1 + 0x16c) != 0) {
      uStack_1c = *(undefined4 *)(param_1 + 0x170);
      piStack_20 = param_2;
      piStack_24 = (int *)0x113d71e;
      piVar1 = (int *)FUN_0113b500();
      goto LAB_0113d72c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x16c) == 0) {
      uStack_1c = 0;
      piStack_20 = param_2;
      piStack_24 = (int *)0x113d6f4;
      piVar1 = (int *)FUN_0113b500();
      goto LAB_0113d72c;
    }
    if (*(int *)(param_1 + 0x128) == 0) goto LAB_0113d6fc;
  }
  uStack_1c = 0x113d72c;
  (**(code **)(*param_2 + 4))();
LAB_0113d72c:
  piVar6 = *(int **)(param_1 + 0x13c);
  uStack_1c = 0;
  piStack_20 = (int *)0x0;
  piStack_24 = (int *)0x0;
  (**(code **)(*piVar6 + 0x1c))(piVar6,&param_2);
  (**(code **)(*unaff_EBP + 0xc))();
  piStack_24 = (int *)0x0;
  (**(code **)(*piVar1 + 0xc))(piVar1,&piStack_24);
  uVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
  piVar5 = (int *)&stack0xffffffe8;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)piVar6 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar6 = (int *)((int)piVar6 + 1);
  }
  (**(code **)(*piStack_24 + 0x30))(piStack_24,uVar2);
  iVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1);
  if (iVar3 == 0) {
    (*pcRam00000040)(&stack0xffffffe8,1);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  if (*(int *)(param_1 + 0x160) == 0) {
    FUN_0103cfc0(unaff_EBP);
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    return;
  }
  FUN_0113bd30(*(int *)(param_1 + 0x160),unaff_EBP);
  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  return;
}


