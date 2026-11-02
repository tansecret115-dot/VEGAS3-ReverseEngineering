/* Module: mpgmux.dll
   Function: FUN_10005df0
   Address: 10005df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10005df0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  *(uint *)(param_1 + 0x11ac) = *(uint *)(param_1 + 0x11ac) & 0xfffffffb;
  puVar1 = FUN_10001020(0x8000,0x1001);
  *(undefined4 **)(param_1 + 0x1214) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x10;
  }
  *(undefined4 **)(param_1 + 0x1208) = puVar1 + 0xe;
  *(undefined1 **)(param_2 + 0x14) = &LAB_10005e90;
  *(int *)(param_2 + 0x24) = param_1;
  *(int *)(param_1 + 0x11fc) = param_2;
  if ((*(byte *)(param_1 + 0x11ac) & 2) != 0) {
    puVar1 = FUN_10001020(0x4000,0x1001);
    *(undefined4 **)(param_1 + 0x1218) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x10;
    }
    *(undefined4 **)(param_1 + 0x120c) = puVar1 + 0xe;
    *(undefined1 **)(param_3 + 0x14) = &LAB_10006020;
    *(int *)(param_3 + 0x24) = param_1;
    *(int *)(param_1 + 0x1200) = param_3;
  }
  return 0;
}


