/* Module: rv103260.dll
   Function: FUN_636a34a0
   Address: 636a34a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_636a34a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0xd8) != 0x59555632) {
    pcVar1 = *(code **)((int)this + 100);
    if (pcVar1 != (code *)0x0) goto LAB_636a34c7;
    if (*(int *)((int)this + 0xd8) != 0x59555632) {
      return 0x6f;
    }
  }
  pcVar1 = *(code **)((int)this + 0x68);
  if (pcVar1 == (code *)0x0) {
    return 0x6f;
  }
LAB_636a34c7:
  uVar2 = (*pcVar1)(&param_1,&param_2,param_3,*(undefined4 *)((int)this + 0x90));
  return uVar2;
}


