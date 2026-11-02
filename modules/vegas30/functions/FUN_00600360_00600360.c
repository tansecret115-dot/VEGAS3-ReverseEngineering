/* Module: vegas30.exe
   Function: FUN_00600360
   Address: 00600360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00600360(int param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 == (uchar *)0x0) {
    return 0x80004005;
  }
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0x270));
  if (param_3 < iVar1 + 1U) {
    *param_2 = '\0';
    return 0x80004005;
  }
  _mbscpy(param_2,(uchar *)(param_1 + 0x270));
  return 0;
}


