/* Module: vegas30.exe
   Function: FUN_00580970
   Address: 00580970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580970(int *param_1)

{
  int iVar1;
  LONG LVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_00645cc0) {
    LVar2 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar2 < 1) {
      iVar1 = *param_1;
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalFree(pvVar3);
    }
    piVar4 = (int *)FUN_005808c0();
    *param_1 = *piVar4;
  }
  return;
}


