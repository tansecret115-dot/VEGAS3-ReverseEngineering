/* Module: wmfplug2.dll
   Function: FUN_0041ba50
   Address: 0041ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0041ba50(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    return -0x7fff0001;
  }
  if ((param_1 == *(int *)((int)this + 0x30)) && (param_2 == *(int *)((int)this + 0x34))) {
    *param_3 = *(undefined4 *)((int)this + 0x40);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)((int)this + 0x30);
      param_4[1] = *(undefined4 *)((int)this + 0x34);
    }
    return 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    (**(code **)(*piVar1 + 0x40))(piVar1,*(int *)((int)this + 0x40));
  }
  iVar2 = (**(code **)(**(int **)((int)this + 100) + 0x3c))
                    (*(int **)((int)this + 100),param_1,param_2,param_3,0,0,0,0,0,0);
  if (-1 < iVar2) {
    *(int *)((int)this + 0x30) = param_1;
    *(int *)((int)this + 0x34) = param_2;
    *(undefined4 *)((int)this + 0x40) = *param_3;
    return iVar2;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  return iVar2;
}


