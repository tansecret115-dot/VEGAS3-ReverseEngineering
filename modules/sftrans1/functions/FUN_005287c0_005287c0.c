/* Module: sftrans1.dll
   Function: FUN_005287c0
   Address: 005287c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005287c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            )

{
  FUN_00528760(param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  SetFocus(*(HWND *)(param_1 + 0x10));
  FUN_00528c10();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


