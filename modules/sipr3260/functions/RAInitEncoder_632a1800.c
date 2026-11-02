/* Module: sipr3260.dll
   Function: RAInitEncoder
   Address: 632a1800
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall RAInitEncoder(undefined4 param_1,undefined4 param_2,void *param_3,int param_4)

{
  int iVar1;
  
                    /* 0x1800  10  RAInitEncoder */
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  iVar1 = FUN_632a1500(param_3,*(undefined4 *)(param_4 + 8),
                       CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_4 + 0xc)),
                       param_4,param_4 + 4);
  return iVar1;
}


