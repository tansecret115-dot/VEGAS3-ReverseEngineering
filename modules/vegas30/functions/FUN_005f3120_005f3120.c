/* Module: vegas30.exe
   Function: FUN_005f3120
   Address: 005f3120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f3120(int param_1,undefined4 *param_2,uchar *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_3 != (uchar *)0x0) {
    if (0 < (int)param_4) {
      *param_3 = '\0';
    }
    if (*(LPCSTR *)(param_1 + 0x16c) != (LPCSTR)0x0) {
      uVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x16c));
      if (uVar1 < param_4) {
        _mbscpy(param_3,*(uchar **)(param_1 + 0x16c));
      }
      else {
        uVar2 = 0x80070057;
      }
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x168);
  return uVar2;
}


