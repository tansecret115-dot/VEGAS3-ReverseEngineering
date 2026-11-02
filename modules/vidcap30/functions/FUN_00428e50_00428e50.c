/* Module: vidcap30.exe
   Function: FUN_00428e50
   Address: 00428e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00428e50(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*param_1 == 8) {
    if (param_2 == 0) {
      iVar1 = FUN_00421be0(param_1);
      return iVar1;
    }
    iVar1 = FUN_00428eb0(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_0042a950(param_1,param_3);
      return iVar1;
    }
    iVar2 = lstrcmpA((LPCSTR)(param_1 + 10),"No Capture Device");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return iVar1;
}


