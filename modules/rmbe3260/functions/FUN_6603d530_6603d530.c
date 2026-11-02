/* Module: rmbe3260.dll
   Function: FUN_6603d530
   Address: 6603d530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603d530(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_14 [3];
  LPCRITICAL_SECTION local_8;
  
  local_8 = (LPCRITICAL_SECTION)((int)this + 0x7c);
  EnterCriticalSection(local_8);
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_6603eaf0(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)((int)this + 0x24);
  FUN_6605cf30((void *)((int)this + 8),*(int *)((int)this + 0xc),iVar2);
  piVar3 = FUN_6603ed00(param_1,iVar2,(int)this + 100);
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)(iVar2 + 4) = 1;
    *param_2 = 0;
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
  }
  else {
    *param_2 = piVar3;
    if (*(int *)((int)this + 0x5c) != 0) {
      FUN_6605b650(local_14);
      iVar2 = *piVar3;
      uVar5 = 0xff;
      iVar4 = FUN_6605bc10(local_14,0xff);
      (**(code **)(iVar2 + 0x38))(iVar4,uVar5);
      FUN_6605bc90(local_14,-1);
      FUN_6603d830(*(void **)((int)this + 0x5c),local_14[0]);
      FUN_6605b770((int *)local_14);
    }
    uVar5 = 0;
  }
  LeaveCriticalSection(local_8);
  return uVar5;
}


