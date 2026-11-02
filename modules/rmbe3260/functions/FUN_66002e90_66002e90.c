/* Module: rmbe3260.dll
   Function: FUN_66002e90
   Address: 66002e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_66002e90(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  CPNDialog local_e8 [216];
  undefined1 local_10 [4];
  undefined4 *local_c;
  int *local_8;
  
  piVar2 = param_1;
  bVar1 = false;
  if (param_1[6] == 0x112) {
    if (*(short *)((int)this + 0x11c) == 0) {
      if (param_1[3] == 4) {
        param_1 = (int *)0x0;
        local_c = (undefined4 *)0x0;
        local_8 = (int *)0x0;
        (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                  (*(int **)((int)this + 0x104),DAT_66075000,&param_1);
        (**(code **)(*param_1 + 0x10))(param_1,0xc,&local_c);
        (**(code **)*local_c)(local_c,&DAT_66065c38,&local_8);
        (**(code **)(*local_8 + 0x1c))(local_8,local_10);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        FUN_66002fa0((int)this);
        FUN_6600a740(local_e8,*(CPNWindow **)((int)this + 0xe4));
        CPNDialog::DoModal(local_e8);
        FUN_6600a7a0(local_e8);
      }
    }
    else {
      FUN_66002fa0((int)this);
    }
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_660014e0(this,(int)piVar2);
  }
  return;
}


