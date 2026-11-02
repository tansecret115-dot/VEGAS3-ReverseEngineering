/* Module: rmme3260.dll
   Function: FUN_6624fb30
   Address: 6624fb30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624fb30(int param_1,int param_2,int param_3)

{
  switch(param_1) {
  case 0:
  case 1:
    return (uint)(param_3 * param_2 * 3) >> 1;
  case 2:
    return (uint)(param_3 * param_2 * 9) >> 3;
  case 3:
  case 4:
    return param_3 * param_2 * 2;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    return (*(int *)(&DAT_6627c0dc + param_1 * 0x10) * param_2 + 3U & 0xfffffffc) * param_3;
  default:
    return 0;
  }
}


