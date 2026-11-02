/* Module: sfxpfx1.dll
   Function: FUN_5c97ab7f
   Address: 5c97ab7f
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c97ab7f(int *param_1)

{
  int iVar1;
  
  if ((param_1[10] == 0) || (param_1[4] == 0)) {
    iVar1 = -0x7fff0001;
  }
  else if (param_1[7] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))();
    if (-1 < iVar1) {
      param_1[7] = 0;
    }
  }
  return iVar1;
}


