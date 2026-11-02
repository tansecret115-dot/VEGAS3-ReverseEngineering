/* Module: rmto3260.dll
   Function: FUN_662f3c40
   Address: 662f3c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f3c40(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_662ef160(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_662ef520(local_10,&DAT_6630b51c);
      }
      this_00 = FUN_66304770((void *)((int)this + 8),param_1);
      FUN_662ef2f0(this_00,local_10[0]);
    }
    FUN_662ef0f0((int *)local_10);
  }
  return 0;
}


