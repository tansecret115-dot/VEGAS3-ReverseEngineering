/* Module: vegas30.exe
   Function: FUN_006055b0
   Address: 006055b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_006055b0(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)(param_1 + 0x7f8);
    uVar1 = 0;
  }
  return uVar1;
}


