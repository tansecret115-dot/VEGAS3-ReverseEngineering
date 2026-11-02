/* Module: vegas30k.dll
   Function: FUN_011c7ab0
   Address: 011c7ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c7ab0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  MMRESULT MVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar4 = FUN_011c7b90();
    return uVar4;
  }
  MVar5 = waveInGetDevCapsA(*(UINT_PTR *)(param_1 + 0x44),(LPWAVEINCAPSA)(param_1 + 0x2a0),0x30);
  if (MVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 0x2a5);
    uVar2 = *(ushort *)(param_1 + 0x2a2);
    puVar7 = (undefined4 *)(param_1 + 0x2a8);
    puVar8 = (undefined4 *)(param_1 + 0xe8);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(uint *)(param_1 + 0x374) = (uint)bVar1;
    uVar3 = ((LPWAVEINCAPSA)(param_1 + 0x2a0))->wMid;
    *(uint *)(param_1 + 0x370) = (uint)uVar2;
    *(uint *)(param_1 + 0x36c) = (uint)uVar3;
    *(uint *)(param_1 + 0x378) = (uint)*(byte *)(param_1 + 0x2a4);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x2c8);
    *(uint *)(param_1 + 0x1f0) = (uint)*(ushort *)(param_1 + 0x2cc);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_011c8800();
  if (*(HMIXER *)(param_1 + 0x3dc) != (HMIXER)0x0) {
    mixerClose(*(HMIXER *)(param_1 + 0x3dc));
    *(undefined4 *)(param_1 + 0x3dc) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return 0;
}


