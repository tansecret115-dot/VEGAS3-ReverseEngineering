/* Module: encn3260.dll
   Function: FUN_664bfdc0
   Address: 664bfdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664bfdc0(char *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int local_5c [6];
  int local_44;
  undefined4 local_40 [5];
  int local_2c [4];
  char *local_1c [3];
  int local_10;
  uint local_c;
  void *local_8;
  
  for (pcVar6 = param_1;
      (((cVar1 = *pcVar6, cVar1 == '\n' || (cVar1 == '\r')) || (cVar1 == ' ')) || (cVar1 == '\t'));
      pcVar6 = pcVar6 + 1) {
  }
  local_c = (int)pcVar6 - (int)param_1;
  if (param_2 < local_c) {
    return 0;
  }
  FUN_664c45c0(local_40,(undefined4 *)pcVar6,param_2 - local_c);
  FUN_664c4750(local_5c,local_40);
  FUN_664bb450(local_1c,&DAT_664f05c4);
  bVar2 = false;
  local_10 = -1;
  param_1 = (char *)0x0;
  do {
    piVar3 = FUN_664c4790(local_5c,local_2c,&DAT_664e3610);
    FUN_664bb570(local_1c,piVar3);
    local_10 = piVar3[3];
    FUN_664bb3e0(local_2c);
    if ((char)local_10 == '\n') {
      if (bVar2) {
        bVar2 = false;
        iVar7 = 0;
        if (0 < *(int *)(local_1c[0] + -8)) {
          do {
            iVar4 = isspace((int)local_1c[0][iVar7]);
            if (iVar4 == 0) {
              bVar2 = true;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(local_1c[0] + -8));
        }
        if (!bVar2) {
          if (*(int *)(local_44 + 0xc) == 0) {
            param_1 = *(char **)(local_44 + 8);
          }
          else {
            param_1 = (char *)(*(int *)(local_44 + 8) + -1);
          }
          goto LAB_664bfeeb;
        }
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    this = operator_new(0xc);
    if (this == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_664bb450(this,local_1c[0]);
    }
    FUN_664baab0(local_8,puVar5);
    if ((char)local_10 == -1) {
LAB_664bfeeb:
      if (param_1 != (char *)0x0) {
        FUN_664bb3e0((int *)local_1c);
        FUN_664c4770(local_5c);
        FUN_664c0180(local_40);
        return (int)(param_1 + local_c);
      }
      FUN_664bb3e0((int *)local_1c);
      FUN_664c4770(local_5c);
      FUN_664c0180(local_40);
      return 0;
    }
  } while( true );
}


