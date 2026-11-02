/* Module: encn3260.dll
   Function: FUN_664cf670
   Address: 664cf670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664cf670(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_18 = (char *)0x0;
  local_1c = (char *)0x0;
  local_20 = (char *)0x0;
  local_24 = 0;
  local_10 = FUN_664cfd10((undefined4 *)param_1[7]);
  if ((local_10 == 0) && (local_10 = FUN_664cf5e0(param_1,&local_c), local_10 == 0)) {
    iVar2 = (**(code **)*local_c)(local_c,&DAT_664dcd10,&local_8);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*local_8 + 0xc))(local_8,param_1,&local_18,&local_1c,&local_20,&local_24)
      ;
      if (iVar2 == 0) {
        if (*param_1 == 0) {
          param_1[1] = 1;
        }
        else {
          local_14 = (int *)0x0;
          iVar2 = (**(code **)*local_c)(local_c,&DAT_664dcd80,&local_14);
          if (iVar2 == 0) {
            (**(code **)(*local_14 + 0xc))(local_14,param_1 + 1);
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 8))(local_14);
            }
          }
          else {
            param_1[1] = 0;
          }
        }
        uVar4 = 0xffffffff;
        pcVar3 = local_18;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = operator_new(~uVar4);
        uVar4 = 0xffffffff;
        param_1[3] = (int)pcVar3;
        pcVar6 = local_18;
        do {
          pcVar7 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar7 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar3 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar3 = local_1c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = operator_new(~uVar4);
        uVar4 = 0xffffffff;
        param_1[4] = (int)pcVar3;
        pcVar6 = local_1c;
        do {
          pcVar7 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar7 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar3 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar3 = local_20;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = operator_new(~uVar4);
        uVar4 = 0xffffffff;
        param_1[5] = (int)pcVar3;
        pcVar6 = local_20;
        do {
          pcVar7 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar7 + -uVar4;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar3 + 1;
        }
      }
      else {
        local_10 = 8;
      }
    }
    else {
      local_10 = 8;
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return local_10;
}


