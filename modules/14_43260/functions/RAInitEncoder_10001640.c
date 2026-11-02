/* Module: 14_43260.dll
   Function: RAInitEncoder
   Address: 10001640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAInitEncoder(void *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x1640  9  RAInitEncoder */
  if ((param_1 != (void *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = FUN_10001450(param_1,param_2[2],
                         CONCAT22((short)((uint)(param_2 + 1) >> 0x10),*(undefined2 *)(param_2 + 3))
                         ,param_2,param_2 + 1);
    return uVar1;
  }
  return 0x80070057;
}


