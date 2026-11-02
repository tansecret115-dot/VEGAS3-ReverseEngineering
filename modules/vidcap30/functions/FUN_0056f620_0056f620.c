/* Module: vidcap30.exe
   Function: FUN_0056f620
   Address: 0056f620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0056f620(int param_1,undefined4 *param_2,int param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    FUN_00575260(param_1 + 0x40,param_2 + 1);
    FUN_00575260(param_1 + 0x4c,param_2 + 4);
    FUN_00575260(param_1 + 0x58,param_3);
    FUN_00575260(param_1 + 100,param_3 + 0xc);
    return 0;
  }
  return 0x80004005;
}


