/* Module: vidcap30.exe
   Function: FUN_0056e600
   Address: 0056e600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0056e600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7cc);
  *(undefined4 *)(param_1 + 0x7cc) = param_2;
  return uVar1;
}


