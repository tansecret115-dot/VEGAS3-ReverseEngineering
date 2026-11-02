/* Module: ednt3260.dll
   Function: dbEncode
   Address: 630fbda0
   Source: Ghidra pseudocode (Stage 10 batch) */


int dbEncode(void *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  
                    /* 0xbda0  3  dbEncode */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_630f7f40(param_1,param_2,param_3);
    return iVar1;
  }
  return -0x7ffbfdae;
}


