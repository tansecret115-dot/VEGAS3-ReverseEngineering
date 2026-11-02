/* Module: mp3plug.dll
   Function: FUN_5f69ad90
   Address: 5f69ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69ad90(void *this,LPSTR param_1,int param_2,LPSTR param_3,int param_4)

{
  lstrcpynA(param_1,*(LPCSTR *)((int)this + 0x2c),param_2);
  param_1[param_2 + -1] = '\0';
  lstrcpynA(param_3,*(LPCSTR *)((int)this + 0x30),param_4);
  param_3[param_4 + -1] = '\0';
  return;
}


