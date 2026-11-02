/* Module: vegas30.exe
   Function: FUN_00418120
   Address: 00418120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418120(int param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _SfGetUIFontSize_4(100);
  param_2->left = *(LONG *)(param_1 + 0x26c);
  param_2->top = *(LONG *)(param_1 + 0x270);
  param_2->right = *(LONG *)(param_1 + 0x274);
  param_2->bottom = *(LONG *)(param_1 + 0x278);
  InflateRect(param_2,-2,0);
  iVar1 = ((param_2->top - *(int *)(iVar2 + 4)) + param_2->bottom) / 3;
  param_2->top = iVar1;
  iVar3 = *(int *)(param_1 + 0x270) + 2;
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  param_2->top = iVar3;
  param_2->bottom = iVar3 + *(int *)(iVar2 + 4);
  return;
}


