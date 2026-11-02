/* Module: encn3260.dll
   Function: FUN_664b4680
   Address: 664b4680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b4680(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  BITMAPINFO local_42c [24];
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = (char *)((int)this + 0x894);
  piVar3 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (!bVar4) {
    if ((param_1[2] - *param_1 != *(int *)((int)this + 0x89c) - *(int *)((int)this + 0x894)) ||
       (param_1[3] - param_1[1] != *(int *)((int)this + 0x8a0) - *(int *)((int)this + 0x898))) {
      FUN_664ba7d0((uint *)local_42c,0x2c,*(int *)this,param_1[2] - *param_1,param_1[3] - param_1[1]
                   ,(undefined1 *)0x0,0);
      FUN_664b60c0(*(uint **)((int)this + 8),(uint *)((int)this + 0xc));
      FUN_664b5f30(*(uint **)((int)this + 8),(uint *)((int)this + 0xc),local_42c,0,0);
    }
    *(int *)((int)this + 0x894) = *param_1;
    *(int *)((int)this + 0x898) = param_1[1];
    *(int *)((int)this + 0x89c) = param_1[2];
    *(int *)((int)this + 0x8a0) = param_1[3];
    *(int *)((int)this + 0x8b4) = 0;
    *(undefined4 *)((int)this + 0x8b8) = 0;
    *(undefined4 *)((int)this + 0x8bc) = 0;
    *(undefined4 *)((int)this + 0x8c0) = 0;
    *(int *)((int)this + 0x8bc) = param_1[2] - *param_1;
    *(int *)((int)this + 0x8c0) = param_1[3] - param_1[1];
    FUN_664b6660(*(uint **)((int)this + 8),(int)this + 0xc,param_2,(int *)((int)this + 0x8b4),
                 param_1);
  }
  return;
}


