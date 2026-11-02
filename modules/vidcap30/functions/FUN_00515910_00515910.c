/* Module: vidcap30.exe
   Function: FUN_00515910
   Address: 00515910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00515910(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_005160b0(param_1,param_3,param_4,param_1 + 0x94), iVar1 == 5))
  {
    switch(*(undefined4 *)(param_1 + 0x150)) {
    case 0:
      param_1[0x140] = 0;
      param_1[0x141] = 0;
      param_1[0x142] = 0;
      param_1[0x143] = 0;
      param_1[0x144] = 0;
      param_1[0x145] = 0;
      param_1[0x146] = 0;
      param_1[0x147] = 0;
    case 1:
    case 2:
    case 5:
    case 6:
      param_1[0x148] = 0;
      param_1[0x149] = 0;
      param_1[0x14a] = 0;
      param_1[0x14b] = 0;
      param_1[0x14c] = 0;
      param_1[0x14d] = 0;
      param_1[0x14e] = 0;
      param_1[0x14f] = 0;
      break;
    case 3:
    case 4:
    case 7:
    case 8:
      param_1[0x140] = 0;
      param_1[0x141] = 0;
      param_1[0x142] = 0;
      param_1[0x143] = 0;
      param_1[0x144] = 0;
      param_1[0x145] = 0;
      param_1[0x146] = 0;
      param_1[0x147] = 0;
    }
    FUN_00515a00(param_1,1);
    (**(code **)(param_1 + 0x29c))
              (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),4,
               param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
    return;
  }
  if ((*param_1 & 4) == 0) {
    SetFocus(*(HWND *)(param_1 + 0x3c));
  }
  if ((param_5 & 2) == 0) {
    FUN_005163d0(param_1,param_3,param_4,9);
  }
  return;
}


