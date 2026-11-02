/* Module: vegas30k.dll
   Function: _SfVideoFilterCache_Init@24
   Address: 010269b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long _SfVideoFilterCache_Init_24
               (ulong *param_1,_GUID *param_2,ulong param_3,IUnknown *param_4,ulong param_5,
               uint param_6)

{
  IUnknown **ppIVar1;
  IUnknown *This;
  ulong *puVar2;
  _GUID *p_Var3;
  long lVar4;
  uint uVar5;
  HRESULT HVar6;
  int iVar7;
  ulong *puVar8;
  undefined1 auStack_20 [12];
  uint uStack_14;
  int *piStack_8;
  
  p_Var3 = param_2;
                    /* 0x269b0  1252  _SfVideoFilterCache_Init@24 */
  puVar2 = param_1;
  puVar8 = param_1;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  ppIVar1 = (IUnknown **)(param_1 + 4);
  param_1[0x1e] = param_5;
  lVar4 = SfVideoPlugin_CreateTransform(ppIVar1,param_4,param_2);
  if ((-1 < lVar4) && (This = *ppIVar1, This != (IUnknown *)0x0)) {
    *puVar2 = p_Var3->Data1;
    puVar2[1] = *(ulong *)&p_Var3->Data2;
    puVar2[2] = *(ulong *)p_Var3->Data4;
    puVar2[3] = *(ulong *)(p_Var3->Data4 + 4);
    puVar2[0x1d] = param_3;
    (*This->lpVtbl->QueryInterface)(This,(IID *)&DAT_011e6948,(void **)(puVar2 + 5));
    puVar2[6] = 0;
    uVar5 = param_6;
    if (param_6 < 2) {
      uVar5 = 1;
    }
    puVar2[0x1f] = uVar5;
    param_1 = (ulong *)0x0;
    HVar6 = (*(*ppIVar1)->lpVtbl->QueryInterface)(*ppIVar1,(IID *)&DAT_011e68f8,&param_1);
    if (-1 < HVar6) {
      lVar4 = (**(code **)(*param_1 + 0xc))(param_1,auStack_20,0x20);
      uVar5 = (~uStack_14 >> 1 & 0x20 | ~uStack_14 & 0x80 | uStack_14 & 0x300) >> 4 |
              (uStack_14 & 1) << 2 | puVar2[0x1e] & 0xffffffc1;
      puVar2[0x1e] = uVar5;
      if (puVar2[0x1d] != 0xb) {
        puVar2[0x1e] = uVar5 | 4;
      }
      (**(code **)(*piStack_8 + 8))(piStack_8);
      return lVar4;
    }
    puVar2[0x1e] = puVar2[0x1e] | 6;
  }
  return lVar4;
}


