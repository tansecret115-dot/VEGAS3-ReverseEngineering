/* Module: atrc3260.dll
   Function: FUN_680029e0
   Address: 680029e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_680029e0(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_680032d0(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_680035f0(local_10,&DAT_68005198);
      }
      this_00 = FUN_68003970((void *)((int)this + 8),param_1);
      FUN_68003420(this_00,local_10[0]);
    }
    FUN_68003260((int *)local_10);
  }
  return 0;
}


