/* Module: rmbe3260.dll
   Function: FUN_6603e560
   Address: 6603e560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e560(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined3 extraout_var;
  byte *pbVar7;
  int iVar8;
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0x44) == 0) {
    FUN_6603e330(this);
  }
  if (param_1 != 0) {
    FUN_6605c550(*(void **)(param_1 + 8),param_1);
  }
  if (*(int *)((int)this + 0x78) != 0) {
    param_2 = 0;
  }
  piVar5 = (int *)FUN_6603e7a0(this,param_2);
  local_c = 0;
  while (piVar5 != (int *)0x0) {
    if (*(int **)((int)this + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x18) + 0x2c))(piVar5 + 5,piVar5[3],piVar5[4]);
    }
    if (*(int *)((int)this + 0x20) != 0) {
      iVar8 = *(int *)((int)this + 0xa8);
      uVar2 = piVar5[5];
      puVar1 = (uint *)(piVar5 + 5);
      param_1 = 0;
      if (((iVar8 != 0) && (*(int *)(iVar8 + 0x10) != 0)) && (*(int *)(iVar8 + 0x14) != 0)) {
        piVar3 = *(int **)((int)this + 0x80);
        if ((piVar3 != (int *)0x0) && (*(int *)((int)this + 0xac) == 0)) {
          (**(code **)(*piVar3 + 0xc))
                    (piVar3,s_Clock_Start_Time_6606dd14,*(undefined4 *)(iVar8 + 0x18));
          *(undefined4 *)((int)this + 0xac) = 1;
        }
        uVar6 = *puVar1;
        param_1 = *(uint *)(*(int *)((int)this + 0xa8) + 0x18);
        if (uVar6 < param_1) {
          uVar6 = (uVar6 - param_1) - 1;
        }
        else {
          uVar6 = uVar6 - param_1;
        }
        uVar6 = -(uint)(uVar6 < 86400000) & uVar6;
        *puVar1 = uVar6;
        iVar8 = *(int *)((int)this + 0xa8);
        if ((*(int *)(iVar8 + 4) != 0) && (*(int *)((int)piVar5 + 0x1e) == 0)) {
          if ((*(byte *)(piVar5 + 7) & 2) == 0) {
            *puVar1 = *(uint *)(iVar8 + 8);
          }
          else {
            *(uint *)(iVar8 + 8) = uVar6;
          }
        }
      }
      if (*(int *)((int)piVar5 + 0x1e) == 0) {
        iVar8 = (**(code **)(**(int **)((int)this + 0x20) + 0x2c))(puVar1,piVar5[3],piVar5[4]);
        if (iVar8 != 0) {
          local_c = 0xffc1;
        }
      }
      else {
        local_8 = 0;
        bVar4 = FUN_66042a20((byte *)piVar5[3],piVar5[4]);
        if ((CONCAT31(extraout_var,bVar4) == 0) || (param_1 == 0)) {
          local_8 = piVar5[4];
          pbVar7 = (byte *)piVar5[3];
          bVar4 = false;
        }
        else {
          bVar4 = true;
          pbVar7 = operator_new(piVar5[4] << 1);
          FUN_66042a70((byte *)piVar5[3],piVar5[4],uVar2,param_1,0,pbVar7,piVar5[4] * 2,&local_8);
        }
        iVar8 = (**(code **)(**(int **)((int)this + 0x20) + 0x2c))(piVar5 + 5,pbVar7,local_8);
        if (iVar8 != 0) {
          local_c = 0xffc1;
        }
        if ((bVar4) && (pbVar7 != (byte *)0x0)) {
          operator_delete(pbVar7);
        }
      }
    }
    if (piVar5[3] != 0) {
      (**(code **)(*(int *)piVar5[1] + 0x1c))(piVar5[3]);
      piVar5[3] = 0;
    }
    iVar8 = *piVar5;
    lpCriticalSection = (LPCRITICAL_SECTION)(iVar8 + 0x2c);
    EnterCriticalSection(lpCriticalSection);
    FUN_6605c550((void *)(iVar8 + 0x14),piVar5);
    LeaveCriticalSection(lpCriticalSection);
    piVar5 = (int *)FUN_6603e7a0(this,param_2);
  }
  return local_c;
}


