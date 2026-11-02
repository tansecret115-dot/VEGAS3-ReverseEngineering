/* Module: vidcap30.exe
   Function: FUN_00434bd0
   Address: 00434bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434bd0(int param_1,HMENU param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  
  CheckMenuRadioItem(param_2,0x1ce,0x1d2,0,0);
  CheckMenuRadioItem(param_2,0x1d9,0x1dd,0,0);
  CheckMenuRadioItem(param_2,0x1d6,0x1d8,0,0);
  EnableMenuItem(param_2,0x9d64,~*(uint *)(param_1 + 0x1aec) >> 10 & 1);
  if (((*(uint *)(param_1 + 0x1ae8) & 9) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x100) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1d2,UVar2);
  uVar1 = *(uint *)(param_1 + 0x1ae8);
  if ((((uVar1 & 9) == 0) || ((uVar1 & 0x800) != 0)) || ((uVar1 & 0x40) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1df,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 9) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x200) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1d1,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 2) == 0) || ((*(byte *)(param_1 + 0x1aec) & 0x20) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1ce,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 2) == 0) || ((*(byte *)(param_1 + 0x1aec) & 0x40) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1cf,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 2) == 0) || ((*(byte *)(param_1 + 0x1aec) & 0x80) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x1d0,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x215,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x216,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x217,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x205,UVar2);
  if (((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x206,UVar2);
  if ((((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) ||
     ((*(uint *)(param_1 + 0x1aec) & 1) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x207,UVar2);
  if ((((*(byte *)(param_1 + 0x1ae8) & 4) == 0) || ((*(uint *)(param_1 + 0x1aec) & 0x800) == 0)) ||
     ((*(uint *)(param_1 + 0x1aec) & 1) == 0)) {
    UVar2 = 1;
  }
  else {
    UVar2 = 0;
  }
  EnableMenuItem(param_2,0x208,UVar2);
  iVar3 = FUN_00435280(param_1,0);
  if (iVar3 != 0) {
    iVar3 = FUN_004464b0(*(undefined4 *)(DAT_005ba4c0 + 0x70));
    if (iVar3 != 0) {
      UVar2 = 0;
      goto LAB_00434e48;
    }
  }
  UVar2 = 1;
LAB_00434e48:
  EnableMenuItem(param_2,0x9d88,UVar2);
  EnableMenuItem(param_2,0x1d6,~*(uint *)(param_1 + 0x1aec) >> 2 & 1);
  EnableMenuItem(param_2,0x1d7,~*(uint *)(param_1 + 0x1aec) >> 3 & 1);
  EnableMenuItem(param_2,0x1d8,~*(uint *)(param_1 + 0x1aec) >> 4 & 1);
  EnableMenuItem(param_2,0x1d9,~*(uint *)(param_1 + 0x1aec) >> 1 & 1);
  EnableMenuItem(param_2,0x1da,~*(uint *)(param_1 + 0x1aec) >> 1 & 1);
  EnableMenuItem(param_2,0x1db,~*(uint *)(param_1 + 0x1aec) & 1);
  EnableMenuItem(param_2,0x1dd,~*(uint *)(param_1 + 0x1aec) & 1);
  CheckMenuItem(param_2,0x1df,*(uint *)(param_1 + 0x1ae8) & 8);
  CheckMenuRadioItem(param_2,0x1ce,0x1d2,*(UINT *)(param_1 + 0x1bfc),0);
  if (((*(uint *)(param_1 + 0x1ae8) & 0x1000) == 0) || ((*(uint *)(param_1 + 0x1ae8) & 0x800) != 0))
  {
    UVar2 = 0;
  }
  else {
    UVar2 = 8;
  }
  CheckMenuItem(param_2,0x1d1,UVar2);
  if ((*(UINT *)(param_1 + 0x1c04) != 0) && ((*(byte *)(param_1 + 0x1ae8) & 1) == 0)) {
    CheckMenuRadioItem(param_2,0x1d9,0x1dd,*(UINT *)(param_1 + 0x1c04),0);
    return;
  }
  CheckMenuRadioItem(param_2,0x1d6,0x1d8,*(UINT *)(param_1 + 0x1c00),0);
  return;
}


