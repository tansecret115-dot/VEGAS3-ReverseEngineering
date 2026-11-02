/* Module: pncrt.dll
   Function: _Strftime
   Address: 78014fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  byte bVar1;
  tm *ptVar2;
  tm *ptVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
                    /* 0x14fb0  84  _Strftime */
  puVar4 = PTR_PTR_7804051c;
  if (param_5 != (void *)0x0) {
    puVar4 = param_5;
  }
  param_5 = (void *)_Maxsize;
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar7 = __setlc_active == 0;
  pbVar5 = (byte *)param_3;
  ptVar2 = param_4;
  if (!bVar7) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
    pbVar5 = (byte *)param_3;
    ptVar2 = param_4;
  }
  while ((ptVar3 = param_4, param_4 = ptVar2, param_5 != (void *)0x0 &&
         (bVar1 = *pbVar5, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0x23) {
        pbVar6 = pbVar5 + 2;
      }
      DAT_7804250c = (uint)(bVar1 == 0x23);
      FUN_78015100(*pbVar6,&ptVar3->tm_sec,(byte *)&param_1,(uint *)&param_5,(int)puVar4);
    }
    else {
      if (((_pctype[(uint)bVar1 * 2 + 1] & 0x80) != 0) && ((void *)0x1 < param_5)) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        pbVar5 = pbVar5 + 1;
        param_5 = (void *)((int)param_5 - 1);
      }
      *param_1 = *pbVar5;
      param_1 = param_1 + 1;
      param_5 = (void *)((int)param_5 + -1);
      pbVar6 = pbVar5;
    }
    ptVar2 = param_4;
    param_4 = ptVar3;
    pbVar5 = pbVar6 + 1;
  }
  if (bVar7) {
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  else {
    _unlock(0x13);
  }
  if (param_5 == (void *)0x0) {
    return 0;
  }
  *param_1 = '\0';
  return _Maxsize - (int)param_5;
}


