/* Module: sipr3260.dll
   Function: FUN_632a1500
   Address: 632a1500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_632a1500(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = -1;
  iVar2 = FUN_632a1420((int)this);
  if ((iVar2 == 0) && (*(code **)((int)this + 0x6d) != (code *)0x0)) {
    sVar1 = (**(code **)((int)this + 0x6d))(*(undefined4 *)((int)this + 0x45),param_3,param_4);
  }
  iVar3 = -0x7fffbffb;
  if (sVar1 == 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}


