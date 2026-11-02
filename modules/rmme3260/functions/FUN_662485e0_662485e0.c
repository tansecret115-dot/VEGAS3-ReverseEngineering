/* Module: rmme3260.dll
   Function: FUN_662485e0
   Address: 662485e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662485e0(void *this,int param_1,int param_2,RECT *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  code *local_8;
  
  piVar7 = param_4;
  iVar6 = param_2;
  local_18 = 0x80004005;
  piVar8 = (int *)FUN_6624f7a0(param_2);
  local_1c = piVar8;
  local_c = FUN_6624fae0(param_2);
  local_8 = (code *)FUN_66246030(DAT_6627d0f0,piVar8,*(undefined4 *)((int)this + 0x2c));
  local_14 = param_3->right - param_3->left;
  local_10 = param_3->bottom - param_3->top;
  piVar8 = param_4 + 1;
  piVar1 = param_4 + 3;
  piVar2 = (int *)(param_2 + 4);
  param_2 = param_4[2] - *param_4;
  if (*piVar2 < param_4[2] - *param_4) {
    param_2 = *piVar2;
  }
  param_4 = (int *)(*piVar1 - *piVar8);
  if ((int)*(int **)(iVar6 + 8) < *piVar1 - *piVar8) {
    param_4 = *(int **)(iVar6 + 8);
  }
  if (local_8 == (code *)0x0) {
    return local_18;
  }
  FUN_662408b0(*(int *)((int)this + 0xc));
  if (((local_1c == (int *)0xa) || ((-1 < (int)local_1c && ((int)local_1c < 5)))) &&
     ((*piVar7 != 0 || (piVar7[1] != 0)))) {
    local_20 = *(int *)(iVar6 + 4);
    local_1c = *(int **)(iVar6 + 8);
    FUN_66248e00(this,*(int *)((int)this + 0x2c),&local_20);
    FUN_66248fa0((int)this);
    if (*(int *)((int)this + 0x15f0) != 0) {
      uVar4 = *(undefined4 *)(iVar6 + 8);
      uVar5 = *(undefined4 *)(iVar6 + 4);
      param_1 = (*local_8)(*(int *)((int)this + 0x15f0),*(undefined4 *)((int)this + 0x1604),
                           *(undefined4 *)((int)this + 0x1608),*(undefined4 *)((int)this + 0x15f4),0
                           ,0,uVar5,uVar4,param_1,uVar5,uVar4,local_c,0,0,uVar5,uVar4);
      FUN_66248f70((int)this);
      FUN_6624b7c0((uint *)((int)this + 0x48),(uint *)((int)this + 0xd40),0);
      FUN_6624bb00((uint *)((int)this + 0x48),(int)this + 0xd40,(uint *)((int)this + 0x11ac),
                   &param_3->left,piVar7);
LAB_66248886:
      FUN_6624b6a0((uint *)((int)this + 0x48),(uint *)((int)this + 0xd40),0,
                   (uint *)((int)this + 0x30),(uint *)((int)this + 0x44));
      goto LAB_66248892;
    }
  }
  else if ((((local_1c == (int *)0xa) || ((-1 < (int)local_1c && ((int)local_1c < 5)))) &&
           ((iVar3 = *(int *)((int)this + 0x2c), iVar3 == 7 || (iVar3 == 8)))) &&
          ((param_2 * 2 < local_14 || (param_2 * 2 < local_10)))) {
    local_20 = param_2;
    local_1c = param_4;
    FUN_66248e00(this,iVar3,&local_20);
    FUN_66248fa0((int)this);
    if (*(int *)((int)this + 0x15f0) != 0) {
      param_1 = (*local_8)(*(undefined4 *)((int)this + 0x15f0),*(undefined4 *)((int)this + 0x1604),
                           *(undefined4 *)((int)this + 0x1608),*(undefined4 *)((int)this + 0x15f4),
                           *piVar7,piVar7[1],param_2,param_4,param_1,*(undefined4 *)(iVar6 + 4),
                           *(undefined4 *)(iVar6 + 8),local_c,*piVar7,piVar7[1],param_2,param_4);
      FUN_66248f70((int)this);
      FUN_6624b7c0((uint *)((int)this + 0x48),(uint *)((int)this + 0xd40),0);
      FUN_6624bb00((uint *)((int)this + 0x48),(int)this + 0xd40,(uint *)((int)this + 0x11ac),
                   &param_3->left,piVar7);
      goto LAB_66248886;
    }
  }
  param_1 = (*local_8)(*(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x3c),
                       *(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44),
                       param_3->left,param_3->top,local_14,local_10,param_1,
                       *(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),local_c,*piVar7,
                       piVar7[1],param_2,param_4);
LAB_66248892:
  if (param_1 == 0) {
    local_18 = 0;
    FUN_66248a80(this,&param_3->left);
  }
  FUN_66249ee0((void *)((int)this + 0x163c),param_3,(uint *)((int)this + 0xd40));
  return local_18;
}


