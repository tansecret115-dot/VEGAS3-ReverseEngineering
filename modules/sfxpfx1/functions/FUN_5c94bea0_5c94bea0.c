/* Module: sfxpfx1.dll
   Function: FUN_5c94bea0
   Address: 5c94bea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c94bea0(byte *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_5c99f07c = DAT_5c99f07c + *(int *)(param_5 + 0xc);
    iVar2 = ftol();
    if (iVar2 < -0x80) {
      bVar1 = 0;
    }
    else if (iVar2 < 0x80) {
      bVar1 = (byte)iVar2 ^ 0x80;
    }
    else {
      bVar1 = 0xff;
    }
    *param_1 = bVar1;
    if (1 < param_3) {
      DAT_5c99f080 = DAT_5c99f080 + 1 + *(int *)(param_5 + 0x10);
      iVar2 = ftol();
      if (iVar2 < -0x80) {
        bVar1 = 0;
      }
      else if (iVar2 < 0x80) {
        bVar1 = (byte)iVar2 ^ 0x80;
      }
      else {
        bVar1 = 0xff;
      }
      param_1[1] = bVar1;
    }
    param_1 = param_1 + param_3;
  }
  return;
}


