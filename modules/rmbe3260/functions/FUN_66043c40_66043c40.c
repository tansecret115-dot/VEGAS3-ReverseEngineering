/* Module: rmbe3260.dll
   Function: FUN_66043c40
   Address: 66043c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_66043c40(void *param_1,short *param_2,int param_3,undefined4 *param_4,uint *param_5,int *param_6
            ,int *param_7)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_66046040(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


