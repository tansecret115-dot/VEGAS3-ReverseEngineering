/* Module: sftrans1.dll
   Function: FUN_004916e0
   Address: 004916e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004916e0(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
    wcscpy(param_1,param_2);
  }
  return;
}


