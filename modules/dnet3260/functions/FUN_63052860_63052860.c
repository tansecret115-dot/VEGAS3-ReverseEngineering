/* Module: dnet3260.dll
   Function: FUN_63052860
   Address: 63052860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63052860(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_63053150(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_63053470(local_10,&DAT_630551a8);
      }
      this_00 = FUN_630537f0((void *)((int)this + 8),param_1);
      FUN_630532a0(this_00,local_10[0]);
    }
    FUN_630530e0((int *)local_10);
  }
  return 0;
}


