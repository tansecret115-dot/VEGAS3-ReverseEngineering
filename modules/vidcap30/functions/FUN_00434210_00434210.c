/* Module: vidcap30.exe
   Function: FUN_00434210
   Address: 00434210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434210(HWND param_1,LPARAM *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = _SfList_CreateExZ_32(param_2,4,0x40,0x10,0x40000002,0,0,0);
  if (-1 < iVar1) {
    SendMessageA(param_1,0x605,1,*param_2);
    iVar1 = FUN_004177a0(*param_2,1,0,param_3);
    if (iVar1 < 0) {
      FUN_00417990(*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}


