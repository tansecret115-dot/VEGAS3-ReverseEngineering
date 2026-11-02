/* Module: rmto3260.dll
   Function: FUN_662dc1c0
   Address: 662dc1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dc1c0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -0x7fffbffd;
  }
  *(int *)((int)this + 0x2d) = param_2;
  *(undefined2 *)((int)this + 0x2b) = *(undefined2 *)(param_1 + 10);
  iVar1 = FUN_662dc200(this,*(byte **)(param_1 + 0x36),*(uint *)(param_1 + 0x32));
  return iVar1;
}


