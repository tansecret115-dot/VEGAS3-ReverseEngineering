/* Module: vidcap30.exe
   Function: FUN_004487f0
   Address: 004487f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004487f0(HWND param_1,LPARAM *param_2)

{
  _SfList_CreateExZ_32(param_2,4,0x40,0x10,0x40000002,0,0,0);
  if (param_2 != (LPARAM *)0x0) {
    SendMessageA(param_1,0x60e,0,*param_2);
    return *(undefined4 *)*param_2;
  }
  return 0;
}


