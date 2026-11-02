/* Module: vegas30.exe
   Function: FUN_005a3510
   Address: 005a3510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a3510(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 == 1) {
      if (*(int *)(param_2 + 0x78) != 0 || *(int *)(param_2 + 0x7c) != 0) {
        return;
      }
      *(undefined4 *)(param_2 + 0x78) = DAT_00649988;
      *(undefined4 *)(param_2 + 0x7c) = DAT_0064998c;
      *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x100;
      iVar1 = *(int *)(param_2 + 8);
    }
    else {
      if (param_3 != 2) {
        return;
      }
      if (*(int *)(param_2 + 0x80) != 0 || *(int *)(param_2 + 0x84) != 0) {
        return;
      }
      *(undefined4 *)(param_2 + 0x80) = DAT_00649988;
      *(undefined4 *)(param_2 + 0x84) = DAT_0064998c;
      *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x100;
      iVar1 = *(int *)(param_2 + 8);
    }
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
  }
  return;
}


