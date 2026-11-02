/* Module: rmbe3260.dll
   Function: FUN_6604f4b0
   Address: 6604f4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6604f4b0(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6)

{
  int iVar1;
  
  if ((param_5 != 0) && (param_6 != 0)) {
    *(int *)((int)this + 0xc) = param_6;
    *(int *)((int)this + 8) = param_5;
    iVar1 = FUN_66051b60(param_1,param_2,param_3,param_4);
    *(int *)((int)this + 4) = iVar1;
    return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return -0x7fffbffb;
}


