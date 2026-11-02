/* Module: rmme3260.dll
   Function: FUN_662103a0
   Address: 662103a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662103a0(void *this,char *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int local_18 [3];
  int *local_c;
  char local_5;
  
  pcVar10 = param_1;
  iVar11 = 0;
  local_c = (int *)0x0;
  if (*(int *)((int)this + 0xf4) != 0) {
    do {
      puVar2 = FUN_66250280(local_18,*(char **)(iVar11 + 0x10 + *(int *)((int)this + 0x100)));
      iVar3 = _stricmp((char *)*puVar2,param_1);
      local_5 = iVar3 == 0;
      FUN_66250210(local_18);
      if (local_5 != '\0') {
        iVar6 = 0;
        iVar3 = *(int *)(iVar11 + *(int *)((int)this + 0x100));
        if (0 < iVar3) {
          puVar9 = *(ushort **)(iVar11 + *(int *)((int)this + 0x100) + 4);
          do {
            if (param_2 == *puVar9) {
              if (param_3 == 0) {
                return 0;
              }
              iVar11 = FUN_66225600((void *)((int)this + 0x128),
                                    CONCAT22((short)((uint)*(int *)((int)this + 0x100) >> 0x10),
                                             *(undefined2 *)
                                              (*(int *)(*(int *)((int)this + 0x100) + 4 +
                                                       (int)local_c * 0x14) + 2 + iVar6 * 4)),1);
              return iVar11;
            }
            iVar6 = iVar6 + 1;
            puVar9 = puVar9 + 2;
          } while (iVar6 < iVar3);
        }
      }
      local_c = (int *)((int)local_c + 1);
      iVar11 = iVar11 + 0x14;
    } while (local_c < *(uint *)((int)this + 0xf4));
  }
  piVar4 = FUN_662090e0(param_1);
  local_c = piVar4;
  if (piVar4 == (int *)0x0) {
    param_1 = (char *)0x80040082;
  }
  else {
    param_1 = (char *)(**(code **)(*(int *)this + 0x74))(piVar4,param_2);
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(*(int *)((int)this + 0x100) + -8 + *(int *)((int)this + 0xf4) * 0x14) = 1;
    uVar7 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pvVar5 = operator_new(~uVar7);
    *(void **)(*(int *)((int)this + 0x100) + -4 + *(int *)((int)this + 0xf4) * 0x14) = pvVar5;
    pcVar13 = *(char **)(*(int *)((int)this + 0x100) + -4 + *(int *)((int)this + 0xf4) * 0x14);
    if (pcVar13 == (char *)0x0) {
      param_1 = (char *)0x8007000e;
    }
    else {
      uVar7 = 0xffffffff;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar12 + -uVar7;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (param_3 != 0) {
        param_1 = (char *)FUN_66225600((void *)((int)this + 0x128),
                                       CONCAT22((short)((uint)(*(int *)((int)this + 0xf4) * 5) >>
                                                       0x10),
                                                *(undefined2 *)
                                                 (*(int *)(*(int *)((int)this + 0x100) + -0x10 +
                                                          *(int *)((int)this + 0xf4) * 0x14) + 2)),0
                                      );
      }
    }
    piVar4 = local_c;
    if (param_1 == (char *)0x0) goto LAB_6621052f;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)(1);
  }
LAB_6621052f:
  *(char **)((int)this + 0x24) = param_1;
  return (int)param_1;
}


