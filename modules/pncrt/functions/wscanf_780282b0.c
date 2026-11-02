/* Module: pncrt.dll
   Function: wscanf
   Address: 780282b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl wscanf(wchar_t *_Format,...)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined *unaff_retaddr;
  wchar_t *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  longlong in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  void *in_stack_00000024;
  undefined4 *in_stack_00000028;
  wchar_t in_stack_0000002c;
  
                    /* 0x282b0  768  wscanf */
  FUN_780094e0(0,0x7803f7f8);
  iVar1 = FUN_7802a4d0(&_iob,_Format,&stack0x00000008,unaff_ESI,unaff_retaddr,_Format,
                       in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
                       in_stack_0000001c,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                       in_stack_0000002c);
  FUN_78009550(0,0x7803f7f8);
  return iVar1;
}


