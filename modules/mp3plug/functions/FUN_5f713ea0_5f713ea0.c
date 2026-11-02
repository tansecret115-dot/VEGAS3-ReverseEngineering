/* Module: mp3plug.dll
   Function: FUN_5f713ea0
   Address: 5f713ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f713ea0(void *this,int param_1)

{
  SIZE_T SVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  *(char **)this = s__>q_P_q__5f74d030;
  while ((((iVar4 = iVar3, 1 << ((byte)iVar3 & 0x1f) < param_1 && (iVar4 = iVar3 + 1, iVar4 < 0x10))
          && (1 << ((byte)iVar4 & 0x1f) < param_1)) &&
         ((iVar4 = iVar3 + 2, iVar4 < 0x10 && (1 << ((byte)iVar4 & 0x1f) < param_1))))) {
    iVar4 = iVar3 + 3;
    if ((0xf < iVar4) ||
       ((param_1 <= 1 << ((byte)iVar4 & 0x1f) || (iVar3 = iVar3 + 4, iVar4 = iVar3, 0xf < iVar3))))
    break;
  }
  SVar1 = 1 << ((byte)iVar4 & 0x1f);
  *(SIZE_T *)((int)this + 8) = SVar1;
  *(SIZE_T *)((int)this + 0xc) = SVar1 * 8;
  uVar2 = FUN_5f681b80(SVar1);
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x28) = 1;
  return this;
}


