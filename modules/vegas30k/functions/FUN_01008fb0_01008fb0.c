/* Module: vegas30k.dll
   Function: FUN_01008fb0
   Address: 01008fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01008fb0(LPSTR param_1,int param_2,undefined4 *param_3)

{
  if (param_1 != (LPSTR)0x0) {
    lstrcpynA(param_1,"Dodge",param_2);
    param_1[param_2 + -1] = '\0';
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_011db310;
    param_3[1] = DAT_011db314;
    param_3[2] = DAT_011db318;
    param_3[3] = DAT_011db31c;
  }
  return 0;
}


