/* Module: vegas30.exe
   Function: FUN_004a7830
   Address: 004a7830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a7830(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  if (param_2 != (int *)0x0) {
    iVar7 = *param_2;
    FUN_004e9f70(uVar1,0x2f,0);
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      piVar2 = *(int **)(param_1 + 0xcd0);
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar2[2] + iVar7 * 4);
      }
      if (iVar5 == 0) {
        return;
      }
      iVar3 = FUN_005c6950(iVar5);
      uVar4 = FUN_005c68e0(iVar5);
      if (1 < uVar4) {
        FUN_004ea750(uVar1,iVar5,2,0);
        FUN_004eb2b0(uVar1);
        if (param_3 == 0) {
          uVar6 = iVar3 - 1;
        }
        else {
          uVar6 = (iVar3 + 1U) % uVar4;
        }
        if ((int)uVar6 < 0) {
          uVar6 = uVar4 - 1;
        }
        FUN_005c86c0(uVar1,iVar5,uVar6);
      }
    }
    FUN_004ea040(uVar1,0);
  }
  return;
}


