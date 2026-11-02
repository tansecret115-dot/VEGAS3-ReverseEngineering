/* Module: mp3plug.dll
   Function: FUN_5f69b4c0
   Address: 5f69b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b4c0(void *this,LPSTR param_1,int param_2)

{
  if (param_1 != (LPSTR)0x0) {
    lstrcpynA(param_1,*(LPCSTR *)((int)this + 0x2c),param_2);
    param_1[param_2 + -1] = '\0';
  }
  return;
}


