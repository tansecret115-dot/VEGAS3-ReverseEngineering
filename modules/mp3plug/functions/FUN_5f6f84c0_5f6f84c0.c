/* Module: mp3plug.dll
   Function: FUN_5f6f84c0
   Address: 5f6f84c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6f84c0(void)

{
  int in_EAX;
  
  *(ushort *)(*(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) * 2) =
       *(ushort *)(*(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) * 2) &
       ((ushort)(*(int *)(&DAT_5f742d10 + *(int *)(in_EAX + 0xc) * -4) + -1 <<
                ((byte)*(int *)(in_EAX + 0xc) & 0x1f)) ^ 0xffff);
  *(ushort *)(*(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) * 2) =
       *(ushort *)(*(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) * 2) |
       *(short *)(in_EAX + 10) << ((byte)*(undefined4 *)(in_EAX + 0xc) & 0x1f);
  return;
}


