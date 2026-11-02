/* Module: encn3260.dll
   Function: FUN_664cbd60
   Address: 664cbd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cbd60(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_664bb450(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_664bb810(local_10,&DAT_664e32e0);
      }
      this_00 = FUN_664db780((void *)((int)this + 8),param_1);
      FUN_664bb5e0(this_00,local_10[0]);
    }
    FUN_664bb3e0((int *)local_10);
  }
  return 0;
}


