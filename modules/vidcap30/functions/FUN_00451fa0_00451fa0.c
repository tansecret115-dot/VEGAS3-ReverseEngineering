/* Module: vidcap30.exe
   Function: FUN_00451fa0
   Address: 00451fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00451fa0(int *param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00579db0();
  iVar1 = lstrlenA(param_2);
  MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)&stack0xfffffff0,iVar1 + 1);
  *(undefined2 *)(&stack0xffffffee + (iVar1 + 1) * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&stack0xfffffff0,param_3,0);
  return;
}


