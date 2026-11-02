/* Module: erv23260.dll
   Function: FUN_6380ba3d
   Address: 6380ba3d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6380ba3d(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int iVar6;
  
  iVar5 = unaff_EBP + unaff_EDI * 2;
  iVar6 = unaff_EDI + unaff_EBP;
  iVar1 = unaff_ESI + unaff_EDI * 6;
  iVar4 = unaff_EDI * 3 + unaff_ESI;
  do {
    uVar2 = *(undefined8 *)(unaff_ESI + unaff_EBP);
    *(undefined8 *)(unaff_ESI + iVar6) = uVar2;
    *(undefined8 *)(unaff_ESI + iVar5) = uVar2;
    *(undefined8 *)(iVar4 + unaff_EBP) = uVar2;
    *(undefined8 *)(iVar4 + iVar6) = uVar2;
    *(undefined8 *)(iVar4 + iVar5) = uVar2;
    *(undefined8 *)(iVar1 + unaff_EBP) = uVar2;
    uVar3 = *(undefined4 *)(iVar1 + 0x10 + iVar6);
    *(undefined8 *)(iVar1 + iVar6) = uVar2;
    *(undefined8 *)(iVar1 + iVar5) = uVar2;
    iVar6 = iVar6 + 8;
    unaff_EBP = unaff_EBP + 8;
    iVar5 = iVar5 + 8;
  } while (unaff_EBP != 0);
  return uVar3;
}


