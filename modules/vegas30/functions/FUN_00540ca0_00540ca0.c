/* Module: vegas30.exe
   Function: FUN_00540ca0
   Address: 00540ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00540ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    FUN_005b83b0(param_1,1);
    iVar3 = DAT_00649e34;
    piVar4 = (int *)FUN_005b89a0(param_1);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = *(int *)(piVar4[2] + iVar1 * 4);
        if ((iVar3 == 0) || ((*(byte *)(iVar2 + 0x34) & 0x10) == 0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        if (iVar2 != 0) {
          FUN_005400b0(piVar4,iVar2,uVar5);
        }
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x228));
      *(undefined4 *)(param_1 + 0x228) = 0;
    }
    piVar4 = (int *)FUN_0053f8e0(param_1);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = *(int *)(piVar4[2] + iVar1 * 4);
        if ((iVar3 == 0) || ((*(byte *)(iVar2 + 0x34) & 0x10) == 0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        FUN_005400b0(piVar4,iVar2,uVar5);
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x22c));
      *(undefined4 *)(param_1 + 0x22c) = 0;
    }
    FUN_005b84d0(param_1,1);
  }
  return;
}


