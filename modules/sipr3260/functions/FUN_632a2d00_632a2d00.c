/* Module: sipr3260.dll
   Function: FUN_632a2d00
   Address: 632a2d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_632a2d00(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < 0x11) {
    iVar1 = 0x10;
  }
  else {
    iVar1 = param_1;
    if (param_1 < 0x800) {
      iVar2 = param_1 * 2;
    }
  }
  if (iVar2 == 0) {
    iVar2 = iVar1 + 0x10;
  }
  FUN_632a2d50(this,iVar2);
  *(undefined1 *)(param_1 + *(int *)this) = 0;
  *(int *)(*(int *)this + -8) = param_1;
  return;
}


