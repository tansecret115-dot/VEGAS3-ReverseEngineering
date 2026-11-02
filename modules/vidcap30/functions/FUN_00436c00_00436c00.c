/* Module: vidcap30.exe
   Function: FUN_00436c00
   Address: 00436c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00436c00(int param_1)

{
  FUN_0043d110(param_1);
  FUN_0043cf80(param_1);
  FUN_0043d1c0(param_1);
  FUN_0043c720(param_1);
  FUN_0043b8d0(param_1,0,0);
  *(undefined4 *)(param_1 + 0x1c38) = 0;
  *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 8;
  return 0;
}


