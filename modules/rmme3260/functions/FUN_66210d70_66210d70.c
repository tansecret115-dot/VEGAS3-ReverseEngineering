/* Module: rmme3260.dll
   Function: FUN_66210d70
   Address: 66210d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66210d70(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  
  piVar2 = FUN_662090e0(param_1);
  if (piVar2 == (int *)0x0) {
    local_8 = -0x7ffbff7e;
  }
  else {
    local_8 = (**(code **)(*(int *)this + 0x6c))(piVar2,param_2);
  }
  if (local_8 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x108) + -0x1e + *(int *)((int)this + 0x104) * 0x26) = 1;
    uVar4 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pvVar3 = operator_new(~uVar4);
    *(void **)(*(int *)((int)this + 0x108) + -0x1a + *(int *)((int)this + 0x104) * 0x26) = pvVar3;
    pcVar8 = *(char **)(*(int *)((int)this + 0x108) + -0x1a + *(int *)((int)this + 0x104) * 0x26);
    if (pcVar8 == (char *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar6 = param_1;
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
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      (**(code **)(*(int *)this + 0x78))(param_1,param_2,1);
    }
    if (local_8 == 0) goto LAB_66210e60;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
LAB_66210e60:
  *(int *)((int)this + 0x24) = local_8;
  return;
}


