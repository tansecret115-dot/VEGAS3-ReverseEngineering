/* Module: vegas30.exe
   Function: FUN_0046e4a0
   Address: 0046e4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046e4a0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = *param_2;
  if (iVar5 < 1) {
    return 1;
  }
  piVar4 = (int *)param_2[2];
  do {
    piVar1 = (int *)*piVar4;
    if ((*piVar1 == 0x31) && (iVar2 = piVar1[0x21], 0 < iVar2)) {
      piVar1 = piVar1 + 0x88;
      do {
        if ((*(int *)(*piVar1 + 0x18) != 0) &&
           ((*(uint *)(*(int *)(*piVar1 + 0x18) + 0x134) & 0x400) != 0)) {
          iVar3 = iVar3 + 1;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar3 != 0) {
    iVar5 = FUN_005016e0(*(undefined4 *)(param_1 + 4),param_3,DAT_0064a7b4);
    if (iVar5 != 0) {
      return 0;
    }
    DAT_0064a7b4 = *param_3;
  }
  return 1;
}


