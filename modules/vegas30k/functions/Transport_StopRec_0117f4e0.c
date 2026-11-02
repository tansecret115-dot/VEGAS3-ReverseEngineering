/* Module: vegas30k.dll
   Function: Transport_StopRec
   Address: 0117f4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StopRec(int,int) */

long Transport_StopRec(int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* 0x17f4e0  578  ?Transport_StopRec@@YGJHH@Z */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  uVar1 = 0x10000000;
  if (param_1 != 0) {
    uVar1 = 0xb0000000;
  }
  lVar2 = (**(code **)(*DAT_012b0b2c + 0x84))(DAT_012b0b2c,uVar1);
  return lVar2;
}


