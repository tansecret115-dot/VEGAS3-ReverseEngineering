/* Module: sftrans1.dll
   Function: FUN_00544570
   Address: 00544570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544570(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x14) == 1) && (param_2 != 0)) {
    return 0;
  }
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    return 0;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 2;
    return 0;
  case 2:
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  case 3:
    *(undefined4 *)(param_1 + 0x18) = 3;
    return 0;
  default:
    return 5;
  }
}


