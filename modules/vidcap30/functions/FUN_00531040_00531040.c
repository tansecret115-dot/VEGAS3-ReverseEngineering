/* Module: vidcap30.exe
   Function: FUN_00531040
   Address: 00531040
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00531040(int param_1,LPCSTR param_2)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_2,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)(param_1 + 0x8a0) == 0) {
    FUN_00555170(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa4);
    DAT_00662498 = FUN_005550b0();
    switch(DAT_00662498) {
    case 3:
      *(undefined4 *)(param_1 + 0x8a0) = 1;
    case 1:
      FUN_00555170(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      DAT_00662498 = 0;
      return 0;
    case 4:
      *(undefined4 *)(param_1 + 0x8a0) = 1;
    case 2:
      FUN_00555170(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
      DAT_00662498 = 1;
      return 1;
    }
  }
  else {
    if (DAT_00662498 == 0) {
      FUN_00555170(local_208);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_00662498;
    }
    FUN_00555170(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_00662498;
}


