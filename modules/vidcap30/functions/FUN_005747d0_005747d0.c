/* Module: vidcap30.exe
   Function: FUN_005747d0
   Address: 005747d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005747d0(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)(param_1 + 0x7f8);
    uVar1 = 0;
  }
  return uVar1;
}


