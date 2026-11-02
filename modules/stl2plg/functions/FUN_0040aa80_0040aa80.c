/* Module: stl2plg.dll
   Function: FUN_0040aa80
   Address: 0040aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040aa80(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD unaff_retaddr;
  DWORD DVar5;
  undefined1 in_stack_0000002c;
  undefined1 in_stack_0000002d;
  undefined1 in_stack_0000002e;
  undefined1 in_stack_0000002f;
  char in_stack_00000030;
  char in_stack_00000033;
  HANDLE in_stack_00010048;
  undefined4 *in_stack_0001004c;
  LPSTR in_stack_00010050;
  SIZE_T in_stack_00010054;
  int *in_stack_00010058;
  
  FUN_00462620();
  puVar4 = (undefined4 *)&stack0x0000001c;
  for (iVar3 = 0x400a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  SetFilePointer(in_stack_00010048,0,(PLONG)0x0,0);
  ReadFile(in_stack_00010048,&stack0x00000004,0x15,(LPDWORD)&stack0x00000000,(LPOVERLAPPED)0x0);
  if (unaff_retaddr != 0x15) {
    return 0x8004e00b;
  }
  FUN_00409ea0((int)&stack0x0000001c,&stack0x00000020);
  FUN_0040abe0(in_stack_00010050,in_stack_00010054,(int)&stack0x00000020);
  bVar1 = FUN_0040a0c0((int)&stack0x00000020);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    DVar5 = 0x8004e00b;
  }
  else {
    FUN_0040fe70(in_stack_0001004c,(in_stack_00000030 == ' ') + 0x1b,
                 (CONCAT12(in_stack_0000002f,CONCAT11(in_stack_0000002e,in_stack_0000002d)) & 0xff)
                 * 0x100 + (CONCAT12(in_stack_0000002e,CONCAT11(in_stack_0000002d,in_stack_0000002c)
                                    ) & 0xff),
                 (CONCAT11(in_stack_00000030,in_stack_0000002f) & 0xff) * 0x100 +
                 (CONCAT12(in_stack_00000030,CONCAT11(in_stack_0000002f,in_stack_0000002e)) & 0xff),
                 (uint *)0x0,0,(int *)0x0);
    DVar5 = 0x15;
    if (in_stack_00010058 != (int *)0x0) {
      uVar2 = (uint)*(ushort *)((int)in_stack_0001004c + 0xe) * in_stack_0001004c[1] + 0x1f;
      iVar3 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
      *in_stack_00010058 = iVar3;
      if (in_stack_00000033 != '\0') {
        *in_stack_00010058 = -iVar3;
        return 0x15;
      }
    }
  }
  return DVar5;
}


