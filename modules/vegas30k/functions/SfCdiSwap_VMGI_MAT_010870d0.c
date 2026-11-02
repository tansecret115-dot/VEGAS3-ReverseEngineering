/* Module: vegas30k.dll
   Function: SfCdiSwap_VMGI_MAT
   Address: 010870d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfCdiSwap_VMGI_MAT(struct tagVMGI_MAT *) */

void SfCdiSwap_VMGI_MAT(tagVMGI_MAT *param_1)

{
                    /* 0x870d0  326  ?SfCdiSwap_VMGI_MAT@@YGXPAUtagVMGI_MAT@@@Z */
  FUN_010861b0(param_1 + 0xc,1);
  FUN_010861b0(param_1 + 0x1c,1);
  FUN_01086180(param_1 + 0x26,2);
  FUN_010861b0(param_1 + 0x80,2);
  FUN_010861b0(param_1 + 0xc0,8);
  return;
}


