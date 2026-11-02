/* Module: rmme3260.dll
   Function: FUN_66264030
   Address: 66264030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66264030(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_66250280(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_66250640(local_10,&DAT_6626fdc0);
      }
      this_00 = FUN_662697f0((void *)((int)this + 8),param_1);
      FUN_66250410(this_00,local_10[0]);
    }
    FUN_66250210((int *)local_10);
  }
  return 0;
}


