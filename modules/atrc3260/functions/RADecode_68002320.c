/* Module: atrc3260.dll
   Function: RADecode
   Address: 68002320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
RADecode(void *param_1,void *param_2,uint param_3,void *param_4,uint *param_5,uint param_6)

{
  undefined4 uVar1;
  
                    /* 0x2320  2  RADecode */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_68001d50(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return 0x80070057;
}


