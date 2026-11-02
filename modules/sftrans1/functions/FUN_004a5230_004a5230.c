/* Module: sftrans1.dll
   Function: FUN_004a5230
   Address: 004a5230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004a5230(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  
  uVar1 = param_3 & 0xffff;
  if (0x417 < uVar1) {
    if (uVar1 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3fc,0xf,0);
    }
    else if (uVar1 == 0xa029) {
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    return 0;
  }
  sVar3 = (short)(param_3 >> 0x10);
  if (uVar1 == 0x417) {
    if (sVar3 != 0x200) {
      return 0;
    }
    iVar2 = FUN_004a5160(param_4,param_1 + 0x16,0,0,0,0x3ff00000);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else if (uVar1 != 1000) {
    if (uVar1 != 0x416) {
      return 0;
    }
    if (sVar3 != 0x200) {
      return 0;
    }
    iVar2 = FUN_004a5160(param_4,param_1 + 0x14,0,0,0,0x40768000);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  FUN_004a5310();
  return 0;
}


