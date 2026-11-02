/* Module: vidcap30.exe
   Function: FUN_00406820
   Address: 00406820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406820(undefined4 *param_1)

{
  if (param_1[0x24] != 0) {
    FUN_00406700(param_1);
    DestroyWindow((HWND)param_1[0x24]);
    param_1[0x24] = 0;
    FUN_00405be0(DAT_005ba504,1);
    FUN_00401ad0();
    if (((byte)DAT_005ba4b4 & 2) != 0) {
      SetFocus(DAT_005ba4bc);
    }
    if (param_1[0x45] != 0) {
      param_1[0x45] = 0;
      PostMessageA((HWND)*param_1,0x601,1,0);
    }
  }
  return;
}


