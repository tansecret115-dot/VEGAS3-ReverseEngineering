/* Module: encn3260.dll
   Function: FUN_6648ad90
   Address: 6648ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6648ad90(void *this,int *param_1,void *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int *param_7,int *param_8)

{
  char cVar1;
  undefined4 *puVar2;
  int *this_00;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  (**(code **)(**(int **)((int)this + 0x20) + 4))();
  puVar2 = operator_new(0x72);
  if (puVar2 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_6648afe0(puVar2);
  }
  (**(code **)(*this_00 + 4))(this_00);
  uVar5 = 0xffffffff;
  *(undefined4 *)((int)this_00 + 0x12) = param_5;
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  pcVar7 = param_3;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)((int)this_00 + 0x16) = pcVar3;
  if (param_6 != 0) {
    this_00[2] = param_6;
    if (param_2 != (void *)0x0) {
      FUN_6648a800(param_2,this_00 + 3,(undefined2 *)(this_00 + 4));
    }
  }
  this_00[9] = (int)param_7;
  if (param_7 == (int *)0x0) {
    *(undefined2 *)((int)this_00 + 0x1a) = (undefined2)param_4;
  }
  else {
    *(undefined2 *)((int)this_00 + 0x1a) = param_8._0_2_;
  }
  FUN_664baab0((void *)((int)this + 8),this_00);
  iVar4 = FUN_6648b2f0(this_00,param_1,(int)param_2,param_3,param_4,param_7,param_8);
  (**(code **)(**(int **)((int)this + 0x20) + 8))();
  return iVar4;
}


