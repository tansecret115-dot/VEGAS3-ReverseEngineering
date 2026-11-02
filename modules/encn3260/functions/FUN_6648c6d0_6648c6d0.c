/* Module: encn3260.dll
   Function: FUN_6648c6d0
   Address: 6648c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648c6d0(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char local_30 [32];
  int local_10 [3];
  
  sprintf(local_30,&DAT_664e2f44,param_2);
  FUN_664bd620(param_1,&DAT_664e2f3c,local_30,1);
  param_1[3] = param_2;
  FUN_6648c510(this,param_1);
  (**(code **)(*param_1 + 0xc))(local_10);
  (*(code *)**(undefined4 **)this)(local_10[0],0);
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_664bad50(puVar1);
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_10[0],*(undefined4 *)(local_10[0] + -8));
  FUN_6648cc70(this,piVar2);
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_664bb3e0(local_10);
  return 0;
}


