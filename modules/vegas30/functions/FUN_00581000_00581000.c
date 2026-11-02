/* Module: vegas30.exe
   Function: FUN_00581000
   Address: 00581000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581000(int *param_1,int param_2)

{
  FUN_00580a20();
  if (param_2 == -1) {
    param_2 = lstrlenA((LPCSTR)*param_1);
  }
  *(int *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


