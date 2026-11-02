/* Module: encn3260.dll
   Function: FUN_664cdd10
   Address: 664cdd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664cdd10(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,int *param_9)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  iVar1 = FUN_664cbff0(*(int *)((int)this + 0xc),param_1);
  if (iVar1 != 0) {
    FUN_664cf820(*(void **)(iVar1 + 0x3c),param_2,param_3,param_4,param_5,param_6);
    *param_7 = iVar1;
    *param_8 = iVar1 + 0x14;
    *param_9 = iVar1 + 0x28;
  }
  return;
}


