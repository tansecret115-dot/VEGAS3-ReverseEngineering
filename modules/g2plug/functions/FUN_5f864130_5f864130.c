/* Module: g2plug.dll
   Function: FUN_5f864130
   Address: 5f864130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f864130(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x10:
    return param_1 + 0x250;
  case 0x20:
    return param_1 + 0x28c;
  case 0x40:
    iVar1 = param_1 + 0x2c8;
    break;
  case 0x100:
    return param_1 + 0x304;
  }
  return iVar1;
}


