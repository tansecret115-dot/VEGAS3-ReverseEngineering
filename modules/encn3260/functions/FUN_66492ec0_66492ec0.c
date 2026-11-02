/* Module: encn3260.dll
   Function: FUN_66492ec0
   Address: 66492ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66492ec0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) || (*param_2 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 3;
  }
  if (iVar3 == 0) {
    *param_2 = 0;
    return 0x80040009;
  }
  *param_2 = (iVar1 - iVar3) + *param_2;
  *param_1 = iVar3;
  uVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x10))
                    (*(int **)((int)this + 0x14),0,*(undefined4 *)((int)this + 0x20));
  return uVar2;
}


