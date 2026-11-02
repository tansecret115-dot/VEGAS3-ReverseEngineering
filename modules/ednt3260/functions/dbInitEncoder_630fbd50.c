/* Module: ednt3260.dll
   Function: dbInitEncoder
   Address: 630fbd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int dbInitEncoder(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8)

{
  int iVar1;
  
                    /* 0xbd50  5  dbInitEncoder */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_630f7da0(param_1,param_2,param_3 / 1000,param_4,param_5,param_6,param_7,param_8);
    return iVar1;
  }
  return -0x7ffbfdae;
}


