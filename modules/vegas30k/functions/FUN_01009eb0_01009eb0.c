/* Module: vegas30k.dll
   Function: FUN_01009eb0
   Address: 01009eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01009eb0(LPSTR param_1,int param_2,undefined4 *param_3)

{
  if (param_1 != (LPSTR)0x0) {
    lstrcpynA(param_1,"Lighten",param_2);
    param_1[param_2 + -1] = '\0';
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_011db340;
    param_3[1] = DAT_011db344;
    param_3[2] = DAT_011db348;
    param_3[3] = DAT_011db34c;
  }
  return 0;
}


