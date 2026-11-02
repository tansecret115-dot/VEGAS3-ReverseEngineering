/* Module: erv33260.dll
   Function: FUN_670816f1
   Address: 670816f1
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670816f1(int param_1)

{
  bool bVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    if (unaff_EBP != 0) {
      in_EAX = *(undefined4 *)(unaff_ESI + -4 + param_1);
    }
    *(undefined4 *)(unaff_EDI + -4 + param_1) = in_EAX;
    iVar2 = param_1 + -4;
    bVar1 = 3 < param_1;
    param_1 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


