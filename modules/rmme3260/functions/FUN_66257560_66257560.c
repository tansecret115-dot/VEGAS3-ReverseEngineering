/* Module: rmme3260.dll
   Function: FUN_66257560
   Address: 66257560
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66257560(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _close(*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if (iVar1 < 0) {
    piVar2 = _errno();
    *(int *)(param_1 + 8) = *piVar2;
  }
  return iVar1;
}


