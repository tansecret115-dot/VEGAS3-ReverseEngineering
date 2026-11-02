/* Module: 28_83260.dll
   Function: RAInitEncoder
   Address: 10001790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAInitEncoder(void *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x1790  9  RAInitEncoder */
  if ((param_1 != (void *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = FUN_100015a0(param_1,param_2[2],
                         CONCAT22((short)((uint)(param_2 + 1) >> 0x10),*(undefined2 *)(param_2 + 3))
                         ,param_2,param_2 + 1);
    return uVar1;
  }
  return 0x80070057;
}


