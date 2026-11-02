/* Module: vidcap30.exe
   Function: FUN_005311a0
   Address: 005311a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005311a0(int param_1,LPCSTR param_2)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_2,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)(param_1 + 0x8a4) == 0) {
    FUN_00555170(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa9);
    DAT_0066249c = FUN_005550b0();
    switch(DAT_0066249c) {
    case 3:
      *(undefined4 *)(param_1 + 0x8a4) = 1;
    case 1:
      FUN_00555170(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      DAT_0066249c = 0;
      return 0;
    case 4:
      *(undefined4 *)(param_1 + 0x8a4) = 1;
    case 2:
      FUN_00555170(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
      DAT_0066249c = 1;
      return 1;
    }
  }
  else {
    if (DAT_0066249c == 0) {
      FUN_00555170(local_208);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_0066249c;
    }
    FUN_00555170(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_0066249c;
}


