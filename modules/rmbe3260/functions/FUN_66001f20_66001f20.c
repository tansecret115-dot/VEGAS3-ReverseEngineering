/* Module: rmbe3260.dll
   Function: FUN_66001f20
   Address: 66001f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66001f20(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  CPNDialog local_f8 [216];
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  bVar2 = false;
  piVar6 = (int *)0x0;
  local_10 = (undefined4 *)((int)this + 0x152);
  local_14 = &DAT_6606c058;
  do {
    if (*(int *)(param_1 + 0x18) == *local_14) {
      if (*(int *)(param_1 + 0xc) == 2) {
        if (*(short *)((int)this + 0x11c) == 0) {
          local_8 = (int *)0x0;
          local_c = (int *)0x0;
          (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                    (*(int **)((int)this + 0x104),DAT_66075000,&local_8);
          iVar5 = *local_8;
          uVar3 = (**(code **)(iVar5 + 0xc))
                            (local_8,*(undefined4 *)((int)this + 0x118),piVar6,&local_c);
          (**(code **)(iVar5 + 0x10))(local_8,uVar3);
          (**(code **)(*local_c + 0xc))(local_c,&local_20);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
          FUN_66002b00(this,local_20,local_1c,(uint *)&local_18);
          FUN_66002150(this,piVar6,local_18,(int *)0x0);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          FUN_6600a740(local_f8,*(CPNWindow **)((int)this + 0xe4));
          CPNDialog::DoModal(local_f8);
          FUN_6600a7a0(local_f8);
          bVar2 = true;
        }
        else {
          iVar5 = (**(code **)(*(int *)*local_10 + 0x134))();
          FUN_66002570(this,(int)piVar6,iVar5);
          bVar2 = true;
        }
      }
      else if ((*(int *)(param_1 + 0x18) == *local_14) && (*(int *)(param_1 + 0xc) == 4)) {
        piVar4 = *(int **)(*(int *)((int)this + 0xe4) + 0xf4);
        piVar1 = *(int **)(*(int *)((int)this + 0xe4) + 0xf8);
        if (((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 0x94))(), iVar5 == 0)) &&
           ((piVar1 == (int *)0x0 || (iVar5 = (**(code **)(*piVar1 + 0x94))(), iVar5 == 0)))) {
          piVar4 = (int *)(**(code **)(*(int *)*local_10 + 0x134))();
          FUN_66002150(this,piVar6,piVar4,(int *)0x1);
        }
        bVar2 = true;
      }
    }
    local_14 = local_14 + 1;
    piVar6 = (int *)((int)piVar6 + 1);
    local_10 = local_10 + 1;
  } while ((int)local_14 < 0x6606c068);
  if (bVar2) {
    return;
  }
  iVar5 = -1;
  if (*(int *)(param_1 + 8) == -0x80000000) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  bVar2 = false;
  if (iVar5 != 1) goto LAB_66002132;
  if (*(int *)(param_1 + 0x18) == 0x4fb) {
    piVar6 = *(int **)((int)this + 0x40e);
    *(undefined4 *)((int)this + 0x118) = 0;
    if (piVar6 != (int *)0x0) {
      iVar5 = *piVar6;
      uVar3 = 0;
LAB_66002119:
      (**(code **)(iVar5 + 0x44))(piVar6,uVar3);
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0x4fc) goto LAB_66002132;
    piVar6 = *(int **)((int)this + 0x40e);
    *(undefined4 *)((int)this + 0x118) = 2;
    if (piVar6 != (int *)0x0) {
      iVar5 = *piVar6;
      uVar3 = 1;
      goto LAB_66002119;
    }
  }
  (**(code **)(*(int *)this + 0x180))(DAT_66075000);
  bVar2 = true;
LAB_66002132:
  if (!bVar2) {
    FUN_660014e0(this,param_1);
  }
  return;
}


