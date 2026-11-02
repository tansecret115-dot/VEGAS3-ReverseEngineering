/* Module: vegas30.exe
   Function: FUN_004353f0
   Address: 004353f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004353f0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = param_1;
  iVar4 = 0;
  FUN_004e9f70(param_1,0x54,0);
  if ((*(uint *)(param_2 + 0x634) & 1) != param_3) {
    FUN_004ea250(param_1,param_2,0xe,0);
    FUN_005caff0(param_2,param_3);
  }
  if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    if (piVar3 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *piVar3;
    }
    if (0 < param_1) {
      do {
        iVar1 = *(int *)(piVar3[2] + iVar4 * 4);
        if (((((*(byte *)(iVar1 + 0x10) & 0x10) != 0) && (*(int *)(iVar1 + 4) == 2)) &&
            (iVar1 != param_2)) && ((*(uint *)(iVar1 + 0x634) & 1) != param_3)) {
          FUN_004ea250(uVar2,iVar1,0xe,0);
          FUN_005caff0(iVar1,param_3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
  }
  FUN_004eb2b0(uVar2);
  FUN_004ea040(uVar2,0);
  return;
}


