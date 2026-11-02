/* Module: sftrans1.dll
   Function: FUN_0049ba50
   Address: 0049ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0049ba50(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  uint uVar1;
  WPARAM wParam;
  LRESULT LVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = param_3 & 0xffff;
  if (uVar1 < 0x70f) {
    if (uVar1 == 0x70e) {
      FUN_0049cfc0(param_1 + 0x14,param_1 + 0x16,param_1 + 0x24,param_1 + 100);
      FUN_0049cfc0(param_1 + 0x18,param_1 + 0x16,param_1 + 0xa4,param_1 + 100);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    if (uVar1 < 0x70d) {
      if (uVar1 == 0x70c) {
        if (param_3 >> 0x10 != 0) {
          return 0;
        }
      }
      else if (uVar1 != 1000) {
        if (uVar1 != 0x708) {
          return 0;
        }
        wParam = SendMessageA(param_4,0x147,0,0);
        LVar2 = SendMessageA(param_4,0x150,wParam,0);
        param_1[0x20] = LVar2;
        FUN_0049bbd0();
        return 0;
      }
      FUN_0049bbd0();
      return 0;
    }
    if (uVar1 != 0x70d) {
      return 0;
    }
    piVar6 = param_1 + 0x24;
    piVar4 = param_1 + 0x14;
    FUN_0049cfc0(param_1 + 0x16,piVar4,param_1 + 100,piVar6);
    piVar5 = param_1 + 0xa4;
    piVar3 = param_1 + 0x18;
  }
  else {
    if (uVar1 != 0x70f) {
      if (uVar1 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3f9,0xf,0);
        return 0;
      }
      if (uVar1 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    piVar6 = param_1 + 0xa4;
    piVar4 = param_1 + 0x18;
    FUN_0049cfc0(param_1 + 0x14,piVar4,param_1 + 0x24,piVar6);
    piVar5 = param_1 + 100;
    piVar3 = param_1 + 0x16;
  }
  FUN_0049cfc0(piVar3,piVar4,piVar5,piVar6);
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


