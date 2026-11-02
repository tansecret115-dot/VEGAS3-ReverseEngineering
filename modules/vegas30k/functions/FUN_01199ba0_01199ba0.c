/* Module: vegas30k.dll
   Function: FUN_01199ba0
   Address: 01199ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01199ba0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_2 < 0x41) {
    if (param_2 != 0x40) {
      switch(param_2) {
      case 1:
        *(undefined4 *)(param_1 + 0x88) = *param_3;
        return 0;
      default:
        return 0x80004001;
      case 0xf:
        *(undefined4 *)(param_1 + 0x610) = *param_3;
        return 0;
      case 0x30:
        *(undefined4 *)(param_1 + 0x30) = *param_3;
        return 0;
      case 0x32:
        *(undefined4 *)(param_1 + 0x34) = *param_3;
        return 0;
      case 0x33:
        *(undefined4 *)(param_1 + 0x524) = *param_3;
        return 0;
      }
    }
    piVar1 = *(int **)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x4bc) = *param_3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x6c))(piVar1,1,(undefined4 *)(param_1 + 0x4bc));
      return 0;
    }
  }
  else if (param_2 < 0x62) {
    if (param_2 == 0x61) {
      *(undefined4 *)(param_1 + 0x428) = *param_3;
      return 0;
    }
    if (param_2 == 0x50) {
      *(undefined4 *)(param_1 + 0x528) = *param_3;
      return 0;
    }
    if (param_2 != 0x60) {
      return 0x80004001;
    }
    *(undefined4 *)(param_1 + 0x424) = *param_3;
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      FUN_011972f0();
      FUN_01197210();
      return 0;
    }
  }
  else {
    if (param_2 != 0x1000) {
      return 0x80004001;
    }
    *(undefined4 *)(param_1 + 0x28) = *param_3;
  }
  return 0;
}


