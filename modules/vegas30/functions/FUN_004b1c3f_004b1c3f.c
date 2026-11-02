/* Module: vegas30.exe
   Function: FUN_004b1c3f
   Address: 004b1c3f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_004b1c3f(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            size_t param_6)

{
  int iVar1;
  int iVar2;
  wchar_t *unaff_EBP;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = (int *)param_1[2];
    while ((iVar1 = *piVar3, iVar1 == 0 || (*(int *)(iVar1 + 4) != param_4))) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*param_1 <= iVar2) {
        return;
      }
    }
    wcsncpy(unaff_EBP,(wchar_t *)(iVar1 + 0xc),param_6);
  }
  return;
}


