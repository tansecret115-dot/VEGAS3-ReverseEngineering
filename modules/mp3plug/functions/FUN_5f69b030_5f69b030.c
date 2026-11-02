/* Module: mp3plug.dll
   Function: FUN_5f69b030
   Address: 5f69b030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b030(void *this,LPSTR param_1,int param_2,LPSTR param_3,int param_4)

{
  if (param_1 != (LPSTR)0x0) {
    lstrcpynA(param_1,*(LPCSTR *)((int)this + 0x28),param_2);
    param_1[param_2 + -1] = '\0';
  }
  if (param_3 != (LPSTR)0x0) {
    lstrcpynA(param_3,*(LPCSTR *)((int)this + 0x2c),param_4);
    param_3[param_4 + -1] = '\0';
  }
  return;
}


