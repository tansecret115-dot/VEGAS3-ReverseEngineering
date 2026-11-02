/* Module: vegas30.exe
   Function: FUN_00582790
   Address: 00582790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00582790(int param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0x10) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00582770(*(undefined4 *)(param_1 + 4),0);
      uVar1 = 1;
    }
  }
  else if (param_3 == 0x111) {
    switch(param_4) {
    case 1:
    case 2:
    case 6:
    case 7:
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00582770(param_2,param_4);
        return 1;
      }
    }
  }
  return uVar1;
}


