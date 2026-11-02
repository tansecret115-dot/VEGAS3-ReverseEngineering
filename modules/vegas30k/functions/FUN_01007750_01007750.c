/* Module: vegas30k.dll
   Function: FUN_01007750
   Address: 01007750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01007750(LPSTR param_1,int param_2,undefined4 *param_3)

{
  if (param_1 != (LPSTR)0x0) {
    lstrcpynA(param_1,"Screen",param_2);
    param_1[param_2 + -1] = '\0';
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_011db2d0;
    param_3[1] = DAT_011db2d4;
    param_3[2] = DAT_011db2d8;
    param_3[3] = DAT_011db2dc;
  }
  return 0;
}


