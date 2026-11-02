/* Module: rv103260.dll
   Function: FUN_636a4210
   Address: 636a4210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a4210(void *this,int *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 *puVar4;
  short local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  uint local_1e;
  uint local_1a;
  uint local_16;
  uint local_12;
  uint local_c;
  uint local_8;
  
  iVar3 = 0;
  this_00 = operator_new(0x18);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_636a5800(this_00,s_drv13260_dll_636a8238,2);
  }
  *(undefined4 **)((int)this + 0x20) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (puVar1[1] == 0) {
    pFVar2 = FUN_636a5a50(puVar1,s_RV10toRGB3Init_636a8228);
    *(FARPROC *)((int)this + 0x58) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toRGB3Alloc_636a8218);
    *(FARPROC *)((int)this + 0x5c) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toRGB3Free_636a8208);
    *(FARPROC *)((int)this + 0x60) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toYUVTransform_636a81f4);
    *(FARPROC *)((int)this + 0x9a) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toYUVPostfilter_636a81e0);
    *(FARPROC *)((int)this + 0x9e) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toYUVPostMove_636a81cc);
    *(FARPROC *)((int)this + 0xa2) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toYUVTemporalInterp_636a81b4);
    *(FARPROC *)((int)this + 0xa6) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RV10toYUVTemporalSetup_636a819c);
    *(FARPROC *)((int)this + 0xaa) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_GetRV10DecParams_636a8188);
    *(FARPROC *)((int)this + 100) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_SetRV10DecParams_636a8174);
    *(FARPROC *)((int)this + 0x68) = pFVar2;
  }
  else {
    *(undefined4 *)((int)this + 0x20) = 0;
    iVar3 = 0x6e;
  }
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)param_1[1];
    *(undefined4 *)((int)this + 0x32) = *puVar1;
    *(undefined4 *)((int)this + 0x36) = puVar1[1];
    *(undefined4 *)((int)this + 0x3a) = puVar1[2];
    *(undefined2 *)((int)this + 0x3e) = *(undefined2 *)(puVar1 + 3);
    *(undefined2 *)((int)this + 0x40) = *(undefined2 *)((int)puVar1 + 0xe);
    *(undefined2 *)((int)this + 0x42) = *(undefined2 *)(puVar1 + 4);
    *(undefined2 *)((int)this + 0x44) = *(undefined2 *)((int)puVar1 + 0x12);
    *(undefined2 *)((int)this + 0x46) = *(undefined2 *)(puVar1 + 5);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)puVar1 + 0x16);
    iVar3 = *param_1;
    memmove(&local_8,(void *)(iVar3 + 0x1a),4);
    memmove(&local_c,(void *)(iVar3 + 0x1e),4);
    *(int *)((int)this + 0x32) = *(int *)((int)this + 0x32) + -8;
    local_8 = FUN_636a5c30(local_8);
    local_12 = FUN_636a5c30(local_c);
    *puVar4 = 0x1a;
    *(undefined2 *)(puVar4 + 3) = *(undefined2 *)((int)this + 0x3e);
    *(undefined2 *)((int)puVar4 + 0xe) = *(undefined2 *)((int)this + 0x40);
    *(undefined2 *)((int)puVar4 + 0x12) = 0;
    *(undefined2 *)((int)puVar4 + 0x16) = 0;
    *(undefined2 *)(puVar4 + 5) = 0;
    *(undefined2 *)(puVar4 + 6) = 0;
    *(undefined2 *)(puVar4 + 4) = 0xc;
    puVar1 = (undefined4 *)((int)this + 0x80);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)puVar4;
    *(int *)((int)this + 0x14) = param_1[2];
    *(undefined4 *)((int)this + 0x4c) = 8;
    *(uint *)((int)this + 0x24) =
         ((*(ushort *)((int)this + 0x8c) + 0x40) * (uint)*(ushort *)((int)this + 0x90) + 0x1f >> 3 &
         0x1ffffffc) * (*(ushort *)((int)this + 0x8e) + 0x40);
    local_26 = *(undefined2 *)((int)this + 0x3e);
    local_24 = *(undefined2 *)((int)this + 0x40);
    local_28 = (*(int *)((int)this + 0x9a) != 0) + 10;
    local_20 = *(undefined2 *)((int)this + 0x46);
    local_22 = *(undefined2 *)((int)this + 0x44);
    local_1a = local_8 & 1;
    local_16 = local_8 >> 3 & 1;
    local_1e = local_8 >> 2 & 1;
    *(undefined4 *)((int)this + 0x50) = 0;
    local_c = local_12;
    iVar3 = FUN_636a41c0(this,&local_28);
    *(uint *)((int)this + 0x18) = (uint)(iVar3 == 0);
    FUN_636a44c0(this);
  }
  return iVar3;
}


