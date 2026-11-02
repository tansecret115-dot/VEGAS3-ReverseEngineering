/* Module: rmme3260.dll
   Function: FUN_662621f0
   Address: 662621f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662621f0(void *this,void *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (char *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if (param_1 == (void *)0x0) {
    param_1 = (void *)0x8;
    pvVar2 = param_1;
  }
  else {
    pvVar2 = (void *)FUN_66263580(param_1,&local_c);
    if (pvVar2 == (void *)0x0) {
      iVar3 = (**(code **)*local_c)(local_c,&DAT_6626aa98,&local_8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*local_8 + 0xc))(local_8,&local_10);
        pcVar7 = local_10;
        if (iVar3 == 0) {
          uVar5 = 0xffffffff;
          pcVar4 = local_10;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = operator_new(~uVar5);
          uVar5 = 0xffffffff;
          do {
            pcVar8 = pcVar7;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar7 = pcVar8 + -uVar5;
          pcVar8 = pcVar4;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          *(char **)this = pcVar4;
          *(void **)((int)this + 4) = param_1;
          FUN_66263520((int)param_1);
        }
        else {
          param_1 = (void *)0xa;
          pvVar2 = param_1;
        }
      }
      else {
        param_1 = (void *)0x8;
        pvVar2 = param_1;
      }
    }
  }
  param_1 = pvVar2;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return (int)param_1;
}


