/* Module: rmbe3260.dll
   Function: FUN_660591d0
   Address: 660591d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660591d0(int param_1,uint param_2,ushort param_3,short param_4,undefined4 param_5,
                ushort param_6,short param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = FUN_66059910(param_2,(undefined4 *)(param_1 + 8));
  if (iVar2 == 0) {
    return -0x7ffbfdbc;
  }
  *(undefined4 *)(param_1 + 0xc) = param_5;
  if ((((param_3 == 0) || (2 < param_3)) || (param_6 == 0)) || (2 < param_6)) {
    iVar2 = -0x7ffbfdbe;
  }
  else {
    if ((param_3 == 1) && (param_6 == 2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(ushort *)(param_1 + 0x10) = param_3;
    *(ushort *)(param_1 + 0x12) = param_6;
    if ((param_4 != 8) && (param_4 != 0x10)) {
      return -0x7ffbfdbd;
    }
    *(short *)(param_1 + 0x14) = param_4;
    if (param_7 != 0x10) {
      return -0x7ffbfdbd;
    }
    *(undefined2 *)(param_1 + 0x16) = 0x10;
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
      return iVar2;
    }
  }
  return iVar2;
}


