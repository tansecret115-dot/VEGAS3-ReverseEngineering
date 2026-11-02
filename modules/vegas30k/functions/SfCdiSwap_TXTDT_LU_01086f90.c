/* Module: vegas30k.dll
   Function: SfCdiSwap_TXTDT_LU
   Address: 01086f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfCdiSwap_TXTDT_LU(struct tagTXTDT_LUI *) */

void SfCdiSwap_TXTDT_LU(tagTXTDT_LUI *param_1)

{
  tagTXTDT_LUI *ptVar1;
  int iVar2;
  
                    /* 0x86f90  323  ?SfCdiSwap_TXTDT_LU@@YGXPAUtagTXTDT_LUI@@@Z */
  FUN_01086180(param_1 + 2,1);
  FUN_01086180(param_1 + 4,1);
  ptVar1 = param_1 + 6;
  iVar2 = 99;
  do {
    FUN_01086180(ptVar1,1);
    ptVar1 = ptVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


