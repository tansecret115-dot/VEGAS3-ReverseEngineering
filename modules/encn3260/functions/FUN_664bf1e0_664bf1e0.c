/* Module: encn3260.dll
   Function: FUN_664bf1e0
   Address: 664bf1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bf1e0(char *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *this;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int local_64 [7];
  undefined4 local_48 [5];
  int local_34 [4];
  int local_24 [4];
  char *local_14 [3];
  int local_8;
  
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_48,(undefined4 *)param_1,~uVar5 - 1);
  FUN_664c4750(local_64,local_48);
  param_1 = (char *)0x0;
  FUN_664c4790(local_64,local_14,&DAT_664ef958);
  do {
    if ((char)local_8 == -1) {
LAB_664bf2bd:
      this = operator_new(0x20);
      if (this == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_664bd4d0(this,param_1);
      }
      FUN_664be450(param_2,puVar4);
      FUN_664bb3e0((int *)local_14);
      FUN_664c4770(local_64);
      FUN_664c0180(local_48);
      return 0;
    }
    iVar2 = _stricmp(local_14[0],s_strength_664ef94c);
    if (iVar2 == 0) {
      piVar3 = FUN_664c4790(local_64,local_24,&DAT_664ef948);
      FUN_664bb570(local_14,piVar3);
      local_8 = piVar3[3];
      FUN_664bb3e0(local_24);
      iVar2 = _stricmp(local_14[0],&DAT_664ef940);
      if (iVar2 == 0) {
        param_1 = (char *)0x1;
        goto LAB_664bf2bd;
      }
    }
    piVar3 = FUN_664c4790(local_64,local_34,&DAT_664ef958);
    FUN_664bb570(local_14,piVar3);
    local_8 = piVar3[3];
    FUN_664bb3e0(local_34);
  } while( true );
}


