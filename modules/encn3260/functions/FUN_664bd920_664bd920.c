/* Module: encn3260.dll
   Function: FUN_664bd920
   Address: 664bd920
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664bd920(void *this,void *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_10 [3];
  
  pcVar3 = *(char **)((int)this + 0x34);
  pcVar2 = (char *)(**(code **)(*(int *)this + 8))();
  uVar7 = 0xffffffff;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new(~uVar7 + ~uVar8 + 0x4e);
  uVar4 = (**(code **)(*(int *)this + 8))
                    (*(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 4),
                     *(undefined4 *)((int)this + 8));
  sprintf(pcVar3,s__s__s_RTSP__d__d_664ef798,uVar4);
  FUN_664bb450(local_10,pcVar3);
  operator_delete(pcVar3);
  piVar5 = (int *)FUN_664bd7a0((int)this);
  while (piVar5 != (int *)0x0) {
    FUN_664bb810(local_10,(char *)piVar5[1]);
    FUN_664bb810(local_10,&DAT_664ef794);
    (**(code **)(*piVar5 + 4))(local_10);
    piVar5 = (int *)FUN_664bd7c0((int)this);
  }
  FUN_664bb810(local_10,&DAT_664e3044);
  iVar6 = FUN_664bd810((int)this);
  if (0 < iVar6) {
    FUN_664bb810(local_10,*(char **)((int)this + 0x10));
  }
  FUN_664bb2e0(param_1,local_10);
  FUN_664bb3e0(local_10);
  return param_1;
}


