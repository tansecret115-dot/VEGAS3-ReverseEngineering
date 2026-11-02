/* Module: rmme3260.dll
   Function: FUN_66231fd0
   Address: 66231fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66231fd0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_4c [9];
  GUID local_28;
  char *local_18 [3];
  int local_c;
  int local_8;
  
  FUN_662650f0(local_4c);
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_662651a0(local_4c);
    return;
  }
  iVar2 = FUN_662652b0(&local_28);
  local_8 = iVar2;
  if (iVar2 == 0) {
    FUN_662500f0(local_18);
    FUN_662652d0(&local_28.Data1,local_18);
    local_c = *(int *)(local_18[0] + -8);
    pcVar3 = operator_new(local_c + 1);
    *(char **)(param_1 + 0x68) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_8 = -0x7ff8fff2;
      iVar2 = -0x7ff8fff2;
    }
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
      do {
        pcVar7 = local_18[0];
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = local_18[0] + 1;
        cVar1 = *local_18[0];
        local_18[0] = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar7 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *(undefined1 *)(local_c + *(int *)(param_1 + 0x68)) = 0;
      iVar2 = local_8;
      if (local_8 != 0) goto LAB_66232083;
    }
    else {
LAB_66232083:
      if (*(void **)(param_1 + 0x68) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0x68));
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    FUN_66250210((int *)local_18);
    if (iVar2 == 0) goto LAB_66232107;
  }
  DVar4 = GetTickCount();
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  pcVar3 = operator_new(0x11);
  *(char **)(param_1 + 0x68) = pcVar3;
  uVar5 = sprintf(pcVar3,&DAT_6626fc8c,DVar4);
  if ((ushort)uVar5 < 0x10) {
    uVar5 = uVar5 & 0xffff;
    iVar2 = 0x10 - uVar5;
    do {
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + -1;
      *(undefined1 *)(*(int *)(param_1 + 0x68) + -1 + uVar5) = 0x31;
    } while (iVar2 != 0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x68) + 0x10) = 0;
LAB_66232107:
  FUN_662651a0(local_4c);
  return;
}


