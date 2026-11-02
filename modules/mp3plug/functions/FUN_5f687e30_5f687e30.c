/* Module: mp3plug.dll
   Function: FUN_5f687e30
   Address: 5f687e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f687e30(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x203] + -1;
  param_1[0x203] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x24))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


