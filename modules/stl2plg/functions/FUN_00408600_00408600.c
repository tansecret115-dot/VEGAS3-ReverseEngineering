/* Module: stl2plg.dll
   Function: FUN_00408600
   Address: 00408600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408600(byte *param_1,SIZE_T param_2,int param_3)

{
  *param_1 = 0;
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 0:
  case 3:
    FUN_0040d4c0(DAT_0047353c,0x1be,(LPSTR)param_1,param_2);
    return;
  case 1:
    FUN_0040d4c0(DAT_0047353c,0x1c1,(LPSTR)param_1,param_2);
    return;
  case 2:
    FUN_0040d4c0(DAT_0047353c,0x1c0,(LPSTR)param_1,param_2);
    return;
  default:
    FUN_00422c80(*(undefined4 *)(param_3 + 0x10),param_1);
    return;
  }
}


