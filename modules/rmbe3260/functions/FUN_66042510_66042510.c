/* Module: rmbe3260.dll
   Function: FUN_66042510
   Address: 66042510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66042510(void *this,undefined4 param_1,char *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  FARPROC pFVar4;
  char local_14 [16];
  
  if (param_2 == (char *)0x0) {
    iVar1 = FUN_660429c0(param_1,local_14);
    if (iVar1 == 0) {
      return 0x80070057;
    }
    pvVar2 = operator_new(0x18);
    if (pvVar2 != (void *)0x0) {
      puVar3 = FUN_660516f0(pvVar2,local_14,2);
      goto LAB_6604257a;
    }
  }
  else {
    pvVar2 = operator_new(0x18);
    if (pvVar2 != (void *)0x0) {
      puVar3 = FUN_660516f0(pvVar2,param_2,2);
      goto LAB_6604257a;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_6604257a:
  *(undefined4 **)this = puVar3;
  if (puVar3[3] == 0) {
    iVar1 = FUN_66042960(param_1,local_14);
    if (iVar1 != 0) {
      puVar3 = *(undefined4 **)this;
      if (puVar3 != (undefined4 *)0x0) {
        FUN_66051720(puVar3);
        operator_delete(puVar3);
        *(undefined4 *)this = 0;
      }
      pvVar2 = operator_new(0x18);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_660516f0(pvVar2,local_14,2);
      }
      *(undefined4 **)this = puVar3;
    }
  }
  if (*(int *)((int)*(void **)this + 0xc) != 0) {
    pFVar4 = FUN_66051940(*(void **)this,s_PNCodec_Open_6606e5c8);
    *(FARPROC *)((int)this + 4) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNCodec_Close_6606e5b8);
    *(FARPROC *)((int)this + 8) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNCodec_StreamOpen_6606e5a4);
    *(FARPROC *)((int)this + 0xc) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_Close_6606e594);
    *(FARPROC *)((int)this + 0x10) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_SetDataCallback_6606e578);
    *(FARPROC *)((int)this + 0x14) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_GetStreamHeaderSize_6606e558);
    *(FARPROC *)((int)this + 0x18) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_GetStreamHeader_6606e53c);
    *(FARPROC *)((int)this + 0x1c) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_Input_6606e52c);
    *(FARPROC *)((int)this + 0x20) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_SetOutputPacketSize_6606e50c);
    *(FARPROC *)((int)this + 0x24) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_GetInputBufferSize_6606e4f0);
    *(FARPROC *)((int)this + 0x28) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_GetProperty_6606e4d8);
    *(FARPROC *)((int)this + 0x2c) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_SetProperty_6606e4c0);
    *(FARPROC *)((int)this + 0x30) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNStream_GetIPNUnknown_6606e4a8);
    *(FARPROC *)((int)this + 0x34) = pFVar4;
    pFVar4 = FUN_66051940(*(void **)this,s_PNCodec_GetUIName_6606e494);
    *(FARPROC *)((int)this + 0x38) = pFVar4;
    if (((((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) &&
         (*(int *)((int)this + 0xc) != 0)) &&
        ((((*(int *)((int)this + 0x10) != 0 && (*(int *)((int)this + 0x14) != 0)) &&
          ((*(int *)((int)this + 0x18) != 0 &&
           ((*(int *)((int)this + 0x1c) != 0 && (*(int *)((int)this + 0x20) != 0)))))) &&
         (*(int *)((int)this + 0x24) != 0)))) &&
       (((*(int *)((int)this + 0x28) != 0 && (*(int *)((int)this + 0x34) != 0)) &&
        (pFVar4 != (FARPROC)0x0)))) {
      return 0;
    }
  }
  return 0x80004005;
}


