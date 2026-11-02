/* Module: vegas30.exe
   Function: FUN_005dec90
   Address: 005dec90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005dec90(HANDLE param_1,LPCSTR param_2,LPDWORD param_3)

{
  int iVar1;
  int cchWideChar;
  
  iVar1 = lstrlenA(param_2);
  cchWideChar = iVar1 + 1;
  FUN_0060ac30();
  MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)&stack0xfffffff0,cchWideChar);
  *(undefined2 *)(&stack0xffffffee + cchWideChar * 2) = 0;
  WriteFile(param_1,&stack0xfffffff0,iVar1 + -1 + cchWideChar,param_3,(LPOVERLAPPED)0x0);
  return;
}


