/* Module: vegas30k.dll
   Function: _SfAudioPeak_InitMinMaxArray@12
   Address: 0105aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudioPeak_InitMinMaxArray_12(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* 0x5aef0  723  _SfAudioPeak_InitMinMaxArray@12 */
  if (0 < param_2) {
    puVar2 = param_3 + 1;
    puVar1 = param_3;
    puVar3 = param_3;
    puVar4 = param_3;
    do {
      switch(param_1) {
      case 0x10:
        *(undefined1 *)puVar1 = 0xff;
        *(undefined1 *)((int)puVar1 + 1) = 0;
        break;
      case 0x11:
      case 0x40:
        *(undefined2 *)puVar4 = 0x7fff;
        *(undefined2 *)((int)puVar4 + 2) = 0x8000;
        break;
      case 0x12:
      case 0x41:
        *(undefined2 *)((int)puVar2 + -3) = 0x7fff;
        *(undefined2 *)puVar2 = 0x8000;
        break;
      case 0x13:
      case 0x42:
        *puVar3 = 0x7fffffff;
        puVar3[1] = 0x80000000;
        break;
      case 0x20:
        *puVar3 = 0x7f7fffff;
        puVar3[1] = 0xff7fffff;
        break;
      case 0x21:
        *param_3 = 0xffffffff;
        param_3[1] = 0x7fefffff;
        param_3[2] = 0xffffffff;
        param_3[3] = 0xffefffff;
        break;
      case 0x31:
        *(undefined1 *)puVar1 = 0x7f;
        *(undefined1 *)((int)puVar1 + 1) = 0x80;
      }
      puVar1 = (undefined4 *)((int)puVar1 + 2);
      puVar4 = puVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 6);
      puVar3 = puVar3 + 2;
      param_3 = param_3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return 0;
  }
  return 0;
}


