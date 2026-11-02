/* Module: vegas30.exe
   Function: FUN_00501cd0
   Address: 00501cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00501cd0(int param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4) * *(int *)(param_1 + 8)) {
    do {
      _mbscat(param_2," ");
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 4) * *(int *)(param_1 + 8));
  }
  _mbscat(param_2,"<");
  _mbscat(param_2,param_3);
  if (param_4 != (uchar *)0x0) {
    _mbscat(param_2,param_4);
  }
  _mbscat(param_2,">");
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


