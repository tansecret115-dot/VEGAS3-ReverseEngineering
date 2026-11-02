/* Module: vegas30.exe
   Function: FUN_0051d6b0
   Address: 0051d6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051d6b0(int param_1,int param_2,LPSTR param_3,int param_4)

{
  LPCSTR lpString2;
  int iVar1;
  
  if (0x32 < param_2) {
    return -0x7ff8ffa9;
  }
  if (param_2 < 5) {
    lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,param_1 * 5 + 0x6ddc + param_2);
    lstrcpynA(param_3,lpString2,param_4);
    param_3[param_4 + -1] = '\0';
    return 0;
  }
  if (param_1 == 0) {
    iVar1 = 0x898;
  }
  else if (param_1 == 1) {
    iVar1 = 0x8ca;
  }
  else if (param_1 == 2) {
    iVar1 = 0x8fc;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = _SfGetMetricStringEx_24(DAT_00647200,iVar1 + -5 + param_2,param_3,param_4,0,0);
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


