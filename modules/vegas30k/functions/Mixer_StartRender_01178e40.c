/* Module: vegas30k.dll
   Function: Mixer_StartRender
   Address: 01178e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_StartRender(struct tWAVEFORMATEX *,__int64,__int64,unsigned long) */

long Mixer_StartRender(tWAVEFORMATEX *param_1,__int64 param_2,__int64 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint in_stack_00000008;
  int *piVar7;
  uint local_550;
  int *local_54c;
  int local_548;
  undefined1 auStack_544 [4];
  undefined4 auStack_540 [5];
  undefined4 uStack_52c;
  undefined4 auStack_51c [4];
  undefined1 auStack_50c [8];
  uint local_504 [128];
  undefined1 auStack_304 [260];
  uint auStack_200 [128];
  
                    /* 0x178e40  242  ?Mixer_StartRender@@YGJPAUtWAVEFORMATEX@@_J1K@Z */
  local_550 = 0;
  local_548 = 0;
  local_54c = (int *)0x0;
  iVar1 = Mixer_Unprepare();
  if (iVar1 < 0) goto LAB_011790ad;
  local_550 = 0;
  (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8,local_504,&local_550);
  if (param_3._4_4_ == 0xffffffff) {
    param_3._4_4_ = 1;
    uVar2 = 2;
    if (1 < local_550) {
      puVar4 = local_504;
      iVar1 = local_550 - 1;
      do {
        puVar4 = puVar4 + 1;
        if ((*puVar4 & 0x80000000) != 0) {
          param_3._4_4_ = param_3._4_4_ | uVar2;
        }
        uVar2 = uVar2 << 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
LAB_01178f71:
    iVar1 = FUN_011790d0(param_1,param_3._4_4_);
    if (-1 < iVar1) {
      (**(code **)(*DAT_012b09c8 + 0x74))
                (DAT_012b09c8,in_stack_00000008 + param_2._4_4_,
                 (int)param_2 + (int)param_3 + (uint)CARRY4(in_stack_00000008,param_2._4_4_));
      (**(code **)(*DAT_012b09c8 + 0x1b8))(DAT_012b09c8,&local_548);
      uStack_52c = 0;
      iVar1 = (**(code **)(*DAT_012b09c8 + 0x1b4))(DAT_012b09c8,0xffffffff,0xffffffff,&local_550);
      if ((-1 < iVar1) &&
         (iVar1 = (**(code **)(*DAT_012b09c8 + 0xfc))(DAT_012b09c8,in_stack_00000008,(int)param_2),
         -1 < iVar1)) {
        iVar1 = (**(code **)(*DAT_012b09c8 + 0x114))(DAT_012b09c8,in_stack_00000008,(int)param_2);
        iVar3 = *DAT_012b09c8;
        if (iVar1 < 0) {
LAB_01179050:
          (**(code **)(iVar3 + 0x100))(DAT_012b09c8);
        }
        else {
          iVar1 = (**(code **)(iVar3 + 0x134))(DAT_012b09c8,in_stack_00000008,(int)param_2);
          if (iVar1 < 0) {
            (**(code **)(*DAT_012b09c8 + 0x118))(DAT_012b09c8);
            iVar3 = *DAT_012b09c8;
            goto LAB_01179050;
          }
          iVar1 = (**(code **)(*DAT_012b09c8 + 300))(DAT_012b09c8,in_stack_00000008,(int)param_2);
        }
        if (-1 < iVar1) goto LAB_011790ad;
      }
      (**(code **)(*DAT_012b09c8 + 0x130))(DAT_012b09c8);
      (**(code **)(*DAT_012b09c8 + 0x118))(DAT_012b09c8);
      (**(code **)(*DAT_012b09c8 + 0x100))(DAT_012b09c8);
      FUN_01179150();
    }
    if (local_548 != 0) {
      (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,auStack_200,local_550);
    }
  }
  else {
    iVar1 = (**(code **)(*DAT_012b09c8 + 0x2c))(DAT_012b09c8,auStack_540,auStack_304,0x104);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*DAT_012b09c4 + 0x4c))
                          (DAT_012b09c4,auStack_540[0],auStack_304,&local_54c), -1 < iVar1)) {
      puVar4 = local_504;
      puVar5 = auStack_200;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      piVar7 = DAT_012b09c8;
      (**(code **)(*DAT_012b09c8 + 0x28))(DAT_012b09c8,auStack_544);
      (**(code **)(*unaff_EBX + 0x20))(unaff_EBX,local_54c,auStack_50c,unaff_EBP);
      puVar6 = auStack_51c;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,auStack_51c,piVar7);
      local_548 = 1;
      goto LAB_01178f71;
    }
  }
  Mixer_Prepare();
LAB_011790ad:
  if (local_54c != (int *)0x0) {
    (**(code **)(*local_54c + 8))(local_54c);
  }
  return iVar1;
}


