/* Module: stl2plg.dll
   Function: FUN_00401380
   Address: 00401380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401380(int *param_1)

{
  int iVar1;
  
  InterlockedDecrement(param_1 + 0x87);
  iVar1 = param_1[0x87];
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x24))(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x5c))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


