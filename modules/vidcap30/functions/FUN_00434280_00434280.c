/* Module: vidcap30.exe
   Function: FUN_00434280
   Address: 00434280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434280(HWND param_1,LPARAM *param_2)

{
  int iVar1;
  
  iVar1 = _SfList_CreateExZ_32(param_2,4,0x40,0x10,0x40000002,0,0,0);
  if (-1 < iVar1) {
    SendMessageA(param_1,0x60e,0,*param_2);
  }
  return iVar1;
}


