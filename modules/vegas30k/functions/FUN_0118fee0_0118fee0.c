/* Module: vegas30k.dll
   Function: FUN_0118fee0
   Address: 0118fee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0118fee0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_18 [6];
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  iVar3 = *(int *)(param_1 + 0xa4);
  if ((((*(byte *)(param_1 + 0xc) & 0x40) != 0) && (*(int *)(param_1 + 0xfc) <= iVar3)) &&
     ((*(int *)(param_1 + 0xfc) < iVar3 || (*(uint *)(param_1 + 0xf8) < uVar1)))) {
    FUN_01191cd0();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf;
  }
  if ((*(byte *)(param_1 + 0xc) & 0x80) != 0) {
    FUN_01191cd0();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff7f;
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xf8) = uVar1;
  *(int *)(param_1 + 0xfc) = iVar3;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xc4);
  if (-1 < *(int *)(param_1 + 0xa4)) {
    uVar2 = *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0xe8) = uVar2;
    *(uint *)(param_1 + 0xf8) = uVar2 + uVar1;
    *(uint *)(param_1 + 0xfc) = *(int *)(param_1 + 0xe4) + iVar3 + (uint)CARRY4(uVar2,uVar1);
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xe4);
  }
  _SfGetMillisec_0();
  iVar3 = FUN_01191c80(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
  if (iVar3 == 0) {
    local_18[0] = *(undefined4 *)(param_1 + 0x44);
    _SFSMPTE_NanoToSMPTE_12
              (*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),local_18);
  }
  _SfGetMillisec_0();
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    return 1;
  }
  iVar3 = FUN_01191ca0(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),0,0);
  if (-1 < iVar3) {
    local_18[0] = *(undefined4 *)(param_1 + 0x44);
    _SFSMPTE_NanoToSMPTE_12
              (*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),local_18);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
    return iVar3;
  }
  FUN_01191cd0();
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf | 0x300;
  SetEvent(*(HANDLE *)(param_1 + 0x24));
  return iVar3;
}


