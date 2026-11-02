/* Module: vegas30.exe
   Function: FUN_00523690
   Address: 00523690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00523690(int *param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0060ac30();
  iVar1 = lstrlenA(param_2);
  MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)&stack0xfffffff0,iVar1 + 1);
  *(undefined2 *)(&stack0xffffffee + (iVar1 + 1) * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&stack0xfffffff0,param_3,0);
  return;
}


