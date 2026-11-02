/* Module: mcplugrw.dll
   Function: FUN_0047e210
   Address: 0047e210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e210(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x1ad);
  iVar1 = *(int *)(param_1 + 0x141);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x5d) << 3);
  *(int *)(iVar3 + 0x35) = iVar2;
  iVar4 = 0;
  *(int *)(iVar3 + 0x39) = iVar2 + *(int *)(param_1 + 0x5d) * 4;
  if (0 < *(int *)(param_1 + 0x5d)) {
    piVar5 = (int *)(*(int *)(param_1 + 0xf6) + 0xc);
    do {
      iVar2 = (piVar5[6] * *piVar5) / *(int *)(param_1 + 0x141);
      iVar6 = (iVar1 + 4) * iVar2;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,iVar6 * 8);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)((int)piVar5 + 0x51);
      iVar3 = iVar3 + iVar2 * 4;
      *(int *)(*(int *)(unaff_EBP + 0x35) + -4 + iVar4 * 4) = iVar3;
      *(int *)(*(int *)(unaff_EBP + 0x39) + -4 + iVar4 * 4) = iVar3 + iVar6 * 4;
    } while (iVar4 < *(int *)(param_1 + 0x5d));
  }
  return;
}


