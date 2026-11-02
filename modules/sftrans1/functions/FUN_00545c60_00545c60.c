/* Module: sftrans1.dll
   Function: FUN_00545c60
   Address: 00545c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00545c60(int *param_1)

{
  int iVar1;
  LONG LVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_005771f8) {
    LVar2 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar2 < 1) {
      iVar1 = *param_1;
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)(iVar1 + -0xc));
      GlobalFree(pvVar3);
    }
    piVar4 = (int *)FUN_00545bb0();
    *param_1 = *piVar4;
  }
  return;
}


