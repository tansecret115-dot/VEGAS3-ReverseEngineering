/* Module: vegas30k.dll
   Function: FUN_0106a7d0
   Address: 0106a7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0106a7d0(int param_1,LPCSTR param_2)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_2,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)(param_1 + 0x8a0) == 0) {
    FUN_011496a0(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa4);
    DAT_0120e8a4 = FUN_011495e0();
    switch(DAT_0120e8a4) {
    case 3:
      *(undefined4 *)(param_1 + 0x8a0) = 1;
    case 1:
      FUN_011496a0(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      DAT_0120e8a4 = 0;
      return 0;
    case 4:
      *(undefined4 *)(param_1 + 0x8a0) = 1;
    case 2:
      FUN_011496a0(&stack0xfffffdf4);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
      DAT_0120e8a4 = 1;
      return 1;
    }
  }
  else {
    if (DAT_0120e8a4 == 0) {
      FUN_011496a0(local_208);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_0120e8a4;
    }
    FUN_011496a0(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_0120e8a4;
}


