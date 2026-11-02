/* Module: mp3plug.dll
   Function: FUN_5f713f50
   Address: 5f713f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f713f50(void *this,undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(char **)this = s__>q_P_q__5f74d030;
  while ((((iVar2 = iVar1, 1 << ((byte)iVar1 & 0x1f) < param_2 && (iVar2 = iVar1 + 1, iVar2 < 0x10))
          && (1 << ((byte)iVar2 & 0x1f) < param_2)) &&
         ((iVar2 = iVar1 + 2, iVar2 < 0x10 && (1 << ((byte)iVar2 & 0x1f) < param_2))))) {
    iVar2 = iVar1 + 3;
    if ((0xf < iVar2) ||
       ((param_2 <= 1 << ((byte)iVar2 & 0x1f) || (iVar1 = iVar1 + 4, iVar2 = iVar1, 0xf < iVar1))))
    break;
  }
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = 1 << ((byte)iVar2 & 0x1f);
  *(undefined1 *)((int)this + 0x28) = 0;
  *(int *)((int)this + 8) = iVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0xc) = iVar1 * 8;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  if (param_3 != '\0') {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
  }
  return this;
}


