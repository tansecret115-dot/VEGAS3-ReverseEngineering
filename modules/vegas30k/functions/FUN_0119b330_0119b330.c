/* Module: vegas30k.dll
   Function: FUN_0119b330
   Address: 0119b330
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119b330(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x638);
  while (puVar1 != (undefined4 *)0x0) {
    if ((puVar1[9] == 0) && (*(int *)(param_1 + 0x24) == 1)) {
      puVar1 = (undefined4 *)puVar1[0x19];
    }
    else {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0x16c))(param_1);
      if (iVar3 != 0) break;
      puVar1[0x14] = 0;
      puVar1[0x16] = 0;
      puVar1[0xe] = 0;
      puVar1[0x10] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x17] = 0;
      puVar1[0xf] = 0;
      puVar1[0x11] = 0;
      puVar1[0x13] = 0;
      SetEvent((HANDLE)puVar1[0x18]);
      puVar1 = (undefined4 *)puVar1[0x19];
      uVar2 = FUN_011aaf10(param_1);
      FUN_011aaee0(param_1,uVar2 & 0xffffff9f);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff9f;
    }
  }
  *(undefined4 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  ResetEvent(*(HANDLE *)(param_1 + 0x660));
  ResetEvent(*(HANDLE *)(param_1 + 0x674));
  return iVar3;
}


