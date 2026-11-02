/* Module: sftrans1.dll
   Function: FUN_005462f0
   Address: 005462f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005462f0(int *param_1,int param_2)

{
  FUN_00545d10();
  if (param_2 == -1) {
    param_2 = lstrlenA((LPCSTR)*param_1);
  }
  *(int *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


