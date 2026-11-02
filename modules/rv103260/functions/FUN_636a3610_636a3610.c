/* Module: rv103260.dll
   Function: FUN_636a3610
   Address: 636a3610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a3610(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_18;
  uint local_14;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  this_00 = operator_new(0x18);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_636a5800(this_00,s_erv13260_dll_636a8164,2);
  }
  *(undefined4 **)((int)this + 0x20) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (puVar1[1] == 0) {
    pFVar2 = FUN_636a5a50(puVar1,s_YUV420toRV10Init_636a8150);
    *(FARPROC *)((int)this + 0x5c) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10Free_636a813c);
    *(FARPROC *)((int)this + 0x60) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10Transform_636a8124);
    *(FARPROC *)((int)this + 0x58) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10GetDecodedFrames_636a8104);
    *(FARPROC *)((int)this + 100) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10GetDecodedYUVFrames_636a80e4);
    *(FARPROC *)((int)this + 0x68) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10GetParams_636a80cc);
    *(FARPROC *)((int)this + 0x6c) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10SetParams_636a80b4);
    *(FARPROC *)((int)this + 0x70) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10Proc_636a80a0);
    *(FARPROC *)((int)this + 0x78) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10Fill_636a808c);
    *(FARPROC *)((int)this + 0x74) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RGB3toYUV420Init_636a8078);
    *(FARPROC *)((int)this + 0x7c) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RGB3toYUV420Transform_636a8060);
    *(FARPROC *)((int)this + 0x80) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_RGB3toYUV420Free_636a804c);
    *(FARPROC *)((int)this + 0x84) = pFVar2;
    pFVar2 = FUN_636a5a50(*(void **)((int)this + 0x20),s_YUV420toRV10FastKeyframeSearch_636a802c);
    *(FARPROC *)((int)this + 0x88) = pFVar2;
  }
  else {
    *(undefined4 *)((int)this + 0x20) = 0;
    local_8 = 0x6e;
  }
  if (local_8 == 0) {
    puVar1 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)((int)this + 0x2d86);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
  }
  if (local_8 == 0) {
    puVar1 = (undefined4 *)param_1[1];
    *puVar1 = 0x1a;
    *(undefined2 *)((int)puVar1 + 0x12) = *(undefined2 *)((int)this + 0x2d98);
    *(undefined2 *)(puVar1 + 5) = *(undefined2 *)((int)this + 0x2d9a);
    *(undefined4 *)((int)puVar1 + 0x16) = *(undefined4 *)((int)this + 0x2d9c);
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)((int)this + 0x2d96);
    puVar4 = (undefined4 *)((int)this + 0x32);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
    local_18 = (uint)*(ushort *)((int)this + 0x3e);
    *(undefined4 *)((int)this + 0x14) = param_1[2];
    local_14 = (uint)*(ushort *)((int)this + 0x40);
    _local_10 = CONCAT22(*(undefined2 *)((int)this + 0x2d9a),*(undefined2 *)((int)this + 0x2d98));
    local_c = *(undefined4 *)((int)this + 0x2d9c);
    *(undefined4 *)((int)this + 0x24) = 0xffff;
    FUN_636a1100(*(void **)((int)this + 0x8c),(uint)*(ushort *)((int)this + 0x2d92),
                 (uint)*(ushort *)((int)this + 0x2d94));
    if ((*(ushort *)((int)this + 0x2d92) != *(ushort *)((int)this + 0x3e)) ||
       (*(short *)((int)this + 0x2d94) != *(short *)((int)this + 0x40))) {
      FUN_636a1170(*(void **)((int)this + 0x8c),(uint)*(ushort *)((int)this + 0x3e),
                   (uint)*(ushort *)((int)this + 0x40));
    }
    local_8 = FUN_636a3550(this,(int)&local_18);
    *(uint *)((int)this + 0x18) = (uint)(local_8 == 0);
  }
  return local_8;
}


