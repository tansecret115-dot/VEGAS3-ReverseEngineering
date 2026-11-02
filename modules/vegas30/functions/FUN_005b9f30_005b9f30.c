/* Module: vegas30.exe
   Function: FUN_005b9f30
   Address: 005b9f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b9f30(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_005b87b0(param_1);
  iVar3 = 0;
  if (0 < *piVar1) {
    piVar4 = (int *)piVar1[2];
    do {
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 4) == param_2) {
        switch(param_2) {
        case 2:
          if (param_4 == 0) {
            iVar2 = *(int *)(iVar2 + 0x44);
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x3c);
          }
          break;
        case 3:
        case 4:
          if (param_4 == 0) {
LAB_005b9f87:
            iVar2 = *(int *)(iVar2 + 0x40);
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x3c);
          }
          break;
        case 5:
          if (param_4 == 0) goto LAB_005b9f87;
          iVar2 = *(int *)(iVar2 + 0x3c);
          break;
        default:
          goto switchD_005b9f60_default;
        }
        if (param_3 == iVar2) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *piVar1);
  }
switchD_005b9f60_default:
  return 0;
}


