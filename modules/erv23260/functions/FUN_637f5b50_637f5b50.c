/* Module: erv23260.dll
   Function: FUN_637f5b50
   Address: 637f5b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f5b50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *local_14;
  int local_10;
  
  iVar6 = 0;
  iVar5 = 0;
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    piVar1 = (int *)(param_1 + 0x40);
    piVar2 = piVar1;
    piVar4 = piVar1;
    local_14 = piVar1;
    do {
      iVar8 = 0;
      piVar7 = piVar1;
      if (0 < iVar5) {
        do {
          iVar3 = FUN_637f5bf0(*piVar2,piVar2[1],*piVar7,piVar7[1]);
          piVar4 = local_14;
          iVar6 = local_10;
          if (iVar3 != 0) break;
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 2;
        } while (iVar8 < iVar5);
      }
      if (iVar8 == iVar5) {
        if (iVar6 < iVar5) {
          *piVar4 = *piVar2;
          piVar4[1] = piVar2[1];
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 2;
        local_14 = piVar4;
        local_10 = iVar6;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  *(int *)(param_1 + 0x3c) = iVar6;
  return;
}


