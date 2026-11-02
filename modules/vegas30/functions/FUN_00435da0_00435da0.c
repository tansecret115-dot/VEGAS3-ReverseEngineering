/* Module: vegas30.exe
   Function: FUN_00435da0
   Address: 00435da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00435da0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  FUN_00435ea0(&local_8,&local_10);
  iVar5 = 0;
  FUN_004e9f70(param_1,0x14,0);
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    piVar4 = (int *)FUN_005b87b0(param_1);
    if (piVar4 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *piVar4;
    }
    iVar3 = param_1;
    if (0 < param_1) {
      do {
        iVar1 = *(int *)(piVar4[2] + iVar5 * 4);
        if ((*(byte *)(iVar1 + 0x10) & 0x10) != 0) {
          FUN_004ea250(uVar2,iVar1,1,0);
          iVar3 = FUN_005c9e30(0,uVar2,iVar1,local_8,local_4,local_10,local_c);
          if (iVar3 < 0) goto LAB_00435e74;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
  }
  else {
    FUN_004ea250(param_1,param_2,1,0);
    iVar3 = FUN_005c9e30(0,param_1,param_2,local_8,local_4,local_10,local_c);
  }
  if (-1 < iVar3) {
    FUN_004eb2b0(uVar2);
  }
LAB_00435e74:
  FUN_004ea040(uVar2,0);
  FUN_00456c20(DAT_00647630);
  return iVar3;
}


