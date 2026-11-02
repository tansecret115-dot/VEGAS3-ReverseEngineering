/* Module: stl2plg.dll
   Function: FUN_0040abe0
   Address: 0040abe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040abe0(LPSTR param_1,SIZE_T param_2,int param_3)

{
  *param_1 = '\0';
  switch(*(undefined1 *)(param_3 + 2)) {
  case 2:
    FUN_0040d4c0(DAT_0047353c,0x1bb,param_1,param_2);
    return;
  case 3:
    FUN_0040d4c0(DAT_0047353c,0x1bc,param_1,param_2);
    return;
  default:
    FUN_0040d4c0(DAT_0047353c,0x1ba,param_1,param_2);
    return;
  case 9:
  case 10:
  case 0xb:
    FUN_0040d4c0(DAT_0047353c,0x1bd,param_1,param_2);
    return;
  }
}


