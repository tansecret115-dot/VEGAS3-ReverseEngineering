/* Module: vegas30.exe
   Function: FUN_004a7930
   Address: 004a7930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a7930(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_8;
  int local_4;
  
  iVar5 = param_1;
  uVar1 = DAT_0064b138;
  uVar2 = FUN_005b8900(DAT_0064b138,param_1);
  uVar3 = FUN_005b87c0(iVar5);
  uVar6 = param_2;
  if (uVar2 < uVar3) {
    if (((iVar5 == 3) && (param_2 == 0xffffffff)) && (iVar4 = FUN_005ba570(uVar1), iVar4 != 0)) {
      uVar6 = 0;
    }
    iVar5 = FUN_005ce780(&param_2,uVar1,iVar5,uVar6,0);
    if ((-1 < iVar5) && (param_2 != 0)) {
      FUN_004e9f70(uVar1,0xf,0);
      FUN_004ea250(uVar1,param_2,0xb,0);
      FUN_004eb2b0(uVar1);
      FUN_004ea040(uVar1,0);
      FUN_004ca740(DAT_00647630,param_2);
      FUN_004cb540(DAT_00647630,*(undefined4 *)(param_2 + 0x18),0,1);
      return iVar5;
    }
    _SfErrorHandler_MsgBox_24(0,0x30,0x11,iVar5,0,0);
    return iVar5;
  }
  if (DAT_0064b4e4 == 0) {
    iVar4 = FUN_00601ab0(&param_1,&param_2,1);
    if (iVar4 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar6 = (param_2 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar6) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = param_1;
        DAT_0064b4e4 = uVar6;
      }
    }
  }
  if (0x20 < (int)DAT_0064b4e4) {
    if (DAT_0064b4e0 == 0) {
      iVar4 = FUN_00601ab0(&local_4,&local_8,1);
      if (iVar4 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_8 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e0 = local_8 & 0xff;
      }
    }
    if (0x20 < (int)DAT_0064b4e0) {
      return -0x7fffbffb;
    }
  }
  if (iVar5 == 2) {
    if (DAT_0064b578 != 0) {
      if (DAT_0064b4e4 == 0) {
        iVar5 = FUN_00601ab0(&param_1,&param_2,1);
        if (iVar5 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar6 = (param_2 & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar6) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = param_1;
            DAT_0064b4e4 = uVar6;
          }
        }
      }
      FUN_0057a990(DAT_00647624,0x12);
    }
  }
  else if ((iVar5 == 3) && (DAT_0064b578 != 0)) {
    if (DAT_0064b4e4 == 0) {
      iVar5 = FUN_00601ab0(&param_1,&param_2,1);
      if (iVar5 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar6 = (param_2 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar6) {
          _DAT_0064b4f4 = param_1;
          DAT_0064b4f0 = 0;
          DAT_0064b4e4 = uVar6;
          FUN_0057a990(DAT_00647624,0x12);
          return 0;
        }
      }
    }
    FUN_0057a990(DAT_00647624,0x12);
    return 0;
  }
  return 0;
}


