/* Module: sfmarket2.dll
   Function: FUN_00412da0
   Address: 00412da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00412da0(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  undefined2 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  int iStack_48;
  undefined2 auStack_44 [2];
  undefined2 local_40 [2];
  int iStack_3c;
  undefined2 uStack_34;
  undefined1 auStack_30 [12];
  undefined2 uStack_24;
  undefined4 uStack_1c;
  undefined2 uStack_14;
  
  local_64 = 0;
  local_68 = 0;
  local_5c = param_1;
  iVar1 = FUN_00412980(*(int *)(param_1 + 0x74),&local_64,&local_68);
  if (-1 < iVar1) {
    local_40[0] = 0;
    FUN_00413860(local_40);
    local_40[0] = 8;
    iStack_3c = Ordinal_2();
    if (iStack_3c == 0) {
      auStack_44[0] = 10;
      iStack_3c = -0x7ff8fff2;
    }
    uStack_24 = 3;
    uStack_1c = 2;
    uStack_14 = 0;
    uStack_34 = 0;
    uStack_54 = (uint)uStack_54._2_2_ << 0x10;
    iVar1 = Ordinal_9();
    if (iVar1 < 0) {
      iStack_50 = iVar1;
    }
    uStack_58 = 8;
    uStack_54 = Ordinal_2();
    if (uStack_54 == 0) {
      local_5c = CONCAT22(local_5c._2_2_,10);
      uStack_54 = -0x7ff8fff2;
    }
    uStack_60 = 0;
    iVar1 = Ordinal_15(0x11,1);
    if (iVar1 == 0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar2 = Ordinal_23(iVar1,&stack0xffffff88);
      if (-1 < iVar2) {
        puVar4 = &local_64;
        puVar5 = &uStack_54;
        for (iVar2 = 0x1258db; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        Ordinal_24(iVar1);
      }
      iStack_50 = CONCAT22(iStack_50._2_2_,0x2000);
      iStack_48 = iVar1;
      iVar1 = (**(code **)(*(int *)u_http___stats_sonicfoundry_com_al_004a73d8._80_4_ + 0xd0))
                        (u_http___stats_sonicfoundry_com_al_004a73d8._80_4_,&uStack_60,local_40,
                         auStack_30,&iStack_50,&stack0xffffff90);
    }
    pvVar3 = GlobalHandle(&uStack_54);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(&uStack_54);
    GlobalFree(pvVar3);
    Ordinal_9(&local_68);
    Ordinal_9(auStack_4c);
    Ordinal_9(auStack_30);
    Ordinal_9(auStack_44);
    Ordinal_9(&local_68);
  }
  return iVar1;
}


