/* Module: pncrt.dll
   Function: FUN_78006ef0
   Address: 78006ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006ef0(void *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  FUN_78006e00(this);
  *(undefined ***)this = &PTR_LAB_780369c0;
  if ((param_2 == 0) && (param_1 != (char *)0x0)) {
    param_2 = FUN_780070b0(param_1);
  }
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    pcVar1 = (char *)FUN_78006050(&DAT_78041a90,param_2,0);
    *(char **)((int)this + 8) = pcVar1;
    *(int *)((int)this + 0xc) = param_2;
    if (pcVar1 != (char *)0x0) {
      FUN_780070d0(pcVar1,param_1,param_2);
      return this;
    }
  }
  return this;
}


