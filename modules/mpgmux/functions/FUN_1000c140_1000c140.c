/* Module: mpgmux.dll
   Function: FUN_1000c140
   Address: 1000c140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1000c140(int param_1,undefined1 *param_2,uint param_3,char param_4,byte param_5,byte param_6,
            char param_7,byte param_8,byte param_9,undefined1 param_10,byte param_11,
            undefined4 param_12,undefined1 param_13,byte param_14,undefined4 param_15,
            undefined1 param_16,byte param_17,undefined4 param_18,uint param_19)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = param_19 & 2;
  if ((uVar3 == 0) || (cVar2 = '\x02', (param_19 & 4) == 0)) {
    cVar2 = param_4;
  }
  if ((uVar3 == 0) && ((param_19 & 4) == 0)) {
    cVar2 = '\0';
  }
  if ((param_19 & 1) == 0) {
    param_9 = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 1;
  param_2[3] = 0xbb;
  if (param_19 == 7) {
    param_2[4] = 0;
    param_2[5] = 0xf;
  }
  else {
    param_2[4] = 0;
    if (param_19 == 3) {
      param_2[5] = 0xc;
    }
    else {
      param_2[5] = 9;
    }
  }
  param_2[6] = (byte)(param_3 >> 0xf) | 0x80;
  param_2[7] = (char)(param_3 >> 7);
  param_2[8] = (char)param_3 << 1 | 1;
  param_2[9] = (cVar2 << 1 | param_5) << 1 | param_6;
  param_2[10] = (param_7 << 1 | param_8) << 6 | param_9 | 0x20;
  if (*(int *)(param_1 + 0x2c) < 2) {
    param_2[0xb] = 0xff;
  }
  else {
    param_2[0xb] = 0x7f;
  }
  puVar1 = param_2 + 0xc;
  if ((param_19 & 1) != 0) {
    *puVar1 = param_16;
    param_2[0xd] = (param_17 | 0xfe) << 5 | (byte)((uint)param_18 >> 8);
    param_2[0xe] = (char)param_18;
    puVar1 = param_2 + 0xf;
  }
  if (uVar3 != 0) {
    *puVar1 = param_10;
    puVar1[1] = (param_11 | 0xfe) << 5 | (byte)((uint)param_12 >> 8);
    puVar1[2] = (char)param_12;
    puVar1 = puVar1 + 3;
  }
  if ((param_19 & 4) != 0) {
    *puVar1 = param_13;
    puVar1[1] = (param_14 | 0xfe) << 5 | (byte)((uint)param_15 >> 8);
    puVar1[2] = (char)param_15;
  }
  return;
}


