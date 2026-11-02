/* Module: aviplug.dll
   Function: FUN_5f955a8c
   Address: 5f955a8c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f955a8c(void *this,undefined4 param_1,int *param_2)

{
  int in_EAX;
  code *pcVar1;
  uint uVar2;
  int unaff_EDI;
  
  if ((((((param_2[0xb] == (uint)*(ushort *)(in_EAX + 0xe)) && (param_2[8] == *(int *)(in_EAX + 4)))
        && (param_2[9] == *(int *)(in_EAX + 8))) &&
       ((param_2[10] == *(int *)(in_EAX + 0x10) && (param_2[0xc] == *(int *)(in_EAX + 0x14))))) &&
      ((param_2[0x10] == (uint)*(ushort *)((int)this + 0xe) &&
       ((param_2[0xd] == *(int *)((int)this + 4) && (param_2[0xe] == *(int *)((int)this + 8)))))))
     && (param_2[0xf] == *(int *)((int)this + 0x10))) {
    (*(code *)param_2[7])
              (param_2[6],*(undefined4 *)(unaff_EDI + 8),*(undefined4 *)(unaff_EDI + 0x10),
               param_2[0x11]);
    return 0;
  }
  pcVar1 = (code *)(**(code **)(*param_2 + 0x40))(param_2);
  if (pcVar1 == (code *)0x0) {
    return 0xfffffffe;
  }
  uVar2 = (uint)*(ushort *)(*(int *)(unaff_EDI + 0xc) + 0xe) *
          *(int *)(*(int *)(unaff_EDI + 0xc) + 4) + 0x1f;
  (*pcVar1)(param_2[6],*(undefined4 *)(unaff_EDI + 8),*(undefined4 *)(unaff_EDI + 0x10),
            -((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3));
  return 0;
}


