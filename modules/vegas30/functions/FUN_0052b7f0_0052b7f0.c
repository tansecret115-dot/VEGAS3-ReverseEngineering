/* Module: vegas30.exe
   Function: FUN_0052b7f0
   Address: 0052b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052b7f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar3 = param_1;
  iVar6 = 1;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    iVar6 = FUN_0047c7d0(param_2 + 0x638,param_3);
    if (iVar6 == 0) {
      return 1;
    }
    FUN_004e9f70(param_1,0x4c,0);
    FUN_004ea250(param_1,param_2,0xf,0);
    FUN_005b83b0(param_1,1);
    iVar6 = FUN_0047c810(param_2 + 0x638,param_3);
    FUN_005b84d0(param_1,1);
    if (-1 < iVar6) {
      FUN_004eb2b0(param_1);
    }
    FUN_004ea040(param_1,0);
    (**(code **)(*DAT_0064b144 + 0xd4))
              (DAT_0064b144,1,*(undefined4 *)(param_2 + 0x44),0,0,0xffffffff,0xffffffff);
    return iVar6;
  }
  piVar4 = (int *)FUN_005b87b0(param_1);
  if ((piVar4 == (int *)0x0) || (iVar1 = *piVar4, iVar1 < 1)) {
    return 1;
  }
  FUN_004e9f70(param_1,0x4d,0);
  param_1 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar4[2] + param_1 * 4);
      if ((*(byte *)(iVar2 + 0x10) & 0x10) != 0) {
        iVar5 = FUN_0047c7d0(iVar2 + 0x638,param_3);
        if (iVar5 != 0) {
          FUN_004ea250(uVar3,iVar2,0xf,0);
          FUN_005b83b0(uVar3,1);
          iVar6 = FUN_0047c810(iVar2 + 0x638,param_3);
          FUN_005b84d0(uVar3,1);
          if (iVar2 == 0) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(iVar2 + 0x44);
          }
          (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,uVar7,0,0,0xffffffff,0xffffffff);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
    if (iVar6 < 0) goto LAB_0052b96c;
  }
  FUN_004eb2b0(uVar3);
LAB_0052b96c:
  FUN_004ea040(uVar3,0);
  return iVar6;
}


