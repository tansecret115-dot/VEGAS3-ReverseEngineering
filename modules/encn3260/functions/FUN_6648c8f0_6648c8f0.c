/* Module: encn3260.dll
   Function: FUN_6648c8f0
   Address: 6648c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648c8f0(void *this,int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  char local_30 [32];
  int local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_664bd620(param_1,s_Content_type_664e26d4,param_3,0);
    uVar4 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sprintf(local_30,&DAT_664e2400,~uVar4 - 1);
    FUN_664bd620(param_1,s_Content_length_664e26c4,local_30,0);
    FUN_664bb5e0(param_1 + 4,param_2);
  }
  (**(code **)(*param_1 + 0xc))(local_10);
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_664bad50(puVar2);
  }
  (**(code **)(*piVar3 + 4))(piVar3);
  (**(code **)(*piVar3 + 0x10))(piVar3,local_10[0],*(undefined4 *)(local_10[0] + -8));
  (*(code *)**(undefined4 **)this)(local_10[0],0);
  FUN_6648cc70(this,piVar3);
  (**(code **)(*piVar3 + 8))(piVar3);
  FUN_664bb3e0(local_10);
  return 0;
}


