/* Module: aviplug.dll
   Function: FUN_5f94cdc0
   Address: 5f94cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94cdc0(int *param_1,short *param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*param_1 == 0) {
    if (param_1[8] == 0) {
      iVar1 = *(int *)(param_2 + 2);
      if (iVar1 != 32000) {
        if (iVar1 == 0xac44) {
          if ((param_1[4] & 8U) != 0) {
            return 1;
          }
        }
        else if (iVar1 != 48000) {
          return 1;
        }
        if ((param_3 & 1) != 0) {
          return 1;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 2) != param_1[8]) {
        return 1;
      }
      if ((((byte)param_1[4] ^ param_3) & 1) != 0) {
        return 1;
      }
      if (param_1[10] < (int)((uint)(ushort)param_2[1] + param_1[9])) {
        return 1;
      }
    }
    if (((param_2[7] == 0x10) && (*param_2 == 1)) && ((param_2[1] == 1 || (param_2[1] == 2)))) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


