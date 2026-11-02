/* Module: encn3260.dll
   Function: FUN_664cf170
   Address: 664cf170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664cf170(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  puVar1 = (undefined4 *)FUN_664cbff0(*(int *)this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664cf820((void *)*puVar1,param_2,param_3,param_4,param_5,param_6);
    *param_7 = puVar1[1];
  }
  return;
}


