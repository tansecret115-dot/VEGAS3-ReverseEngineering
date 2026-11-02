/* Module: erv23260.dll
   Function: FUN_6381c380
   Address: 6381c380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6381c380(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,uint *param_6)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0) && ((*(byte *)(param_3 - *(int *)((int)this + 0x3b4)) & 0x1f) == 0)) {
    uVar1 = 1;
  }
  if ((param_2 == 0) && ((*(byte *)(param_3 + -1) & 0x1f) == 0)) {
    uVar1 = uVar1 + 2;
  }
  *param_6 = uVar1;
  param_6[0xc] = uVar1;
  param_6[0xf] = uVar1;
  param_6[3] = uVar1 | 2;
  param_6[6] = uVar1 | 1;
  param_6[1] = param_5;
  param_6[7] = param_5;
  param_6[4] = param_5 + 0x10;
  param_6[10] = param_5 + 0x10;
  param_6[0x10] = param_5 + 0x30;
  param_6[0xd] = param_5 + 0x20;
  param_6[2] = param_4;
  param_6[5] = param_4;
  param_6[8] = param_4 + 0x10;
  param_6[0xb] = param_4 + 0x10;
  param_6[9] = 3;
  param_6[0xe] = param_4 + 0x20;
  param_6[0x11] = param_4 + 0x30;
  return;
}


