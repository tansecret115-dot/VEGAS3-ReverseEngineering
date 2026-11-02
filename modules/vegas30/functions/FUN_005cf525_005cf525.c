/* Module: vegas30.exe
   Function: FUN_005cf525
   Address: 005cf525
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cf525(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  undefined4 unaff_EDI;
  
  iVar1 = FUN_005c68e0(unaff_EDI);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_005c6910(unaff_EDI,iVar3);
      if ((*(int *)(iVar2 + 0x18) != 0) &&
         ((*(uint *)(*(int *)(iVar2 + 0x18) + 0x134) & 0x400) != 0)) {
        unaff_EBP = unaff_EBP + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return unaff_EBP;
}


