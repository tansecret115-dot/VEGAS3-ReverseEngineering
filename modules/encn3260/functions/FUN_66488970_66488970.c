/* Module: encn3260.dll
   Function: FUN_66488970
   Address: 66488970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66488970(void *this,void *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  long local_c;
  undefined4 local_8;
  
  pbVar5 = &DAT_664e2538;
  pbVar2 = *(byte **)((int)param_1 + 0x34);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_664889aa:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_664889af;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_664889aa;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_664889af:
  if (iVar3 != 0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x24))(*(int **)((int)this + 0x68),0x80004005);
    return;
  }
  iVar3 = FUN_664bd670(param_1,s_RTP_Info_664e2480);
  iVar4 = 0;
  local_8 = 0;
  param_1 = (void *)0x0;
  local_c = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_664be4b0(iVar3);
  }
  if ((iVar4 == 0) && (*(int *)((int)this + 0x14a) == 0)) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x24))(*(int **)((int)this + 0x68),0x800400c0);
    return;
  }
  *(undefined4 *)((int)this + 0x14a) = 1;
  if (iVar4 != 0) {
    do {
      FUN_6648cd90(iVar4,(undefined2 *)&local_8,(undefined2 *)&param_1,&local_c);
      (**(code **)(*(int *)((int)this + 0x30) + 0xa0))((int *)((int)this + 0x30),local_8,param_1);
      iVar4 = FUN_664be4d0(iVar3);
    } while (iVar4 != 0);
  }
  if (*(int *)((int)this + 0x176) != 0) {
    (**(code **)(*(int *)this + 4))();
  }
  (**(code **)(**(int **)((int)this + 0x68) + 0x24))(*(int **)((int)this + 0x68),0);
  return;
}


