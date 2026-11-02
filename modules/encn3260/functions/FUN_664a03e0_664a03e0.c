/* Module: encn3260.dll
   Function: FUN_664a03e0
   Address: 664a03e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a03e0(int *param_1,HWND param_2,DWORD param_3)

{
  undefined4 *puVar1;
  
  if (((param_1[9] == 0) && (*(int *)((int)param_1 + 0x109) == 0)) &&
     (*(int *)((int)param_1 + 0xf1) == 0)) {
    puVar1 = FUN_664a0430(param_3,param_2);
    (**(code **)(*param_1 + 0xc))(param_1,puVar1);
    return 0;
  }
  return 0x80040009;
}


