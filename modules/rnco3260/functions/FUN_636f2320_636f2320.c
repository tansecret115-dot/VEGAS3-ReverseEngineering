/* Module: rnco3260.dll
   Function: FUN_636f2320
   Address: 636f2320
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_636f2320(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar1 = FUN_636f23a0(param_1);
    return iVar1 * param_2 + 0x1f >> 3 & 0x1ffffffc;
  case 0x10:
  case 0x11:
  case 0x12:
    return param_2;
  default:
    iVar1 = FUN_636f23a0(param_1);
    return ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) * param_2;
  }
}


