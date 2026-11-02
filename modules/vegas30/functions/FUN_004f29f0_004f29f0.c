/* Module: vegas30.exe
   Function: FUN_004f29f0
   Address: 004f29f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f29f0(HWND param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  uVar4 = 0;
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
LAB_004f2ae0:
      uVar4 = FUN_005080b0(param_1,param_2,param_3,param_4);
      return uVar4;
    }
    if (param_2 == 2) {
      FUN_005080b0(param_1,2,param_3,param_4);
      return 0;
    }
    if (param_2 == 0x4e) {
      switch(*(undefined4 *)(param_4 + 8)) {
      case 0xffffff35:
        puVar5 = (undefined4 *)puVar1[1];
        puVar6 = (undefined4 *)*puVar1;
        for (iVar3 = 0xe9a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_004f0c10(*puVar1);
        puVar1[2] = 0;
        return 0;
      case 0xffffff36:
        if (puVar1[2] != 0) {
          FUN_004f1ae0(*puVar1,puVar1[1]);
          puVar1[2] = 0;
          puVar1[3] = 1;
          return 0;
        }
        break;
      case 0xffffff37:
        FUN_004047b0(0);
        return 0;
      case 0xffffff38:
        pHVar2 = GetDlgItem(param_1,0x438);
        FUN_004047b0(pHVar2);
        return 0;
      }
    }
  }
  else if (param_2 == 0x110) {
    FUN_004f2520(param_1,param_4);
    uVar4 = FUN_005080b0(param_1,0x110,param_3,param_4);
  }
  else if (param_2 == 0x111) goto LAB_004f2ae0;
  return uVar4;
}


