/* Module: encn3260.dll
   Function: FUN_6648c650
   Address: 6648c650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648c650(void *this,int *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char local_28 [32];
  void *local_8;
  
  local_8 = this;
  if (param_2 != (char *)0x0) {
    FUN_664bd620(param_1,s_Content_type_664e26d4,param_3,0);
    uVar2 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    sprintf(local_28,&DAT_664e2400,~uVar2 - 1);
    FUN_664bd620(param_1,s_Content_length_664e26c4,local_28,0);
    FUN_664bb5e0(param_1 + 4,param_2);
  }
  FUN_6648c6d0(local_8,param_1,param_4);
  return;
}


