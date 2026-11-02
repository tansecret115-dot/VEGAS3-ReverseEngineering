/* Module: vidcap30.exe
   Function: FUN_00444600
   Address: 00444600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444600(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0042e510(param_1);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00443740(param_1,iVar5);
      iVar3 = FUN_00443780(uVar2);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = FUN_004437e0(uVar2,iVar6);
          if ((*(int *)(iVar4 + 8) == param_2) && (*(int *)(iVar4 + 0xc) == param_3)) {
            return iVar4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 0;
}


