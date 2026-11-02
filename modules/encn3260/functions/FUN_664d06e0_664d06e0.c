/* Module: encn3260.dll
   Function: FUN_664d06e0
   Address: 664d06e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664d06e0(int *param_1,int *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  char *local_38 [3];
  char *local_2c [3];
  char *local_20 [3];
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_664bb2c0(local_20);
  if ((param_1 == (int *)0x0) || (*param_2 == 0)) {
    local_8 = 0x80004005;
  }
  else {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
    pcVar2 = strtok(pcVar2,&DAT_664e258c);
    while (pcVar2 != (char *)0x0) {
      bVar1 = true;
      FUN_664bb5e0(local_20,pcVar2);
      puVar3 = operator_new(4);
      FUN_664bbbc0((int *)local_20);
      FUN_664bbb60((int *)local_20);
      uVar4 = FUN_664bb950(local_20,'-');
      if (uVar4 == 0xffffffff) {
        uVar4 = atoi(local_20[0]);
        local_10 = *param_2;
        local_14 = *(int *)(local_10 + 4);
        if (local_14 != 0) {
          local_c = uVar4 & 0xffff;
          uVar8 = local_c + 1;
          puVar6 = (ushort *)0x0;
          if (local_14 == 0) goto LAB_664d07aa;
          do {
            puVar5 = (undefined4 *)FUN_664bab80(local_14);
            puVar6 = (ushort *)*puVar5;
LAB_664d07aa:
            if (*puVar6 == uVar8) {
              *puVar6 = (ushort)uVar4;
LAB_664d07cd:
              bVar1 = false;
            }
            else if (puVar6[1] + 1 == local_c) {
              puVar6[1] = (ushort)uVar4;
              goto LAB_664d07cd;
            }
            FUN_664bab40(&local_14);
          } while (local_14 != 0);
        }
        if (bVar1) {
          iVar7 = atoi(local_20[0]);
          *puVar3 = (short)iVar7;
          iVar7 = atoi(local_20[0]);
          puVar3[1] = (short)iVar7;
          FUN_664baab0((void *)*param_2,puVar3);
        }
        else if (puVar3 != (undefined2 *)0x0) {
          operator_delete(puVar3);
        }
      }
      else {
        FUN_664bbab0(local_20,local_38,uVar4);
        FUN_664bba50(local_20,local_2c,(*(int *)(local_20[0] + -8) - uVar4) - 1);
        FUN_664bbb60((int *)local_38);
        FUN_664bbbc0((int *)local_2c);
        iVar7 = atoi(local_38[0]);
        *puVar3 = (short)iVar7;
        iVar7 = atoi(local_2c[0]);
        puVar3[1] = (short)iVar7;
        FUN_664baab0((void *)*param_2,puVar3);
        FUN_664bb3e0((int *)local_2c);
        FUN_664bb3e0((int *)local_38);
      }
      pcVar2 = strtok((char *)0x0,&DAT_664e258c);
    }
  }
  FUN_664bb3e0((int *)local_20);
  return local_8;
}


