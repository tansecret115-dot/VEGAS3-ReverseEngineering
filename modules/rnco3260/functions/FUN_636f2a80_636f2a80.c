/* Module: rnco3260.dll
   Function: FUN_636f2a80
   Address: 636f2a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_636f2a80(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
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
    uVar1 = FUN_636f2320(param_1,param_2);
    return uVar1 * param_3;
  case 0x10:
  case 0x11:
    return (int)(((param_3 * 2) / 2) * param_2) / 2 + param_3 * param_2;
  case 0x12:
    iVar2 = ((int)(param_3 * 2 + (param_3 * 2 >> 0x1f & 3U)) >> 2) * param_2;
    return ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + param_3 * param_2;
  default:
    iVar2 = FUN_636f23a0(param_1);
    return ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * param_3 * param_2;
  }
}


