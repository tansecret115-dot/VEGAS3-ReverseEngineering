/* Module: pncrt.dll
   Function: safe_fdiv
   Address: 7803182c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* safe_fdiv */

undefined4 __cdecl safe_fdiv(void)

{
  undefined4 in_EAX;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffe6;
  
                    /* 0x3182c  423  _safe_fdiv */
  FUN_78031050((int)in_ST0,(uint)((unkuint10)in_ST0 >> 0x20),(ushort)((unkuint10)in_ST0 >> 0x40),
               (int)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),
               CONCAT22(in_stack_ffffffe6,(short)((unkuint10)in_ST1 >> 0x40)));
  return in_EAX;
}


