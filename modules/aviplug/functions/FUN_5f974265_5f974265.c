/* Module: aviplug.dll
   Function: FUN_5f974265
   Address: 5f974265
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f974265(void)

{
  int in_EAX;
  uint uVar1;
  undefined8 *unaff_EDI;
  ulonglong in_MM0;
  
  uVar1 = (uint)(byte)(in_MM0 >> 0x38);
  *unaff_EDI = *(undefined8 *)
                (&DAT_5f9e1190 +
                (*(int *)(&DAT_5f9e0994 + uVar1 * 8) +
                (int)(in_MM0 >> (ulonglong)*(uint *)(&DAT_5f9e0990 + uVar1 * 8))) * 8);
  return in_EAX + 1;
}


