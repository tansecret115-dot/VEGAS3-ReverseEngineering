/* Module: vegas30k.dll
   Function: FUN_011851d0
   Address: 011851d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011851d0(int param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iStack_24;
  int local_20;
  int local_1c;
  uint uStack_14;
  
  iVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x608);
  iVar6 = 0;
  local_20 = 0;
  local_1c = 0;
  uStack_14 = 0x3ff00000;
  if (*(int *)(param_1 + 0x48) != 0) {
    uStack_14 = 0xbff00000;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if ((puVar1 == (undefined4 *)0x0) || ((iVar3 == -3 && (iVar6 == -1)))) {
          return;
        }
        if ((puVar1[0xe] & 0x10000) == 0) break;
        puVar1 = (undefined4 *)puVar1[0x5b];
      }
      if ((*(int *)(param_1 + 0x824) == 0) || ((*(byte *)(param_1 + 0x20) & 0x60) != 0)) break;
      puVar1 = (undefined4 *)puVar1[0x5b];
    }
    if ((puVar1[0xe] & 4) != 0) break;
LAB_01185413:
    puVar1 = (undefined4 *)puVar1[0x5b];
  }
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x16] = *(undefined4 *)(param_1 + 0x8a0);
  puVar1[0x17] = *(undefined4 *)(param_1 + 0x8a4);
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar5 = puVar1[0x16];
    puVar1[0x16] = uVar5 - param_2;
    puVar1[0x17] = (puVar1[0x17] - param_3) - (uint)(uVar5 < param_2);
  }
  puVar1[0x18] = param_4 >> 0x1d & 1;
  puVar1[0xf] = param_4;
  do {
    uVar4 = param_2 - puVar1[0xc];
    iVar3 = (param_3 - puVar1[0xd]) - (uint)(param_2 < (uint)puVar1[0xc]);
    iVar6 = (uint)*(ushort *)(puVar1 + 4) * puVar1[0xc] + puVar1[9];
    uVar5 = (*(code *)puVar1[7])
                      (param_1,0x20,puVar1[8],puVar1 + 1,iVar6,puVar1[0xf],
                       (double)((ulonglong)uStack_14 << 0x20) * *(double *)(param_1 + 0x60),
                       puVar1[0x16],puVar1[0x17],uVar4,iVar3,*(undefined4 *)(param_1 + 0x894),
                       *(undefined4 *)(param_1 + 0x898),*(undefined4 *)(param_1 + 0x89c));
    iStack_24 = (int)uVar5 >> 0x1f;
    if (uVar5 == 0xfffffffe) {
      puVar1[0xb] = 1;
      uVar5 = uVar4;
      iStack_24 = iVar3;
    }
    else {
      if (uVar5 == 0xfffffffd) {
        local_20 = -3;
        local_1c = -1;
        iVar3 = local_20;
        iVar6 = local_1c;
        goto LAB_01185413;
      }
      puVar1[0xb] = 0;
    }
    if ((param_4 & 0x20000000) != 0) {
      FUN_011973b0(puVar1[0x16]);
    }
    (**(code **)(*(int *)*puVar1 + 0xa8))
              (*puVar1,puVar1[0x16],puVar1[0x17],iVar6,uVar5,iStack_24,
               *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x48),(uint)puVar1[0xf] >> 0x1c & 1,puVar1[0xb]);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar4 + uVar5;
    uVar2 = puVar1[0x16];
    puVar1[0xd] = puVar1[0xd] + iStack_24 + (uint)CARRY4(uVar4,uVar5);
    puVar1[0x16] = uVar2 + uVar5;
    uVar4 = puVar1[0x14];
    puVar1[0x17] = puVar1[0x17] + iStack_24 + (uint)CARRY4(uVar2,uVar5);
    puVar1[0x14] = uVar4 + uVar5;
    puVar1[0x15] = puVar1[0x15] + iStack_24 + (uint)CARRY4(uVar4,uVar5);
    puVar1[0xf] = 0;
    puVar1[0x18] = 0;
    iVar3 = local_20;
    iVar6 = local_1c;
    if ((param_3 < (int)puVar1[0xd]) ||
       ((param_3 <= (int)puVar1[0xd] && (param_2 <= (uint)puVar1[0xc])))) goto LAB_01185413;
  } while( true );
}


