/* Module: vidcap30.exe
   Function: FUN_0044e4b0
   Address: 0044e4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e4b0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xc523;
  *param_2 = 0;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    switch(*(undefined4 *)(param_1 + 0x78)) {
    case 1:
      uVar1 = 0xc53c;
      break;
    case 2:
      uVar1 = 0xc53d;
      break;
    case 3:
      uVar1 = 0xc53e;
      break;
    case 4:
      uVar1 = 0xc53f;
      break;
    default:
      uVar1 = 0xc540;
    }
  }
  _SfLoadString_16(DAT_005ba2a0,uVar1,param_2,param_3);
  return;
}


