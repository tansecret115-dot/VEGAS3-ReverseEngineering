/* Module: wavplug.dll
   Function: FUN_5f3aa320
   Address: 5f3aa320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3aa320(HANDLE param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  LPCVOID in_stack_00000018;
  DWORD in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  
  iVar3 = in_stack_00000020;
  DVar1 = in_stack_0000001c;
  iVar2 = FUN_5f3aa2b0(param_1);
  if (-1 < iVar2) {
    iVar3 = FUN_5f3a9fb0((uint3)in_stack_00000018,param_1,in_stack_00000018,DVar1,iVar3,
                         (int *)&stack0x0000001c);
    if (iVar3 != 0) {
      return -0x7ffb1ff7;
    }
    if (in_stack_00000024 != (int *)0x0) {
      *in_stack_00000024 = in_stack_0000001c + 0x18;
      in_stack_00000024[1] = in_stack_00000020 + (uint)(0xffffffe7 < in_stack_0000001c);
    }
    iVar2 = 0;
  }
  return iVar2;
}


