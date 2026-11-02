/* Module: pncrt.dll
   Function: fwscanf
   Address: 78027620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fwscanf(FILE *_File,wchar_t *_Format,...)

{
  int iVar1;
  undefined *unaff_ESI;
  undefined4 unaff_EDI;
  void *unaff_retaddr;
  int in_stack_0000000c;
  longlong in_stack_00000010;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 *in_stack_00000024;
  wchar_t in_stack_00000028;
  
                    /* 0x27620  625  fwscanf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7802a4d0(_File,_Format,&stack0x0000000c,unaff_EDI,unaff_ESI,unaff_retaddr,
                       (wchar_t *)_File,(int)_Format,in_stack_0000000c,in_stack_00000010,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000028);
  FUN_78009510((uint)_File);
  return iVar1;
}


