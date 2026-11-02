/* Module: vegas30k.dll
   Function: BufferPool_Create
   Address: 0100fce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall BufferPool_Create(struct IUnknown *,struct _GUID const &,long,long,void * *) */

long BufferPool_Create(IUnknown *param_1,_GUID *param_2,long param_3,long param_4,void **param_5)

{
  int *piVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  ulong *puVar4;
  _GUID *p_Var5;
  long lVar6;
  bool bVar7;
  
                    /* 0xfce0  19  ?BufferPool_Create@@YGJPAUIUnknown@@ABU_GUID@@JJPAPAX@Z */
  *param_5 = (void *)0x0;
  if (param_1 != (IUnknown *)0x0) {
    iVar3 = 4;
    bVar7 = true;
    puVar4 = &DAT_011dab80;
    p_Var5 = param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *puVar4 == p_Var5->Data1;
      puVar4 = puVar4 + 1;
      p_Var5 = (_GUID *)&p_Var5->Data2;
    } while (bVar7);
    if (!bVar7) {
      return -0x7ffbfef0;
    }
  }
  lVar6 = -0x7ff8fff2;
  hMem = GlobalAlloc(0x40,0x74);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 != (LPVOID)0x0) {
    iVar3 = FUN_0100e640(param_1,param_3,param_4);
    if (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 4);
      lVar6 = (**(code **)*piVar1)(piVar1,param_2,param_5);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return lVar6;
}


