/* Module: sfpaplug.dll
   Function: FUN_0041b540
   Address: 0041b540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b540(HANDLE param_1)

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
  iVar2 = FUN_0041b4d0(param_1);
  if (-1 < iVar2) {
    iVar3 = FUN_0041b1d0((uint3)in_stack_00000018,param_1,in_stack_00000018,DVar1,iVar3,
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


