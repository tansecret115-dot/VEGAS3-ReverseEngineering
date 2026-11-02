/* Module: sipr3260.dll
   Function: FUN_632a13c0
   Address: 632a13c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_632a13c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  short sVar1;
  
  if (*(code **)((int)this + 0x61) != (code *)0x0) {
    sVar1 = (**(code **)((int)this + 0x61))
                      (*(undefined4 *)((int)this + 0x41),param_1,param_2,param_3,param_4,param_5);
    return -(uint)(sVar1 != 0) & 0x80004005;
  }
  return -(uint)((short)param_5 != 0) & 0x80004005;
}


