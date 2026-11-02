/* Module: vegas30k.dll
   Function: FUN_011371e0
   Address: 011371e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011371e0(int param_1,ULARGE_INTEGER *param_2)

{
  LARGE_INTEGER dlibMove;
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint unaff_ESI;
  ULARGE_INTEGER *pUVar4;
  ULARGE_INTEGER *plibNewPosition;
  uint local_30;
  ULONG local_2c;
  int aiStack_28 [2];
  undefined1 auStack_20 [8];
  IID IStack_18;
  
  sVar1 = wcslen((wchar_t *)(param_1 + 0x3c));
  local_2c = sVar1 * 2 + 2;
  (*((IStreamVtbl *)(param_2->s).LowPart)->Write)((IStream *)&param_2->s,&local_2c,4,&local_30);
  (*((IStreamVtbl *)(param_2->s).LowPart)->Write)
            ((IStream *)&param_2->s,(wchar_t *)(param_1 + 0x3c),local_2c,&local_30);
  (**(code **)(**(int **)(param_1 + 0x30) + 0xc))();
  WriteClassStm((LPSTREAM)&param_2->s,&IStack_18);
  pUVar4 = *(ULARGE_INTEGER **)(param_1 + 0x30);
  (**(code **)((pUVar4->s).LowPart + 0x1c))(pUVar4,auStack_20);
  (*((IStreamVtbl *)(param_2->s).LowPart)->Write)
            ((IStream *)&param_2->s,aiStack_28,4,(ULONG *)&stack0xffffffc0);
  (*((IStreamVtbl *)(param_2->s).LowPart)->Seek)
            ((IStream *)&param_2->s,(LARGE_INTEGER)0x100000000,(DWORD)&stack0xffffffc8,pUVar4);
  pUVar4 = *(ULARGE_INTEGER **)(param_1 + 0x30);
  plibNewPosition = param_2;
  IStack_18._4_4_ = (**(code **)((pUVar4->s).LowPart + 0x18))(pUVar4,param_2,1);
  if (-1 < (int)IStack_18._4_4_) {
    (*((IStreamVtbl *)(param_2->s).LowPart)->Seek)
              ((IStream *)&param_2->s,(LARGE_INTEGER)0x100000000,(DWORD)&stack0xffffffc8,pUVar4);
    uVar3 = aiStack_28[0] + (uint)CARRY4(unaff_ESI,local_2c);
    if ((unaff_ESI + local_2c != 0) || (uVar3 != local_30)) {
      dlibMove.s.HighPart = 0;
      dlibMove.s.LowPart = uVar3;
      (*((IStreamVtbl *)(param_2->s).LowPart)->Seek)
                ((IStream *)&param_2->s,dlibMove,0,plibNewPosition);
    }
  }
  (*((IStreamVtbl *)(param_2->s).LowPart)->Write)
            ((IStream *)&param_2->s,(void *)(param_1 + 0x34),4,(ULONG *)&stack0xffffffb8);
  iVar2._0_2_ = IStack_18.Data2;
  iVar2._2_2_ = IStack_18.Data3;
  return iVar2;
}


