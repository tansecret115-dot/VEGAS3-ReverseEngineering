/* Module: erv23260.dll
   Function: FUN_63808600
   Address: 63808600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63808600(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined1 *)((int)this + 0x665) = 0;
  *(int *)((int)this + 0x5ec) = param_2;
  *(undefined1 *)((int)this + 0x666) = 0;
  *(uint *)((int)this + 0x5d8) = uVar1 % uVar2;
  if (param_2 == 1) {
    *(undefined4 *)((int)this + 0x5f8) = *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x80c);
  }
  else if (param_2 == 3) {
    uVar5 = *(undefined1 *)this;
    *(undefined1 *)((int)this + 0x665) = uVar5;
    if (*(int *)((int)this + 0xbc) == 4) {
      uVar5 = *(undefined1 *)((int)this + 0x3c);
    }
    *(undefined1 *)((int)this + 0x666) = uVar5;
  }
  else if ((param_2 == 4) || (param_2 == 5)) {
    *(undefined1 *)((int)this + 0x665) = *(undefined1 *)this;
    *(undefined1 *)((int)this + 0x666) = *(undefined1 *)((int)this + 0x3c);
  }
  *(int *)((int)this + 0x5f0) = *(int *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x5f4) = 0;
  *(int *)((int)this + 0x610) = *(int *)((int)this + 0x70);
  uVar3 = *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x888);
  *(undefined4 *)((int)this + 0x614) = *(undefined4 *)((int)this + 0x74);
  iVar4 = *(int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x650) = uVar3;
  *(int *)((int)this + 0x624) = iVar4;
  *(int *)((int)this + 0x60c) = *(int *)((int)this + 0x6c);
  *(int *)((int)this + 0x620) = *(int *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x660) = 1;
  if ((*(int *)((int)this + 0x6c) != 0) && (param_2 != 0)) {
    *(undefined4 *)((int)this + 0x60c) = 0;
  }
  if ((*(int *)((int)this + 0x60c) != 0) && (iVar4 == 0)) {
    *(undefined4 *)((int)this + 0x60c) = 0;
  }
  if (((((*(int *)((int)this + 0x6d8) == 6) || (*(int *)((int)this + 0x68) != 0)) ||
       (*(int *)((int)this + 0x70) != 0)) ||
      (((*(int *)((int)this + 0x60c) != 0 || (*(int *)((int)this + 0x74) != 0)) ||
       ((*(int *)((int)this + 0x628) != 0 || ((iVar4 != 0 || (*(int *)((int)this + 0x78) != 0)))))))
      ) || ((*(int *)(*(int *)((int)this + 0x5c0) + 0x828) != 2 ||
            ((((param_2 == 2 || (param_2 == 3)) || (param_2 == 5)) || (param_2 == 4)))))) {
    *(undefined4 *)((int)this + 0x5dc) = 7;
  }
  else {
    *(int *)((int)this + 0x5dc) = *(int *)((int)this + 0x6d8);
  }
  if (*(int *)((int)this + 0x5dc) != 7) {
    *(undefined4 *)((int)this + 0x64c) = 0;
    return;
  }
  if (param_2 != 3) {
    *(uint *)((int)this + 0x738) = (uint)(*(int *)((int)this + 0x738) == 0);
  }
  *(undefined4 *)((int)this + 0x64c) = *(undefined4 *)((int)this + 0x738);
  return;
}


