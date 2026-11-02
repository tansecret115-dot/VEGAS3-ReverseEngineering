/* Module: sftrans1.dll
   Function: FUN_004a6fb0
   Address: 004a6fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004a6fb0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  int *piVar2;
  UINT UVar3;
  int iVar4;
  short sVar5;
  
  uVar1 = param_3 & 0xffff;
  if (0xd1 < uVar1) {
    if (uVar1 == 1000) {
      FUN_004a69e0();
      *param_5 = 1;
      return 0;
    }
    if (uVar1 != 41000) {
      if (uVar1 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    FUN_004c5940(1,param_1[0xc],0x3ff,0xf,0);
    return 0;
  }
  sVar5 = (short)(param_3 >> 0x10);
  if (uVar1 == 0xd1) {
    if (sVar5 != 0x200) {
      return 0;
    }
    iVar4 = FUN_004a6880(param_4,param_1 + 0x20,0,0,0,0x3ff00000);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    goto LAB_004a70ac;
  }
  switch(uVar1) {
  case 0xc9:
    if (sVar5 == 0) {
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0xc9);
      if (-(uint)(UVar3 != 1) + 1 != (uint)(param_1[0x1a] == 0)) {
        param_1[0x1a] = (uint)(-(uint)(UVar3 != 1) == -1);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      goto LAB_004a70ac;
    }
    break;
  case 0xcb:
    if (sVar5 == 0) {
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0xcb);
      if ((uint)(UVar3 == 1) != param_1[0x1a]) {
        param_1[0x1a] = (uint)(UVar3 == 1);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      FUN_004a69e0();
      return 0;
    }
    break;
  case 0xcf:
    if (sVar5 != 0x200) {
      return 0;
    }
    piVar2 = param_1 + 0x1c;
    goto LAB_004a701e;
  case 0xd0:
    if (sVar5 != 0x200) {
      return 0;
    }
    piVar2 = param_1 + 0x1e;
LAB_004a701e:
    iVar4 = FUN_004a6880(param_4,piVar2,0,0,0,0x3ff00000);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
LAB_004a70ac:
    FUN_004a69e0();
    return 0;
  }
  return 0;
}


