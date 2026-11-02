/* Module: vegas30.exe
   Function: FUN_004abe00
   Address: 004abe00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004abe00(int param_1,undefined4 param_2,uint param_3,int param_4,int *param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar6 = param_3;
  uVar1 = param_2;
  iVar3 = FUN_005b8900(param_2,param_3);
  iVar4 = FUN_005b87c0(uVar6);
  if (iVar3 < iVar4) {
    FUN_005b83b0(uVar1,1);
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    piVar2 = param_5;
    iVar3 = param_4;
    if (*piVar7 < param_4) {
      iVar3 = *piVar7;
    }
    iVar3 = FUN_005ce780(param_5,uVar1,uVar6,iVar3,0);
    if (-1 < iVar3) {
      if (param_1 != 0) {
        FUN_004cb540(param_1,*(undefined4 *)(*piVar2 + 0x18),0,1);
      }
      FUN_004e9f70(uVar1,0xf,"DDSMakeDropTrack");
      FUN_004ea250(uVar1,*piVar2,0xb,1);
      FUN_004eb2b0(uVar1);
      FUN_004ea040(uVar1,0);
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)(*piVar2 + 0x18);
      }
    }
    FUN_005b84d0(uVar1,1);
    return iVar3;
  }
  if (DAT_0064b4e4 == 0) {
    iVar3 = FUN_00601ab0(&param_2,&param_3,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar5 = (param_3 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar5) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = param_2;
        DAT_0064b4e4 = uVar5;
      }
    }
  }
  if (((int)DAT_0064b4e4 < 0x21) || (iVar3 = FUN_004b1160(1), iVar3 < 0x21)) {
    if (uVar6 == 2) {
      if (DAT_0064b578 == 0) {
        return -0x7ffb1fec;
      }
      if (DAT_0064b4e4 == 0) {
        iVar3 = FUN_00601ab0(&param_2,&param_3,1);
        if (iVar3 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar6 = (param_3 & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar6) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = param_2;
            DAT_0064b4e4 = uVar6;
          }
        }
      }
    }
    else {
      if (uVar6 != 3) {
        return -0x7ffb1fec;
      }
      if (DAT_0064b578 == 0) {
        return -0x7ffb1fec;
      }
      if (DAT_0064b4e4 == 0) {
        iVar3 = FUN_00601ab0(&param_2,&param_3,1);
        if (iVar3 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar6 = (param_3 & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar6) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = param_2;
            DAT_0064b4e4 = uVar6;
          }
        }
      }
    }
    FUN_0057a990(DAT_00647624,0x12);
  }
  return -0x7ffb1fec;
}


