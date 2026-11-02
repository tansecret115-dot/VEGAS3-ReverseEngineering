/* Module: gifplug.dll
   Function: FUN_5f6c2080
   Address: 5f6c2080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c2080(int *param_1)

{
  int iVar1;
  
  if (param_1[0x18] != 0) {
    InterlockedDecrement(param_1 + 0x18);
  }
  iVar1 = param_1[0x18];
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x58))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


