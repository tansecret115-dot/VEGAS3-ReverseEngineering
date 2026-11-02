/* Module: qt4plug.dll
   Function: FUN_5f512910
   Address: 5f512910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f512910(uint param_1,int param_2,uint *param_3,LPWSTR param_4,int param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpMultiByteStr;
  uint uVar4;
  uint uVar5;
  undefined4 local_3c;
  uint uStack_38;
  int iStack_10;
  
  local_3c = 1;
  if (param_2 == 0x73636f6d) {
    iVar2 = FUN_5f5782f0();
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_5f5782f0();
    if (iVar2 == 0) {
      return 1;
    }
    sVar1 = FUN_5f5781b0();
    if (sVar1 != 0) {
      return 1;
    }
    uVar3 = param_1 & 0xff0000 | param_1 >> 0x10;
    uVar5 = param_1 & 0xff00;
    uVar4 = param_1 << 0x10;
  }
  else {
    iVar2 = FUN_5f5782f0();
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_5f5782f0();
    if (iVar2 == 0) {
      return 1;
    }
    sVar1 = FUN_5f5781b0();
    if (sVar1 != 0) {
      return 1;
    }
    uVar3 = uStack_38 & 0xff0000 | uStack_38 >> 0x10;
    uVar5 = uStack_38 << 0x10;
    uVar4 = uStack_38 & 0xff00;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3 >> 8 | (uVar5 | uVar4) << 8;
  }
  if (param_4 == (LPWSTR)0x0) {
    local_3c = 0;
  }
  else {
    iVar2 = FUN_5f580580();
    if (iVar2 != 0) {
      FUN_5f57aed0();
      sVar1 = FUN_5f5805a0();
      if (sVar1 == 0) {
        if (iStack_10 == 0x736f7774) {
          lpMultiByteStr = FUN_5f527a90(DAT_5f5a4158,0x1ae);
        }
        else {
          lpMultiByteStr = (LPCSTR)FUN_5f57fcb0();
        }
        MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_4,param_5);
        param_4[param_5 + -1] = L'\0';
        local_3c = 0;
      }
      FUN_5f57b390();
      return local_3c;
    }
  }
  return local_3c;
}


