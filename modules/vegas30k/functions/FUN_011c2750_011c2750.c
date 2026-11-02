/* Module: vegas30k.dll
   Function: FUN_011c2750
   Address: 011c2750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c2750(int *param_1,int param_2)

{
  int iVar1;
  int *local_4;
  
  iVar1 = 1;
  local_4 = (int *)0x0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,1,&local_4,0);
    if (iVar1 == 0) {
      (**(code **)(*local_4 + 8))(local_4);
    }
  }
  return iVar1;
}


