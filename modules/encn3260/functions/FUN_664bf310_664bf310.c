/* Module: encn3260.dll
   Function: FUN_664bf310
   Address: 664bf310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bf310(char *param_1,void *param_2)

{
  char cVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int local_44 [7];
  undefined4 local_28 [5];
  char *local_14 [4];
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_28,(undefined4 *)param_1,~uVar3 - 1);
  FUN_664c4750(local_44,local_28);
  FUN_664c4790(local_44,local_14,(char *)0x0);
  this = operator_new(0x1c);
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_664be1c0(this,local_14[0]);
  }
  FUN_664be450(param_2,puVar2);
  FUN_664bb3e0((int *)local_14);
  FUN_664c4770(local_44);
  FUN_664c0180(local_28);
  return 0;
}


