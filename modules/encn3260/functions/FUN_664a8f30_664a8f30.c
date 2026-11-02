/* Module: encn3260.dll
   Function: FUN_664a8f30
   Address: 664a8f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664a8f30(void *this,char *param_1,HBITMAP param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_128 [256];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar4 = FUN_664a3360(param_1,&local_10,&local_c,&local_18);
  if (iVar4 == 0) {
    iVar4 = (**(code **)**(undefined4 **)((int)this + 0x94))
                      (*(undefined4 **)((int)this + 0x94),&DAT_664dcb00,&local_14);
    if (iVar4 == 0) {
      local_20 = *(undefined4 *)((int)this + 0xac);
      local_1c = *(undefined4 *)((int)this + 0xb0);
      (**(code **)(*(int *)this + 0x2c))(this,&local_28);
      iVar4 = GetSystemMetrics(0);
      iVar5 = GetSystemMetrics(1);
      (**(code **)(*(int *)this + 0x30))(this,iVar4,iVar5);
      (**(code **)(*(int *)this + 0x28))(this,0,0);
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)FUN_664bad50(puVar6);
      }
      uVar7 = 0xffffffff;
      pcVar9 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      (**(code **)(*local_8 + 0x10))(local_8,param_1,~uVar7);
      uVar7 = 0xffffffff;
      pcVar9 = s_FullScreenData_664e3274;
      do {
        pcVar11 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar11 + -uVar7;
      pcVar11 = local_128;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_664e32e0;
      do {
        pcVar11 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pcVar9 = local_128;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      pcVar9 = pcVar11 + -uVar7;
      pcVar11 = pcVar10 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar9 = s_PreferedMode_664e32d0;
      do {
        pcVar11 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pcVar9 = local_128;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      pcVar9 = pcVar11 + -uVar7;
      pcVar11 = pcVar10 + -1;
      for (uVar8 = uVar7 >> 2; piVar1 = local_14, uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; piVar3 = local_8, uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1,local_128,local_8);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar1 = (int *)((int)this + 0x18);
      (**(code **)(*(int *)((int)this + 0x18) + 0xc))(piVar1);
      uVar7 = FUN_664a9110(this,param_2,param_3);
      (**(code **)(*piVar1 + 0x10))(piVar1);
      (**(code **)(*(int *)this + 0x30))(this,local_20,local_1c);
      (**(code **)(*(int *)this + 0x28))(this,local_28,local_24);
      if (uVar7 != 0) {
        FUN_664aa400(this,local_10,local_c,local_18,uVar7,(uint)(0x1e < (int)uVar7),1);
      }
    }
  }
  return 0;
}


