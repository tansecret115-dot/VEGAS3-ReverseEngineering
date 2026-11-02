/* Module: vidcap30.exe
   Function: FUN_004747d0
   Address: 004747d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004747d0(int param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  short unaff_DI;
  
  iVar1 = -0x7fffbffb;
  if (((*(byte *)(param_1 + 0x8c) & 4) != 0) && (*(int *)(param_1 + 0x90) != 0)) {
    iVar1 = -0x7ff8ffa9;
    if (0 < param_3) {
      *param_2 = '\0';
      FUN_00579db0();
      iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x34))
                        (*(int **)(param_1 + 0x90),&stack0xffffffec,param_3);
      if (-1 < iVar1) {
        if ((&stack0x00000000 == (undefined1 *)0x14) || (unaff_DI != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffffec,-1,param_2,param_3,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (param_2 != (LPSTR)0x0) {
          *param_2 = '\0';
          param_2[param_3 + -1] = '\0';
          return iVar1;
        }
        param_2[param_3 + -1] = '\0';
      }
    }
  }
  return iVar1;
}


