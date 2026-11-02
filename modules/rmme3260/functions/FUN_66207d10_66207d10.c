/* Module: rmme3260.dll
   Function: FUN_66207d10
   Address: 66207d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66207d10(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_16;
  int *local_c;
  
  piVar6 = param_2;
  if ((param_2[1] == 0) || (*param_2 == 0)) {
    return -0x7ff8ffa9;
  }
  iVar5 = 0;
  if (param_1[0x1b] == 0) {
    iVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar5 < 0) {
      return iVar5;
    }
    param_1[0x1b] = 1;
  }
  if (-1 < iVar5) {
    puVar1 = (undefined1 *)piVar6[1];
    if (((puVar1 != (undefined1 *)0x0) && (*piVar6 != 0)) && (CONCAT11(*puVar1,puVar1[1]) == 0)) {
      local_16 = (uint)(byte)puVar1[0xb];
    }
    local_c = (int *)CONCAT22(local_c._2_2_,DAT_6626b238);
    piVar2 = operator_new((uint)DAT_6626b238 << 2);
    if (piVar2 != (int *)0x0) {
      param_2 = local_c;
      iVar4 = 0;
      if (0 < param_1[0xf]) {
        do {
          param_2 = local_c;
          piVar3 = *(int **)(param_1[0xe] + iVar4 * 4);
          iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,piVar6[1],*piVar6,piVar2,&param_2);
          if ((iVar5 < 0) || (iVar5 != 0x40012)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[0xf]);
      }
      if (-1 < iVar5) {
        local_c = (int *)0x0;
        if ((short)param_2 != 0) {
          piVar6 = piVar2;
          do {
            piVar3 = (int *)FUN_66249ad0(param_1 + 0x16);
            iVar5 = (**(code **)(*piVar3 + 0x18))(piVar3,*piVar6,local_16 >> 1 & 1);
            piVar3 = (int *)*piVar6;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
              *piVar6 = 0;
            }
            if (iVar5 < 0) break;
            local_c = (int *)((int)local_c + 1);
            piVar6 = piVar6 + 1;
          } while ((int)local_c < (int)((uint)param_2 & 0xffff));
        }
      }
      operator_delete(piVar2);
      return iVar5;
    }
    iVar5 = -0x7ff8fff2;
  }
  return iVar5;
}


