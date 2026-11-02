/* Module: sdpp3260.dll
   Function: FUN_10006f00
   Address: 10006f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_10006f00(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int local_10 [3];
  
  FUN_100065e0(local_10);
  iVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))(*(int **)((int)this + 0xc));
  if (iVar2 < 1) {
    FUN_10006900(local_10,&DAT_10009744);
  }
  else {
    pcVar3 = operator_new(iVar2 * 2 + 4);
    pcVar5 = pcVar3;
    iVar4 = (**(code **)(**(int **)((int)this + 0xc) + 0x1c))(*(int **)((int)this + 0xc));
    FUN_10007500(iVar4,iVar2,(int)pcVar5);
    uVar6 = 0xffffffff;
    pcVar5 = pcVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar5 = *(char **)((int)this + 4);
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = operator_new(~uVar6 + ~uVar7 + 0x26);
    sprintf(pcVar5,&DAT_100095d4,pcVar3);
    FUN_10006900(local_10,pcVar5);
    operator_delete(pcVar5);
    operator_delete(pcVar3);
  }
  FUN_10006600(param_1,local_10);
  FUN_10006700(local_10);
  return param_1;
}


