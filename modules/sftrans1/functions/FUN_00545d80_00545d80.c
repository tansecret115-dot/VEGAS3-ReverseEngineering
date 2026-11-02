/* Module: sftrans1.dll
   Function: FUN_00545d80
   Address: 00545d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00545d80(int *param_1)

{
  int iVar1;
  LONG LVar2;
  HGLOBAL pvVar3;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_005771f8) {
    LVar2 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar2 < 1) {
      iVar1 = *param_1;
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalFree(pvVar3);
    }
  }
  return;
}


