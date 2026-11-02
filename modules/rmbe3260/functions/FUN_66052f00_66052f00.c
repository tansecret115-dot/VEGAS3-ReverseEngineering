/* Module: rmbe3260.dll
   Function: FUN_66052f00
   Address: 66052f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66052f00(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_6605b7e0(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_6605bba0(local_10,&DAT_6606c264);
      }
      this_00 = FUN_6605d210((void *)((int)this + 8),param_1);
      FUN_6605b970(this_00,local_10[0]);
    }
    FUN_6605b770((int *)local_10);
  }
  return 0;
}


