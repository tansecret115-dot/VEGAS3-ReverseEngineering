/* Module: vegas30k.dll
   Function: FUN_01199a00
   Address: 01199a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01199a00(int param_1,undefined4 param_2,uint *param_3)

{
  switch(param_2) {
  default:
    return 0x80004001;
  case 1:
    *param_3 = *(uint *)(param_1 + 0x88);
    return 0;
  case 2:
    *param_3 = *(uint *)(param_1 + 0x8c);
    return 0;
  case 3:
    *param_3 = 0;
    *param_3 = -(uint)(*(int *)(param_1 + 0x61c) != 0) & 0x80000000;
switchD_01199a21_caseD_31:
    *param_3 = *(uint *)(param_1 + 0x60c);
    return 0;
  case 0xf:
    *param_3 = *(uint *)(param_1 + 0x610);
    return 0;
  case 0x30:
    *param_3 = *(uint *)(param_1 + 0x30);
    return 0;
  case 0x31:
    goto switchD_01199a21_caseD_31;
  case 0x32:
    *param_3 = *(uint *)(param_1 + 0x34);
    return 0;
  case 0x33:
    *param_3 = *(uint *)(param_1 + 0x524);
    return 0;
  case 0x40:
    *(uint *)(param_1 + 0x4bc) = *param_3;
    return 0;
  case 0x50:
    *param_3 = *(uint *)(param_1 + 0x528);
    return 0;
  }
}


