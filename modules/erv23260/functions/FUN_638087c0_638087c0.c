/* Module: erv23260.dll
   Function: FUN_638087c0
   Address: 638087c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638087c0(void *this,int param_1,void *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0x6d8);
  if (((((iVar2 == 6) || (*(int *)((int)this + 0x5f0) != 0)) || (*(int *)((int)this + 0x610) != 0))
      || (((*(int *)((int)this + 0x60c) != 0 || (*(int *)((int)this + 0x614) != 0)) ||
          ((*(int *)((int)this + 0x628) != 0 ||
           ((*(int *)((int)this + 0x624) != 0 || (*(int *)((int)this + 0x620) != 0)))))))) ||
     ((iVar4 = *(int *)((int)this + 0x5c0), *(int *)(iVar4 + 0x828) != 2 ||
      ((((iVar3 = *(int *)((int)this + 0x5ec), iVar3 == 2 || (iVar3 == 3)) || (iVar3 == 5)) ||
       (iVar3 == 4)))))) {
    *(undefined4 *)((int)this + 0x5dc) = 7;
    *(int *)((int)this + 0x604) = iVar2;
    *(undefined1 *)((int)this + 0x600) = 1;
    if (*(int *)((int)this + 0x5ec) == 0) {
      *(undefined1 *)((int)this + 0x600) = 1;
    }
    iVar4 = *(int *)((int)this + 0x5c0);
    uVar1 = *(undefined1 *)(iVar4 + 0x828);
    *(undefined4 *)((int)this + 0x658) = *(undefined4 *)((int)this + 4);
    *(undefined1 *)((int)this + 0x654) = uVar1;
    *(undefined4 *)((int)this + 0x65c) = *(undefined4 *)((int)this + 8);
  }
  else {
    *(int *)((int)this + 0x5dc) = iVar2;
  }
  FUN_637fc500(param_2,*(int *)(iVar4 + 0x844),iVar4 + 0x848);
  FUN_637fa8b0(param_2,(int *)((int)this + 0x5d8),param_1);
  if (*(char *)((int)this + 0x66d) == -0x4c) {
    *(undefined1 *)((int)this + 0x66c) = 0;
    *(undefined1 *)((int)this + 0x66d) = 0;
  }
  return;
}


